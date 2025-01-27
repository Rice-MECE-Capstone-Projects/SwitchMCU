# Hazard Management Unit

## Overall

We have a canonical 5-stage, non-superscalar, pipelined processor. The HMU intends to provide a solution (not necessarily the best) to all hazards. As such, it aims to recognize hazards, and handle/manage them. There are three hazard groupings:

1. Structural Hazards
2. Control Hazards
3. Data Hazards (RAW, WAR, WAW)

### Structural Hazards

1. Instruction Memory and Data Memory - Handled through the use of two (2), discrete AHB links. Effectively a Harvard architecture processor.
2. Register Contention - Handled through dual-port registers
3. Branch address and Adder - Dedicated branch address and offset adder

### Control Hazards

1. Branch Predictor and Stalling - Very basic 2 bit branch predictor (FSM included)
2. Branch Target Buffer - Size undetermined

### Data Hazards

1. WAW and WAR - Scalar, so these don’t exist
2. RAW - Forward and Bubble (if required)