#include<iostream>
#include<SDL2/SDL.h>
#define SDL_MAIN_HANDLED

    SDL_Window*window = NULL;
    SDL_Renderer*renderer=NULL;
int main(int argc,char* argv[])
{
    SDL_Window*window = NULL;
    SDL_Renderer*renderer=NULL;
    window=SDL_CreateWindow("APPLICATION",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1000,500,SDL_WINDOW_SHOWN);
    renderer=SDL_CreateRenderer(window,-1,0);
    return 0;
}