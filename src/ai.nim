import std/random
import character

type BtnState* = enum
  Pressed
  Released
  Idle

type AIBtn* = enum
  AILeft
  AIRight
  AIa
  AIb
  None

type Input = tuple[btn: AIBtn, on_frame: int, state: BtnState]

type BtnDef* = ref object
  stack*: seq[Input]
  reset_frame*: int
  frame_elapsed*: int
  character*: Character

proc pick_state(btndef: BtnDef) : Input =
  # if empty fil up stack
  discard

# make a move stack that fills if empty, and takes a tuple of btnstate and relative frame
proc get_character_state(button: AIBtn, state: BtnState) : State =
  case button
  of AILeft:
    if state == Pressed: return WalkLeft
    else: return Neutral
  of AIRight:
    if state == Pressed:
      return WalkRight
    else: return Neutral
  of AIa:
    if state == Pressed: return PreAttack
    elif state == Released: return Attack
  else: return Neutral #implement dashing later might do it out of case or have a tracking variable

proc AI_update*(btndef:BtnDef) =
  # iterate on stack and check if frame is elapsed before changing state
  let 
    character = btndef.character
    stack = btndef.stack
    reset_frame = btndef.reset_frame
    elapsed = btndef.frame_elapsed

  if elapsed >= reset_frame:
    btndef.frame_elapsed = 0

  for index, input in stack:
    let char_state = get_character_state(input.btn, input.state)
    if input.on_frame == elapsed:
      character.state = char_state
      btndef.stack.delete index

  # increases frame elapsed to trigger/match on_frame value of btndef
  btndef.frame_elapsed += 1

