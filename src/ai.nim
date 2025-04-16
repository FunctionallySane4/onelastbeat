import std/random
import character

randomize()


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

type Candidates* = seq[
  tuple[
    btn: AIBtn, 
    count: int]
]

type Input = tuple[btn: AIBtn, on_frame: int, state: BtnState]


type BtnDef* = ref object
  stack*: seq[Input]
  reset_frame*: int
  frame_elapsed*: int
  character*: Character
  input_cands*: Candidates
  behaviour*: proc(btndef: BtnDef)

# AI presets here:
let approach*: Candidates = @[
    (btn: AILeft, count: 8),
    (btn: AIRight, count: 1),
    (btn: None, count: 1)
  ]
let slow_attack: Candidates = @[
    (btn: AIa, count: 10),
    (btn: AILeft, count: 3),
    (btn: AIRight, count: 5)
  ]
let archer_attack: Candidates = @[
    (btn: AIa, count: 10),
    (btn: AILeft, count: 1),
    (btn: AIRight, count: 6)
]
let retreat: Candidates = @[
  (btn: AIRight, count: 10),
  (btn: AIa, count: 1)
]

let relentless_approach: Candidates = @[
  (btn: AILeft, count: 6),
  (btn: AIRight, count: 1)
  # add dash here later when fixed
]

proc set_basic_ai*(btndef: BtnDef) =
  # add ap roc that changes reset_frame when stack is empty
  btndef.reset_frame = 15
  if btndef.character.distance_from_opp >= 40:
    btndef.input_cands = relentless_approach
  else:
    btndef.input_cands = slow_attack

proc set_basic_bull_ai*(btndef: BtnDef) =
  btndef.reset_frame = 40
  btndef.input_cands = relentless_approach



proc set_basic_archer_ai*(btndef: BtnDef) =
  btndef.reset_frame = 25
  if btndef.character.distance_from_opp >= 40:
    btndef.input_cands = archer_attack
  else:
    btndef.input_cands = retreat


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
  #of AIb:
  #  if player.facing == Left: return Dash change dashing to a single enum
  else: return Neutral #implement dashing later might do it out of case or have a tracking variable or just use  facing lmao dumbass fucking idiot retard


proc candidate_inputs(candidates: Candidates) : seq[AIBtn] =
  var stack : seq[AIBtn] = @[]
  for c in candidates:
    for _ in 0 .. c.count:
      stack.add c.btn
  return stack

proc generate_inputs*(btndef: BtnDef) =
  # plug probabilities later
  let
    stack = btndef.stack
    reset_frame = btndef.reset_frame

  proc random_input() : tuple[p: Input, r: Input, e: Input] =
    var 
      extra : Input
      input_list : seq[AIBtn] = candidate_inputs btndef.input_cands
      rng = rand(0 .. (len input_list) - 1)
      button = input_list[rng]
      p_frames = rand(1 .. (reset_frame div 2))
      r_frame = reset_frame - 1

    if button == AIa:
      extra = (btn: AILeft, on_frame: p_frames, state: Pressed)

    return (
      p: (btn: button, on_frame: p_frames, state: Pressed),
      r: (btn: button, on_frame: r_frame, state: Released),
      e: extra
    )


  var new_input = random_input()

  if stack.len <= 0:
    if new_input.e != default Input:
      btndef.stack.add new_input.e
    btndef.stack.add new_input.p
    btndef.stack.add new_input.r



proc AI_update*(btndef:BtnDef) =
  # iterate on stack and check if frame is elapsed before changing state
  let 
    character = btndef.character
    reset_frame = btndef.reset_frame
    elapsed = btndef.frame_elapsed
    head_input = btndef.stack[0]
    char_state = get_character_state(head_input.btn, head_input.state)

  if character.state == Death: return

  if elapsed >= reset_frame:
    btndef.frame_elapsed = 0

  if elapsed == head_input.on_frame:
    character.state = char_state
    btndef.stack.delete 0


  when false: # primitive stack manager
    for index, input in stack:
      if input == @[]: btndef.stack.delete index
      let char_state = get_character_state(input.btn, input.state)
      if input.on_frame == elapsed:
        character.state = char_state

  # increases frame elapsed to trigger/match on_frame value of btndef
  btndef.frame_elapsed += 1



