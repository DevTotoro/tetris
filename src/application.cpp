#include "application.h"

#include <raylib.h>

namespace Tetris {
    void Start() {
        InitWindow(Game::WIDTH, Game::HEIGHT, "Tetris");
        SetTargetFPS(60);

        const Game game;

        while (!WindowShouldClose())
            UpdateDrawFrame(game);

        CloseWindow();
    }

    void UpdateDrawFrame(const Game& game) {
        BeginDrawing();

        ClearBackground(BLACK);

        game.Draw();

        EndDrawing();
    }

}
