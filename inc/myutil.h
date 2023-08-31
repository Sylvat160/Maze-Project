#ifndef MYUTIL_H
#define MYUTIL_H

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const int MAZE_WIDTH = 10;
const int MAZE_HEIGHT = 10;
const char WALL = '#';
const int CELL_SIZE = 32;

int maze0[MAZE_HEIGHT][MAZE_WIDTH] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 1, 1, 1, 1, 1, 1, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

#include <SDL2/SDL.h>

/* Prototypes */
void renderMazeWalls(SDL_Renderer *renderer, const int maze[][MAZE_WIDTH]);

#endif
