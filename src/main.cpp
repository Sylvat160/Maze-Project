#include <iostream>
#include "myutil.h"

int main() {
    /* Initialise SDL */
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialise! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    /* Create a window */
    SDL_Window *window = SDL_CreateWindow("Maze", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    /* Create a renderer */
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL)
    {
        std::cout << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    /* Render maze walls */
    renderMazeWalls(renderer, maze0); // You need to define 'maze' before calling this function

    /* Present the renderer */
    SDL_RenderPresent(renderer);

    /*Wait for a quit event*/
    bool quit = false;
    SDL_Event e;

    while(!quit) {
        while(SDL_PollEvent(&e) != 0) {
            if(e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    /* Clean up and exit */
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}