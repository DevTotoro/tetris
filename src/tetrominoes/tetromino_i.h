#ifndef TETROMINO_I_H
#define TETROMINO_I_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoI final : public Tetromino {
    public:
        TetrominoI();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::I;

        constexpr static Position INITIAL_POSITION = {{
            {3, 1},
            {4, 1},
            {5, 1},
            {6, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_I_H
