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

proc draw_character*(character: Character) =
  setSpritesheet(character.sprite_slot)
  spr(character.frame, character.position.x, character.position.y)
