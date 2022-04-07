// build a chip 8 emulator in c
#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_EVERYTHING);       // initialize SDL that has everything to do with sdl
    //it is a pointer called window that is going to create a window
    //windowpos can be any value, undefined set its to default value

    SDL_Window* window = SDL_CreateWindow(
        "Chip 8 Window",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        640, 320, SDL_WINDOW_SHOWN);

    // now we will create a renderer which will help us to draw pixel to the window
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_TEXTUREACCESS_TARGET );

    //we will break out of while when we have a quit event
    while (1)
    {
        //first 0 -> red, second 0 -> green, third 0 -> blue  fourth 0 -> alpha (transparency, black)
        //it will set the renderer to colour black
        //all render functions mainly depend on setrenderdrawcolor
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        //clear the screen
        //paint over the entire screen with black
        SDL_RenderClear(renderer);

        // we are changing the render draw colour
        // 255 -> red, 255 -> green, 255 -> blue  0 -> alpha (transparency, white)
        // you dont want to draw a black rectangle onto a black screen, thats why we changed it to white
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 0);

        //this is just a rectangle, we are going to draw a rectangle
        //draw a rectangle at x coordinate 0, y coordinate 0, width 40, height 40
        SDL_Rect r;
        r.x = 0;
        r.y = 0;
        r.w = 40;
        r.h = 40;
        SDL_RenderDrawRect(renderer, &r);         //pass in the renderer and the rectangles address, it will draw the rectangle
        SDL_RenderPresent(renderer);              //you need to present the changes
    }

    //pass in the window to be destroyed
    SDL_DestroyWindow(window);
    return 0;
}