#ifndef TETROMINO_O_H
#define TETROMINO_O_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoO final : public Tetromino {
    public:
        TetrominoO();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::O;

        constexpr static Position INITIAL_POSITION = {{
            {4, 0},
            {5, 0},
            {4, 1},
            {5, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_O_H
