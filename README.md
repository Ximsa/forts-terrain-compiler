# forts-terrain-compiler

This Project aims to let you make Forts Terrain Files by feeding it with a formated text file.

## Terrain File
You can (and should) specify header info (m), polygon info (p) and terrain object info (t).
Header:
``m [enironmentString]``
i.e: ``m environment/alpine``

Polygon:
``p [x] [y] [hasSurface] [surfaceString]``
i.e: ``p 0 -1000 1 rocks01``

Terrain:
``t [groundString] [surfaceString] [team] [hasSurface] [foundation] [mine] [windfloor] [viewfloor] [nodraw]``
i.e: ``t environment/alpine/ground/ground1.dds rocks01 1 0 1 1 1 0 0``

Note that the Terrain gets defined by the preceding polygon list.
Also it doesn't matter how many header lines you write, the last one will get applyed
