#include <raylib.h>
#include "grid.h"

int main()
{
    Color bakgroundColor = {44, 44, 125, 255};

    InitWindow(300, 600, "Raylib Game");
    SetTargetFPS(60);

    Grid grid = Grid();
    grid.grid[0][0] = 1;
    grid.grid[3][5] = 4;
    grid.grid[17][8] = 7;
    grid.Print();

    // Game Loop
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(bakgroundColor);
        grid.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}