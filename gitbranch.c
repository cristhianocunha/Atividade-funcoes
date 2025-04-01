// #include <ncurses.h>

// int main() {
//     SDL_Init(SDL_INIT_VIDEO);
//     SDL_Window *window = SDL_CreateWindow("Git Branches", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
//     SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

//     SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Fundo preto
//     SDL_RenderClear(renderer);

//     SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); // Verde
//     SDL_RenderDrawLine(renderer, 200, 100, 300, 200); // Ramo principal
//     SDL_RenderDrawLine(renderer, 300, 200, 400, 100); // Branch 1
//     SDL_RenderDrawLine(renderer, 300, 200, 400, 300); // Branch 2

//     SDL_RenderPresent(renderer);
//     SDL_Delay(5000);

//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();
//     return 0;
// }
