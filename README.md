# Δ 2018
2018 robot code.

## Outline
Most of this code is very similar to what we had last year. The differences are:
  - Using inbuilt command groups for command scheduling rather than a homebrew solution.
  - Using the OI (operator interface) related utilities for button to command mapping.
  
## Kown issues
Commands that don't stop motors during the End() call will not stop the motors ever. However, his is something that shoud be handled by the WPILib.
