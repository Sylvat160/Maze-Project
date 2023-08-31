#include <iostream>
#include "myutil.h"

void renderMazeWalls(SDL_Renderer *renderer, const int maze[][MAZE_WIDTH])
{
    for (int y = 0; y < MAZE_HEIGHT; ++y)
    {
        for (int x = 0; x < MAZE_WIDTH; ++x)
        {
            if (maze[y][x] == WALL)
            {
                SDL_Rect wallRect = {x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE};
                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); 
                SDL_RenderFillRect(renderer, &wallRect);
            }
        }
    }
}