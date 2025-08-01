#include <raylib.h>
#include "simulation.hpp"

int main() 
{
    const int WINDOW_HEIGHT = 600;
    const int WINDOW_WIDTH = 1200; 
    Color GREY = {20, 20, 20, 255};
    int FPS = 24;
    const int CELL_SIZE = 4;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);
    Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);
    

    // Simulation Loop
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling
        if(IsKeyPressed(KEY_ENTER))
        {
            simulation.Start();
            SetWindowTitle("Game of Life is running ...");
        }
        else if(IsKeyPressed(KEY_SPACE))
        {
            simulation.Stop();
            SetWindowTitle("Game of Life has stopped.");
        }
        else if(IsKeyPressed(KEY_F))
        {
            FPS += 2;
            SetTargetFPS(FPS);
        }
        else if(IsKeyPressed(KEY_S))
        {
            if(FPS > 5)
            {
                FPS -= 2;
                SetTargetFPS(FPS);
            }
        }

        // 2. Updating State
        simulation.Update();

        // 3. Draw State
        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        EndDrawing();
    }

    CloseWindow();
}
