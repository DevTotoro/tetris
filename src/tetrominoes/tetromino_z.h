#ifndef TETROMINO_Z_H
#define TETROMINO_Z_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoZ final : public Tetromino {
    public:
        TetrominoZ();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::Z;

        constexpr static Position INITIAL_POSITION = {{
            {3, 0},
            {4, 0},
            {4, 1},
            {5, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_Z_H
