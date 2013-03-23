MoonAndSun
==========

Small "astro" library that calculate moon and sun data based on location and date.
workaround Meeus algorithms, AA+ framework

Usage
==========

Sea exapmle application how to get Moon and Sun data

Keys
==========
kAstroRiseValid - YES if Moon or Sun Rise 
kAstroRise - rising time
kAstroTransit - 
kAstroSet - set time
kAstroSetValid - Yes of Moon or Sun set

Moon specifics
kAstroPhase:
  0 degrees = new moon
  90 degrees = first quarter (right half illuminated)
  180 degrees = full moon
  270 degrees = last quarter (left half illuminated)

kAstroPositionAngle - Position angle
kAstroPhaseAngle - Phase angle
