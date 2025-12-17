#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h> 
int main(){
    if(SDL_Init(SDL_INIT_VIDEO) != 0) {
        printf("SLD-Init Error: %s\n", SDL_GetError());
        return 1;
    }
SDL_Window *pwindow = SDL_CreateWindow("Image Viewer",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,900,600 , SDL_WINDOW_SHOWN);
if(!pwindow) {
    printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
    return 1;
}

}