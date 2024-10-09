#ifndef GAME_H
#define GAME_H

#include "../lib/constants.h"
#include "grid.h"

namespace Tetris {
    class Game {
    public:
        constexpr static unsigned int WIDTH = Grid::WIDTH + Constants::PADDING_X * 2;
        constexpr static unsigned int HEIGHT = Grid::HEIGHT + Constants::PADDING_Y * 2;

        void Draw() const;

    private:
        Grid grid;
    };
} // Tetris

#endif //GAME_H
