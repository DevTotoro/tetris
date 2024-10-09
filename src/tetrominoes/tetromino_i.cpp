#include "tetromino_i.h"

namespace Tetris {
    TetrominoI::TetrominoI()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoI::GetType() const {
        return TYPE;
    }
} // Tetris