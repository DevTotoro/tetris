#ifndef TETROMINO_H
#define TETROMINO_H

#include <array>

#include "../lib/types.h"

namespace Tetris {
    class Tetromino {
    public:
        typedef std::array<std::array<unsigned int, 2>, 4> Position;

        explicit Tetromino(const Position& position);
        virtual ~Tetromino() = default;

        [[nodiscard]] Position GetPosition() const;

        [[nodiscard]] virtual Types::CellType GetType() const = 0;

    private:
        Position position = {};
    };
} // Tetris

#endif //TETROMINO_H
