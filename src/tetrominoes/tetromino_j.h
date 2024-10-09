#ifndef TETROMINO_J_H
#define TETROMINO_J_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoJ final : public Tetromino {
    public:
        TetrominoJ();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::J;

        constexpr static Position INITIAL_POSITION = {{
            {3, 0},
            {3, 1},
            {4, 1},
            {5, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_J_H
