#ifndef TETROMINO_L_H
#define TETROMINO_L_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoL final : public Tetromino {
    public:
        TetrominoL();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::L;

        constexpr static Position INITIAL_POSITION = {{
            {5, 0},
            {3, 1},
            {4, 1},
            {5, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_L_H
