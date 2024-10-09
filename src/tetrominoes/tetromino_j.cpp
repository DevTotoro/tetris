#include "tetromino_j.h"

namespace Tetris {
    TetrominoJ::TetrominoJ()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoJ::GetType() const {
        return TYPE;
    }
} // Tetris