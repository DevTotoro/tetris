#include "tetromino_l.h"

namespace Tetris {
    TetrominoL::TetrominoL()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoL::GetType() const {
        return TYPE;
    }
} // Tetris