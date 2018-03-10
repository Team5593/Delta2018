# Δ 2018
2018 robot code.

## Outline
Most of this code is very similar to what we had last year. The differences are:
  - Using inbuilt command groups for command scheduling rather than a home-brew solution.
  - Using the OI (operator interface) related utilities for button to command mapping.

## Control Layout
Left Stick: Forwards/Reverse
Right Stick: Turning Clockwise/Anticlockwise
A: Toggle Grabbers
B: Feed Box Inwards
X: Shoot Low
Y: Shoot Hight
Start: Spit Box Out
  
## Known issues
Commands that don't stop motors during the End() call will not stop the motors ever. However, his is something that should be handled by the WPILib.
