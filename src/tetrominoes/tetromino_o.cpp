#include "tetromino_o.h"

namespace Tetris {
    TetrominoO::TetrominoO()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoO::GetType() const {
        return TYPE;
    }
} // Tetris