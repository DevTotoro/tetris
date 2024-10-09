#ifndef TETROMINO_S_H
#define TETROMINO_S_H

#include "tetromino.h"

namespace Tetris {
    class TetrominoS final : public Tetromino {
    public:
        TetrominoS();

        [[nodiscard]] Types::CellType GetType() const override;

    private:
        constexpr static auto TYPE = Types::CellType::S;

        constexpr static Position INITIAL_POSITION = {{
            {4, 0},
            {5, 0},
            {3, 1},
            {4, 1}
        }};
    };
} // Tetris

#endif //TETROMINO_S_H
