import character
import nico
import nico/vec

# TODO need to refactor this entire frame/animation logic! Wrap everything in a single type


type MovementOpts* = ref object
   frame_counter*: float32
   range*: tuple[min: int, max: int]
   current_speed*: float32
   lim*: int
   dash_timeout*: int

proc player_movement*(character: Character) =
  if btn(pcRight): character.state = WalkRight
  if btn pcLeft: character.state = WalkLeft

  if btn pcA:
    character.state = PreAttack
  if btnup pcA:
    character.state = Attack
  
  if btn(pcB) and btn(pcRight):
    character.state = DashRight

  if btn(pcB) and btn(pcLeft):
    character.state = DashLeft



  if btnup(pcRight) or btnup(pcLeft): character.state = Neutral

  


# change to warrior_move/benkei_move
# organize this shit later please
proc move_update*(character: Character, dt: float32, ms: MovementOpts) =
  ms.frame_counter -= 1.5
  if ms.frame_counter <= 0: ms.frame_counter = 8
  var step_speed = dt * character.speed
  var dash_speed = character.dash_speed * dt

  proc still_frame(frame: int) =
    ms.range = (min: frame, max: frame)

  if ms.dash_timeout > 0: ms.dash_timeout -= 1

  if ms.frame_counter <= ms.lim:
    character.frame += 1
    if character.frame > ms.range.max: character.frame = ms.range.min
    elif character.frame <= ms.range.min: character.frame = ms.range.min
    character.position.x += ms.current_speed
  
  # pushes character back if distance_from_opp too low
  if character.distance_from_opp <= 0.0 and character.state != Death: 
    if character.facing == Right:
      character.position.x -= step_speed
    if character.facing == Left:
      character.position.x += step_speed


  case character.state
  # add a proc for range setting after still_frame
  of Hurt:
    if character.facing == Right:
      still_frame 54
    elif character.facing == Left:
      still_frame 55
  of Death:
    ms.current_speed = 0
    if character.facing == Right:
      ms.range = (min: 30, max: 31)
    elif character.facing == Left:
      ms.range = (min: 32, max: 33)

    if character.frame == ms.range.max:
      still_frame ms.range.max
  of Neutral:
    character.heart.stop_damage = false
    if character.facing == Left:
      ms.range = (min: 24, max: 27)
    else:
      ms.range = (min: 0, max: 3)
    ms.lim = 1
    ms.current_speed = 0
  of WalkRight:
    character.heart.stop_damage = false
    ms.lim = 1
    character.facing = Right
    ms.range = (min: 6, max: 9)
    ms.current_speed = step_speed
  of WalkLeft:
    character.heart.stop_damage = false
    ms.lim = 1
    character.facing = Left
    ms.range = (min: 12, max: 15)
    ms.current_speed = -step_speed
  of DashRight:
    character.facing = Right
    if ms.dash_timeout <= 0:
      ms.range = (min: 18, max: 20)
      ms.current_speed = dash_speed
      if character.frame >= ms.range.max - 1: 
        ms.range = (min: 0, max: 3)
        ms.current_speed = 0
        ms.dash_timeout = 30
  of DashLeft:
    character.facing = Left
    if ms.dash_timeout <= 0:
      ms.range = (min: 21, max: 23)
      ms.current_speed = -dash_speed
      if character.frame >= ms.range.max - 1: 
        ms.range = (min: 24, max: 27)
        ms.current_speed = 0
        ms.dash_timeout = 30
  of Attack:
    if character.frame == 51 or character.frame == 45: 
      character.state = Neutral
      ms.lim = 1
      return
    ms.lim = 2
    if character.facing == Left:
      ms.range = (min: 48, max: 51)
      return
    elif character.facing == Right:
      ms.range = (min: 42, max: 45)
      return
    ms.current_speed = 0
  of PreAttack:
    ms.lim = 1
    if character.facing == Left:
      ms.range = (min: 38, max: 39)
    elif character.facing == Right:
      ms.range = (min: 36, max: 37)
    ms.current_speed = 0

  else: return
