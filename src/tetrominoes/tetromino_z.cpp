#include "tetromino_z.h"

namespace Tetris {
    TetrominoZ::TetrominoZ()
        : Tetromino(INITIAL_POSITION) {}

    Types::CellType TetrominoZ::GetType() const {
        return TYPE;
    }
} // Tetris