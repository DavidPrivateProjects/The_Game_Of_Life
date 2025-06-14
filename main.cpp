#include <iostream>
#include <C:\raylib\raylib\src\raylib.h>
using namespace std;

int main() 
{
    const int WINDOW_HEIGHT = 1000;
    const int WINDOW_WIDTH = 1000; 
    int FPS = 24;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);

    // Simulation Loop
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling

        // 2. Updating State

        // 3. Draw State
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
}
