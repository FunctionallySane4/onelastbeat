import character, nico/vec, nico

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


proc show_projectile_hitboxes*(character: Character) =
  let hb = get_projectile_hitbox character
  rect(hb.x, hb.y, hb.x2, hb.y2)

proc detect_hit*(area1: float32, area2: float32) : bool =
    if area2 == 0.0: return false
    if area1 >= area2: return true
    else: return false

proc entity_collission*(player_character: Character, enemy: Character) =
  if enemy.sprite_slot == 3: return # bull is no
  let 
    pushback = 9
    enemy_hb = get_hurtbox enemy
    character_hb = get_hurtbox player_character
    opp_not_dead = enemy.state != Death
  if detect_hit(character_hb.x2, enemy_hb.x) and opp_not_dead:
    player_character.position.x -= pushback

