import nico, enemy

let
  w = 160
  h = 144

type StageDef* = ref object
  enable_pre_stage*: bool
  enable_stage*: bool
  enemies*: seq[EnemyWrapped]
  pretext*: string
  stage_num*: int



proc pre_stage*(stage: StageDef) =
  let enable_pre_stage = stage.enable_pre_stage

  if enable_pre_stage:
    var stage_num = stage.stage_num
    if stage.pretext != "":
      printc(stage.pretext, w/2, h/2 - 8, 1)
    else:
      printc("Act " & $stage_num, w/2, h/2 - 11, 2)

    printc("Press start to continue...", w/2, h/2, 1)
    if btnup pcStart:
      cls()
      stage.enable_pre_stage = false
      stage.enable_stage = true
