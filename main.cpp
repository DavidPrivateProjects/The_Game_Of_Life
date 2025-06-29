#include <C:\raylib\raylib\src\raylib.h>
#include "simulation.hpp"
#include <iostream>

int main() 
{
    const int WINDOW_HEIGHT = 1000;
    const int WINDOW_WIDTH = 1000; 
    Color GREY = {20, 20, 20, 255};
    int FPS = 24;
    const int CELL_SIZE = 25;

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Game of Life");
    SetTargetFPS(FPS);
    Simulation simulation(WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE);
    simulation.SetCellValue(5, 29, 1);
    simulation.SetCellValue(6, 0, 1);
    simulation.SetCellValue(5, 0, 1);
    simulation.SetCellValue(4, 0, 1);

    std::cout << simulation.CountLiveNeighbors(5, 29) << std::endl;

    // Simulation Loop
    while(WindowShouldClose() == false)
    {
        // 1. Event Handling

        // 2. Updating State

        // 3. Draw State
        BeginDrawing();
        ClearBackground(GREY);
        simulation.Draw();
        EndDrawing();
    }

    CloseWindow();
}
