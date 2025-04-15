#todo Add stance
import nico
import benkei, character, movement, combat, ai, enemy, stage

# pool all hitbox related proc to their own module

const orgName = "fsane"
const appName = "OneLastBeat"

let
  w = 160
  h = 144

proc gameInit() =
  loadFont(0, "font.png")
  loadSpritesheet(0, "benkei.png", 32, 32)
  loadSpritesheet(1, "archer.png", 32, 32)
  loadSpritesheet(2, "enemy.png", 32, 32)
  loadSpritesheet(6, "heart.png", 16, 16)
  loadSpritesheet(7, "arrow.png", 16, 16)
  loadSfx(3, "hurt.ogg")
  loadSfx(4, "death.ogg")
  loadMusic(0, "retro_forest.ogg")
  music(0, 0)
  #loadSfx(0, "heartbeat.ogg")
  var onebit = loadPaletteFromGPL "ys-coffe-calm.gpl"
  setPalette onebit


# refactor the staging, this is too fucking complicated... just have a list of characters and enemies to draw, and one general handler, that's it


var stage_set* : seq[StageDef] =
  @[
    StageDef( 
      stage_num: 1,
      enable_pre_stage: true,
      enemies: @[add_enemy(2)]),
    StageDef( 
      stage_num: 2,
      enable_pre_stage: true,
      enemies: @[add_enemy(2), add_enemy(2)]),
    StageDef( 
      stage_num: 3,
      enable_pre_stage: true,
      enemies: @[add_enemy(1)]),
    StageDef( 
      stage_num: 4,
      enable_pre_stage: true,
      enemies: @[add_enemy(2), add_enemy(2), add_enemy(2)])
  ]

var 
  current_stage = 0
  stage_handler = stage_set[current_stage]


proc update_enemies(dt:float32) =
  if stage_handler.enable_stage:
    update_benkei dt

    for wrapped in stage_handler.enemies:
      var
        c = wrapped.character
        m = wrapped.movement
        btndef = wrapped.def

      move_update(c, dt, m)
      combat(benkei_char, c)
      generate_inputs btndef
      AI_update btndef
      set_basic_ai btndef

proc draw_enemies() =
  if stage_handler.enable_stage:
    for wrapped in stage_handler.enemies:
      draw_character(wrapped.character)



proc all_enemies_dead(current_stage: StageDef) : bool =
  var isDead = true
  for enemy in current_stage.enemies:
    if enemy.character.state != Death: 
      isDead = false

  return isDead 

var stage_next_timer: float32 = 0.0
proc gameUpdate(dt: float32) =
  if all_enemies_dead(stage_handler):
    stage_next_timer += dt
    if stage_next_timer >= 1:
      current_stage += 1
      stage_next_timer = 0

  stage_handler = stage_set[current_stage]
  update_enemies dt

proc gameDraw() =
  cls()
  setColor(1)
  hline(0, 98, 228)
  pre_stage stage_handler

  if stage_handler.enable_stage:
    draw_enemies()
    draw_benkei()

  #show_hitboxes(stage_handler.enemies[0].character, 0)
  #show_projectile_hitboxes stage_handler.enemies[0].character


nico.init(orgName, appName)
nico.createWindow(appName, w, h, 4, false)
nico.run(gameInit, gameUpdate, gameDraw)

when false: # tooling
  if togglebox:
    draw_collisison_boxes benkei
    draw_collisison_boxes enemy_sample
    print(help_text, 5, 10)
