import character
import nico, nico/vec


proc get_hitbox*(character: Character, frame: int) : HitboxWrapped =
  for hitbox in character.hitboxes:
    let 
      x = character.position.x + hitbox.offset.x
      y = character.position.y + hitbox.offset.y
      w = hitbox.width
      h = hitbox.height

    if hitbox.frame == character.frame:
      return (x: x, y: y, x2: x+w, y2: y+h)
  
proc get_hurtbox*(character: Character) : HitboxWrapped =
  let 
    x = character.position.x + character.hurtbox.offset.x
    y = character.position.y + character.hurtbox.offset.y
    w = character.hurtbox.width
    h = character.hurtbox.height
  return (x: x, y: y, x2: x+w, y2: y+h)

proc get_projectile_hitbox*(character: Character) : HitboxWrapped =
  if character.projectile != nil:
    let 
      x = character.projectile.x
      y = character.projectile.y
      w = character.projectile.size.width
      h = character.projectile.size.height

    return (x: x, y: y, x2: x+w, y2: y+h)




proc show_hitboxes*(character: Character, frame: int) =
  let hb = get_hitbox(character, frame)
  rect(hb.x, hb.y, hb.x2, hb.y2)

proc show_projectile_hitboxes*(character: Character) =
  let hb = get_projectile_hitbox character
  rect(hb.x, hb.y, hb.x2, hb.y2)

# remove this shit
proc heartbeat*(heart: Heart) =
  var seconds_per_beat = 60.0 / heart.bpm
  var frames = 2
  var duration = seconds_per_beat / frames
  if heart.frame >= frames: 
    heart.frame = 0
  if heart.dt >= seconds_per_beat:
    heart.dt -= seconds_per_beat

# delete this later
when false:
  proc heart_update(dt: float32) =
    heartbeat benkei_char.heart
    benkei_char.heart.dt += dt # shove these two in a proc
    heart.frame = int(heart.dt / duration)

proc death(character: Character) =
  character.state = Death

proc detect_hit(area1: float32, area2: float32) : bool =
    if area2 == 0.0: return false
    if area1 >= area2: return true
    else: return false

proc damage*(character: Character, damage: float32) =
  if character.heart.stop_damage == false:
    sfx(1,3)
    # put to movement
    character.heart.bpm -= damage
    character.heart.stop_damage = true
    character.state = Hurt
    if character.heart.bpm <= 0:
      sfx(2,4)


proc projectile_firing(character: Character) =
# move this to combat later
  let 
    offset = (x: 6, y: 15)
    projectile = character.projectile

  # TODO: implement arrow detachment/decoupling
  # TODO: implement falling

  if projectile != nil:
    if character.state == PreAttack:
      projectile.stop_damage = false
      projectile.x = character.position.x + offset.x
      projectile.y = character.position.y + offset.y

    if character.state == Attack:
      projectile.is_released = true

    if projectile.is_released:
      projectile.x -= projectile.speed


proc combat*(character1: Character, character2: Character) =
  # Remember character1 must be left side and character2 is right side
  let vs_distance = character2.position.x - character1.position.x
  character1.distance_from_opp = vs_distance
  character2.distance_from_opp = vs_distance

  let 
    c1_hitbox = get_hitbox(character1, character1.frame)
    c2_hitbox = get_hitbox(character2, character2.frame)
    c1_hurtbox = get_hurtbox character1
    c2_hurtbox = get_hurtbox character2
    c2_proj = character2.projectile
    c2_proj_hitbox = get_projectile_hitbox character2

  if detect_hit(c1_hurtbox.x2, c2_hitbox.x):
    damage(character1, 30)
  if detect_hit(c1_hitbox.x2, c2_hurtbox.x):
    damage(character2, 30)
  if c2_proj != nil:
    if detect_hit(c1_hurtbox.x2, c2_proj_hitbox.x) and c2_proj.stop_damage == false:
      damage(character1, 15)
      c2_proj.stop_damage = true

  projectile_firing character1
  projectile_firing character2

  if character1.heart.bpm <= 0:
    death(character1)
  if character2.heart.bpm <= 0:
    death(character2)
