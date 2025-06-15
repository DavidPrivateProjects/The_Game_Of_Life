#include <iostream>
#include <C:\raylib\raylib\src\raylib.h>
using namespace std;

int main() 
{
    const int WINDOW_HEIGHT = 1000;
    const int WINDOW_WIDTH = 1000; 
    Color GREY = {20, 20, 20, 255};
    int FPS = 24;
    const int CELL_SIZE = 25;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);

    // Simulation Loop
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling

        // 2. Updating State

        // 3. Draw State
        BeginDrawing();
        ClearBackground(GREY);
        EndDrawing();
    }

    CloseWindow();
}
