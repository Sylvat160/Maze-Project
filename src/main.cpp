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

    /* Get the window surface */
    SDL_Surface *screenSurface = SDL_GetWindowSurface(window);

    /* Fill the window surface with a white rectangle */
    SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));

    /* Update the window surface */
    SDL_UpdateWindowSurface(window);

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