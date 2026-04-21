#include<iostream>
#include<SDL2/SDL.h>
#define SDL_MAIN_HANDLED

    SDL_Window*window = NULL;
    SDL_Renderer*renderer=NULL;
     bool run=false;
int main(int argc,char* argv[])
{
   if(SDL_Init(SDL_INIT_EVERYTHING)==0)
   {
    window=SDL_CreateWindow("Application",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1000,500,SDL_WINDOW_SHOWN);
    renderer=SDL_CreateRenderer(window,-1,0);
    run=true;

   }
    while(run)
   {
        SDL_Event event; //creates an event name variable which can store input given
        SDL_PollEvent(&event); //scanf of inputs
        switch(event.type)//creating what input does using event as var and .typ to info what kind of input it is keydown keyup type
        {
            case SDL_QUIT:
             run=false;
             break;
        }
   }
   SDL_DestroyWindow(window);
   SDL_DestroyRenderer(renderer);
   SDL_Quit();
    return 0;
}