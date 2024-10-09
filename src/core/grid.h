#ifndef GRID_H
#define GRID_H

#include "../lib/constants.h"
#include "../lib/types.h"

namespace Tetris {
    class Grid {
        constexpr static unsigned int ROWS = 22;
        constexpr static unsigned int COLUMNS = 10;

        constexpr static unsigned int GRID_GAP = 20;

    public:
        constexpr static unsigned int WIDTH = COLUMNS * Constants::CELL_SIZE;
        constexpr static unsigned int HEIGHT = ROWS * Constants::CELL_SIZE + GRID_GAP;

        Grid();

        void Draw() const;

    private:
        Types::CellType grid[ROWS][COLUMNS] = {};
    };
} // Tetris

#endif //GRID_H
