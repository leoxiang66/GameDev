#include <iostream>
#include <SDL2/SDL.h>
#include <cstdlib>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[]) {
    // the window we'll rendering to
    SDL_Window* window=NULL;

    // the surface contained by the window
    SDL_Surface* screenSurface=NULL;


    // initialise SDL
    if(SDL_Init(SDL_INIT_VIDEO)<0){
        fprintf(stderr,"SDL could not initialize! SDL_Error: %s\n",SDL_GetError());
    }
    else{
        // create window
        window = SDL_CreateWindow("SDL Tutorial",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCREEN_WIDTH,SCREEN_HEIGHT,SDL_WINDOW_SHOWN);

        if(window==NULL) fprintf(stderr,"Window could not be created! SDL_Error: %s\n",SDL_GetError());
        else{
            // get window surface
            screenSurface= SDL_GetWindowSurface(window);

            // fill the surface white
            SDL_FillRect(screenSurface,NULL,SDL_MapRGB(screenSurface->format,0xFF,0xFF,0xFF));

            // update the surface
            SDL_UpdateWindowSurface(window);

            // wait two seconds
            SDL_Delay(2000);

        }
    }

    // destroy window
    SDL_DestroyWindow(window);

    // quit SDL subsystems
    SDL_Quit();

    return 0;
}