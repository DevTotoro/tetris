#include "tetromino_t.h"

namespace Tetris {
    TetrominoT::TetrominoT()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoT::GetType() const {
        return TYPE;
    }
} // Tetris