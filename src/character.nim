import nico
import nico/vec

type Direction* = enum Right Left

type Heart* = ref object
  x*: int
  y*: int
  bpm*: float32
  frame*: int
  dt*: float32
  stop_damage*: bool

type State* = enum 
  Neutral 
  WalkLeft 
  WalkRight 
  DashLeft 
  DashRight
  PreAttack
  Attack
  AimBow
  ShootBow
  Hurt
  Death

type Offset = tuple[x: int, y:int]

type HitboxWrapped* = 
  tuple[x: float32, y: float32, x2: float32, y2: float32] 

type CollisionBox* = ref object
  offset*: Offset
  width*: int
  height*: int

type Hitbox* = ref object
  width*: int
  height*: int
  frame*: int
  offset*: Offset

type HitboxCollection* = seq[Hitbox]

type Character* = ref object
  heart*: Heart
  state*: State
  position*: Vec2f
  hand_pos*: Vec2f
  sprite_slot*: int
  frame*: int
  step*: float32
  facing*: Direction
  speed*: float32
  dash_speed*: float32
  hurtbox*: CollisionBox
  hitbox*: CollisionBox
  hitboxes*: HitboxCollection
  distance_from_opp*: float32

proc draw_hitbox*(character: Character) =
  for hitbox in character.hitboxes:
    var x = character.position.x + hitbox.offset.x
    var y = character.position.y + hitbox.offset.y
    var w = hitbox.width
    var h = hitbox.height
    if hitbox.frame == character.frame:
      rect(x, y, x + w, y + h)

proc draw_hurtbox*(character: Character) =
  var x = character.position.x + character.hurtbox.offset.x
  var y = character.position.y + character.hurtbox.offset.y
  var w = character.hurtbox.width
  var h = character.hurtbox.height
  rect(x, y, x + w, y + h)


proc draw_collisison_boxes*(character: Character) =
  draw_hitbox character
  draw_hurtbox character

proc draw_character*(character: Character) =
  setSpritesheet(character.sprite_slot)
  spr(character.frame, character.position.x, character.position.y)
