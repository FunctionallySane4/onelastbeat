import nico
import nico/vec
import character, movement

var movements1* = MovementOpts(
  frame_counter: 5,
  range: (min: 0, max: 3),#tuple[min: int, max: int]
  current_speed: 0.0,
  lim: 1,
  dash_timeout: 0
)

var benkei_heart* = Heart(
  x: 0,
  y: 13,
  bpm: 110,
  frame: 0,
  dt: 0.0,
  stop_damage: false
)

proc draw_heart(character: Character, heart: Heart) =
  setSpritesheet(6)
  spr(heart.frame, heart.x, heart.y)

var benkei_char* = Character(
  heart: benkei_heart,
  facing: Right,
  state: Neutral,
  position: vec2f(10,66),
  sprite_slot: 0,
  frame: 0,
  step: 0,
  speed: 200,
  dash_speed: 400,
  hurtbox: CollisionBox(
    offset: (9, 16),
    width: 10,
    height: 15
  ),
  hitboxes: @[
    Hitbox(
      frame: 42,
      width: 13,
      height: 16,
      offset: (20, 16)
    ),
    Hitbox(
      frame: 43,
      width: 13,
      height: 16,
      offset: (20, 16)
    ),
    Hitbox(
      frame: 48,
      width: 13,
      height: 16,
      offset: (-1, 16)
    ),
    Hitbox(
      frame: 49,
      width: 13,
      height: 16,
      offset: (-1, 16)
    )
  ]
)

proc draw_benkei*() =
  draw_character benkei_char
  draw_heart(benkei_char, benkei_char.heart)

proc update_benkei*(dt: float32) =
    move_update(benkei_char, dt, movements1)
    player_movement benkei_char
    #heart_update dt
