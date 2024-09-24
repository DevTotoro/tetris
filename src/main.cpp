#include <iostream>
#include <raylib.h>

void UpdateDrawFrame()
{
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
}

int main()
{
    InitWindow(800, 450, "raylib [core] example - basic window");

    SetTargetFPS(60);

    while (!WindowShouldClose())
        UpdateDrawFrame();

    CloseWindow();

    return 0;
}
