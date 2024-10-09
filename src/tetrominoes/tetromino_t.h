#ifndef TETROMINO_T_H
#define TETROMINO_T_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoT final : public Tetromino {
    public:
        TetrominoT();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::T;

        constexpr static Position INITIAL_POSITION = {{
            {4, 0},
            {3, 1},
            {4, 1},
            {5, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_T_H
