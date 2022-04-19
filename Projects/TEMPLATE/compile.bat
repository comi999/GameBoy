REM Automatically generated from Makefile
mkdir -p obj
..\..\GBDK\bin\lcc   -c -o obj\main.o src\main.c
..\..\GBDK\bin\lcc   -c -o obj\dungeon_map.o res\dungeon_map.c
..\..\GBDK\bin\lcc   -c -o obj\dungeon_tiles.o res\dungeon_tiles.c
..\..\GBDK\bin\lcc   -o obj\Example.gb obj\main.o obj\dungeon_map.o obj\dungeon_tiles.o 
