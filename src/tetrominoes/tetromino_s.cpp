#include "tetromino_s.h"

namespace Tetris {
    TetrominoS::TetrominoS()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoS::GetType() const {
        return TYPE;
    }
} // Tetris