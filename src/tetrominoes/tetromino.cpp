#include "tetromino.h"

namespace Tetris {
    Tetromino::Tetromino(const Position &position)
        : position(position) {}

    Tetromino::Position Tetromino::GetPosition() const {
        return position;
    }
} // Tetris