#!/bin/bash

# Create asset directories
mkdir -p assets/textures assets/audio assets/maps

# Create source code directories
mkdir -p src inc

# Create other files
touch .gitignore

# Create files in src and inc directories
touch src/main.c src/game.c src/player.c src/map.c src/textures.c src/enemies.c src/ui.c
touch inc/game.h inc/player.h inc/map.h inc/textures.h inc/enemies.h inc/ui.h

echo "SDL2 Game project structure created successfully!"
