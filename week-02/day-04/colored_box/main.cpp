#include <iostream>
#include <SDL.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 640;

//Draws geometry on the canvas
void draw();

//Starts up SDL and creates window
bool init();

//Frees media and shuts down SDL
void close();

//The window we'll be rendering to
SDL_Window *gWindow = nullptr;

//The window renderer
SDL_Renderer *gRenderer = nullptr;

void draw()
{
    // Draw a box that has different colored lines on each edge.

    // The center of the box should align with the center of the screen.

    SDL_SetRenderDrawColor(gRenderer, 0x02 /*R*/, 0xe3 /*G*/, 0xe6 /*B*/, 0xff /*A*/);
    //SDL_RenderDrawLine(gRenderer, 0, SCREEN_HEIGHT/2, SCREEN_WIDTH, SCREEN_HEIGHT/2);
    SDL_RenderDrawLine(gRenderer, /*x1-SCREEN_WIDTH-*/100, /*y1-SCREEN_HEIGHT-*/100,
        /*x2-SCREEN_WIDTH*/500, /*y2-SCREEN_HEIGHT*/100);

    SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0x00 /*G*/, 0xFF /*B*/, 0xff /*A*/);
    // SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH/2, 0, SCREEN_WIDTH/2, SCREEN_HEIGHT);
    SDL_RenderDrawLine(gRenderer, /*x1-SCREEN_WIDTH*/100, /*y1-SCREEN_HEIGHT*/100,
        /*x2-SCREEN_WIDTH*/100, /*y2-SCREEN_HEIGHT*/500);

    SDL_SetRenderDrawColor(gRenderer, 0x24 /*R*/, 0x22 /*G*/, 0x22 /*B*/, 0xff /*A*/);
    SDL_RenderDrawLine(gRenderer, /*x1-SCREEN_WIDTH*/100, /*y1-SCREEN_HEIGHT*/500,
        /*x2-SCREEN_WIDTH*/500, /*y2-SCREEN_HEIGHT*/500);

    SDL_SetRenderDrawColor(gRenderer, 0xe6 /*R*/, 0x5 /*G*/, 0x2 /*B*/, 0xff /*A*/);
    SDL_RenderDrawLine(gRenderer, /*x1-SCREEN_WIDTH*/500, /*y1-SCREEN_HEIGHT*/100,
        /*x2-SCREEN_WIDTH*/500, /*y2-SCREEN_HEIGHT*/500);




    //SDL_SetRenderDrawColor(gRenderer, 0x00 /*R*/, 0xFF /*G*/, 0x00 /*B*/, 0xFF /*A*/);
    //SDL_RenderDrawLine(gRenderer, 320, 200, 300, 240);
    //SDL_RenderDrawLine(gRenderer, 300, 240, 340, 240);
    //SDL_RenderDrawLine(gRenderer, 250, 340, 200, 200);
}

bool init()
{
    //Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create window
    gWindow = SDL_CreateWindow("Colored Box",
                               SDL_WINDOWPOS_UNDEFINED,
                               SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_WIDTH,
                               SCREEN_HEIGHT,
                               SDL_WINDOW_SHOWN);
    if (gWindow == nullptr) {
        std::cout << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Create renderer for window
    gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
    if (gRenderer == nullptr) {
        std::cout << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        return false;
    }

    //Initialize renderer color
    SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

    return true;
}

void close()
{
    //Destroy window
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = nullptr;
    gRenderer = nullptr;

    SDL_Quit();
}

int main(int argc, char *args[])
{
    //Start up SDL and create window
    if (!init()) {
        std::cout << "Failed to initialize!" << std::endl;
        close();
        return -1;
    }

    //Main loop flag
    bool quit = false;

    //Event handler
    SDL_Event e;

    //While application is running
    while (!quit) {
        //Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            //User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }

        //Clear screen
        SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);
        SDL_RenderClear(gRenderer);

        draw();

        //Update screen
        SDL_RenderPresent(gRenderer);
    }

    //Free resources and close SDL
    close();

    return 0;
}