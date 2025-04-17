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
  loadSpritesheet(3, "bull.png", 32,32)
  loadSpritesheet(6, "heart.png", 16, 16)
  loadSpritesheet(7, "arrow.png", 16, 16)
  loadSpritesheet(11, "bg/bridge-sheet.png", 160, 144)
  loadSpritesheet(10, "splash.png", 160, 144)
  loadSpriteSheet(13, "icon/katana.png", 16, 16)
  loadSfx(3, "hurt.ogg")
  loadSfx(5, "blipSelect.ogg")
  loadSfx(4, "death.ogg")
  loadMusic(0, "retro_forest.ogg")
  music(0, 0)
  #loadSfx(0, "heartbeat.ogg")
  var onebit = loadPaletteFromGPL "ys-coffe-calm.gpl"
  setPalette onebit


# refactor the staging, this is too fucking complicated... just have a list of characters and enemies to draw, and one general handler, that's it




proc powerup_display() =
  let
    x = 0
    y = 2
    scale = 1
  var 
    powerup = benkei_char.powerup
    per_powerups = powerup / 4
  for i in 1..per_powerups:
    rectfill(x + i, y, x + scale, y + scale)

var 
  bg_timer = 0
  bg_n = 0
proc render_background(sprite_slot: int) =
  setSpritesheet(sprite_slot)
  bg_timer += 1

  if bg_timer >= 60:
    bg_n += 1
    bg_timer = 0
    if bg_n >= 4:
      bg_n = 0

  spr(bg_n,0,0)

proc update_enemies(dt:float32) =
  if stage_handler.enable_stage:
    update_benkei dt

    for wrapped in stage_handler.enemies:
      let
        c = wrapped.character
        m = wrapped.movement
        btndef = wrapped.def

      move_update(c, dt, m)
      combat(benkei_char, c)
      generate_inputs btndef
      AI_update btndef
      btndef.behaviour btndef

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
  # primitive restart on death logic
  if benkei_char.heart.bpm <= 0:
    stage_next_timer += dt
    if stage_next_timer >= 1:
      screen = Start
      current_stage = 0
      reset_pos_benkei()
      stage_set = standard_stage()
      benkei_char.heart.bpm = 110
      benkei_char.state = Neutral

    
  if all_enemies_dead(stage_handler):
    stage_next_timer += dt
    if stage_next_timer >= 1:
      current_stage += 1
      reset_pos_benkei()
      stage_next_timer = 0

  stage_handler = stage_set[current_stage]
  update_enemies dt

proc gameDraw() =
  cls()
  setColor(1)
  start_screen()

  if screen == Battle:
    pre_stage stage_handler
    powerup_display()
    

    let
      enabled = stage_handler.enable_stage == true
      stage_bg = stage_handler.background

    if enabled:
      draw_enemies()
      draw_benkei()
      render_background stage_bg


nico.init(orgName, appName)
nico.createWindow(appName, w, h, 4, false)
nico.run(gameInit, gameUpdate, gameDraw)

when false: # tooling
  if togglebox:
    draw_collisison_boxes benkei
    draw_collisison_boxes enemy_sample
    print(help_text, 5, 10)
