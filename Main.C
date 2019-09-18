#include <SDL2/SDL.h>

#include <stdio.h>

int main(int argc, char** argv)
{
    /* Initialisation simple */
	
        SDL_Window* Screen = NULL;



	SDL_Init(SDL_INIT_VIDEO);
        Screen = SDL_CreateWindow("SDL",0,0,1368,768,SDL_WINDOW_FULLSCREEN_DESKTOP);
    	SDL_Delay(3000);

    SDL_Quit();

    return 0;
}
