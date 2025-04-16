import nico/vec
import std/random
import character, movement, ai

type EnemyWrapped* = ref object
  character*: Character
  def*: BtnDef
  movement*: Movementopts

proc swordsman() : Character =
  return Character(
    heart: Heart(
      bpm: 110,
      frame: 0,
      dt: 0.0,
      stop_damage: false
    ),
    facing: Left,
    state: Neutral,
    position: vec2f(100 + rand(0..10),66),
    sprite_slot: 2,
    frame: 0,
    step: 0,
    speed: 200,
        dash_speed: 400,
        hurtbox: CollisionBox(
          offset: (10, 16),
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
        ],
      )
 
proc archer() : Character =
  let character = Character(
    heart: Heart(
      bpm: 110,
      frame: 0,
      dt: 0.0,
      stop_damage: false
    ),
    facing: Left,
    state: Neutral,
    position: vec2f(100 + rand(0..10),66),
    sprite_slot: 1,
    frame: 0,
    step: 0,
    speed: 100,
    dash_speed: 400,
    hurtbox: CollisionBox(
      offset: (10, 16),
      width: 10,
      height: 15
    ),
    enable_projectile: true,
    projectile: Projectile(
      is_released: false,
      speed: 2,
      x: 0,
      y: 0,
      size: CollisionBox(
        width: 13,
        height: 16
      ),
      direction: Left
    ),
  )
  return character
 

proc bull() : Character =
  let character = Character(
    heart: Heart(
      bpm: 500,
      frame: 0,
      dt: 0.0,
      stop_damage: false
    ),
    facing: Left,
    state: Neutral,
    position: vec2f(100 + rand(0..10),66),
    sprite_slot: 3,
    frame: 0,
    step: 0,
    speed: 400,
    dash_speed: 400,
    hurtbox: CollisionBox(
      offset: (10, 16),
      width: 10,
      height: 15
    ),
  )
  return character
# send cand to parameter
proc add_enemy*(spr_slot: int, ai: proc(btndef: BtnDef)) : EnemyWrapped =
  var e_movement = MovementOpts(
    frame_counter: 5,
    range: (min: 0, max: 3),#tuple[min: int, max: int]
    current_speed: 0.0,
    lim: 1,
    dash_timeout: 0
  )

  var enemy: Character

  case spr_slot
  of 1:
    enemy = archer()
  of 3:
    enemy = bull()
  else:
    enemy = swordsman()

  var btndef = BtnDef(
    stack : @[
    ],
    reset_frame: 5,
    frame_elapsed: 0,
    character: enemy,
    input_cands: approach,
    behaviour: ai
  )

  var wrapped = EnemyWrapped(character: enemy, def: btndef, movement: e_movement)
  return wrapped
