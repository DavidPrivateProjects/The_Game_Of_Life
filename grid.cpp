#include "grid.hpp"
#include <raylib.h>

void Grid::Draw()
{
    for(int row = 0; row < rows; row ++)
    {
        for(int column = 0; column < columns; column++)
        {
            Color color = cells[row][column] ? Color{0, 0, 255, 255} : Color{20, 20, 20, 255};
            DrawRectangle(column * cellSize, row * cellSize, cellSize - 1, cellSize - 1, color);
        }
    }
}

void Grid::SetValue(int row, int column, int value)
{
    if(IsWithinBounds(row, column))
    {
        cells[row][column] = value;
    }
}

int Grid::GetValue(int row, int column)
{
    if(IsWithinBounds(row, column))
    {
        return cells[row][column];
    }
    return 0;
}

bool Grid::IsWithinBounds(int row, int column)
{
    if(row >= 0 && row < rows && column >= 0 && column < columns)
    {
        return true;
    }
    return false;
}

void Grid::FillRandom()
{
    for(int row = 0; row < rows; row ++)
    {
        for(int column = 0; column < columns; column ++)
        {
            int randomValue = GetRandomValue(0, 5);
            cells[row][column] = (randomValue == 5) ? 1 : 0;
        }
    }
}
