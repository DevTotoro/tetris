#include "application.h"

#include <raylib.h>

namespace Tetris {
    void Start() {
        InitWindow(800, 450, "Tetris");
        SetTargetFPS(60);

        while (!WindowShouldClose())
            UpdateDrawFrame();

        CloseWindow();
    }

    void UpdateDrawFrame() {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
}
