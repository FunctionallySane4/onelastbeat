import nico, enemy, ai

let
  w = 160
  h = 144

type Screen* = enum
  Start
  Level
  Battle

type StageDef* = ref object
  enable_pre_stage*: bool
  enable_stage*: bool
  enemies*: seq[EnemyWrapped]
  pretext*: string
  stage_num*: int
  background*: int

proc standard_stage*() : seq[StageDef] =
  return @[
    StageDef( 
      stage_num: 1,
      enable_pre_stage: true,
      enemies: @[add_enemy(2, set_basic_ai)],
      background: 11
    ),
    StageDef( 
      stage_num: 1,
      enable_stage: true,
      enemies: @[
        add_enemy(2, set_basic_ai),
        add_enemy(2, set_basic_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 1,
      enable_pre_stage: false,
      enable_stage: true,
      enemies: @[
        add_enemy(1, set_basic_archer_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 1,
      enable_pre_stage: false,
      enable_stage: true,
      enemies: @[
        add_enemy(2, set_basic_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 2,
      enable_pre_stage: true,
      enemies: @[
        add_enemy(1, set_basic_archer_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 2,
      enable_pre_stage: false,
      enable_stage: true,
      enemies: @[
        add_enemy(2, set_basic_ai),
        add_enemy(1, set_basic_archer_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 2,
      enable_pre_stage: false,
      enable_stage: true,
      enemies: @[
        add_enemy(2, set_basic_ai),
        add_enemy(2, set_basic_ai),
        add_enemy(1, set_basic_archer_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 2,
      enable_pre_stage: false,
      enable_stage: true,
      enemies: @[
        add_enemy(2, set_basic_ai),
        add_enemy(1, set_basic_archer_ai),
        add_enemy(1, set_basic_archer_ai)
      ],
      background: 11
    ),
    StageDef( 
      stage_num: 2,
      enable_pre_stage: true,
      pretext: "It's big. It's angry.",
      enemies: @[
        add_enemy(3, set_basic_bull_ai)
      ],
      background: 11
    ),
  ]


var 
  stage_set* : seq[StageDef] = standard_stage()
  screen* : Screen = Start
  current_stage* = 0
  stage_handler*: StageDef = stage_set[current_stage]

let
  default_y = 65
  options = 3

var 
  select_y = default_y
  releaseTimer: int = 0  # counts down frames after release

const releaseCooldown = 5  # number of frames to allow the trigger

proc checkButtonRelease(): bool =
  if btnup(pcStart):
    if releaseTimer == 0:
      releaseTimer = releaseCooldown  # start countdown
      return true  # trigger the release event
  else:
    releaseTimer = 0  # reset if button is not released

  if releaseTimer > 0:
    dec releaseTimer

  return false

proc selection_mode() =
  print("STANDARD", 55, 65, 2)
  print("BUSHIDO", 55, 80, 2)
  print("EXIT", 55, 95, 2)

  if btnup pcDown:
    sfx(1,5)
    if select_y == 95:
      select_y = default_y
    else:
      select_y += 15

  if btnup pcUp:
    sfx(1,5)
    if select_y == 65:
      select_y = 95
    else:
      select_y -= 15

  if checkButtonRelease():
    case select_y
    of 65:
      screen = Level
    of 95:
      shutdown()
    else:
      discard

proc start_bg() =
  setSpritesheet 10
  spr(0,0,0)
  setSpritesheet 13
  spr(0, 35, select_y)

proc selection_level() =
  stage_handler = stage_set[current_stage]
  if screen == Level:
      print("Level: ", 35, 65, 2)
      print($(current_stage + 1), 83, 65, 2)

  if btnup(pcRight) and current_stage < 8:
    sfx(1,5)
    current_stage += 1
  elif btnup(pcLeft) and current_stage > 0:
    sfx(1,5)
    current_stage -= 1

  if checkButtonRelease():
    stage_handler.enable_pre_stage = true
    stage_handler.enable_stage = false
    screen = Battle
    return

proc start_screen*() =
  if screen == Start:
    selection_mode()
    start_bg()
  if screen == Level:
    selection_level()


proc pre_stage*(stage: StageDef) =
  let enable_pre_stage = stage.enable_pre_stage

  if enable_pre_stage:
    var stage_num = stage.stage_num
    if stage.pretext != "":
      printc(stage.pretext, w/2, h/2 - 8, 1)
    else:
      printc("Act " & $stage_num, w/2, h/2 - 11, 2)

    printc("Press start to continue...", w/2, h/2, 1)

    if checkButtonRelease():
      stage.enable_pre_stage = false
      stage.enable_stage = true
