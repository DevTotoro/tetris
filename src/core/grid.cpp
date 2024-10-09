#include "grid.h"

#include <algorithm>

#include "../lib/utils.h"

namespace Tetris {
    Grid::Grid() {
        for (auto& row : grid)
            std::fill_n(row, COLUMNS, Types::CellType::EMPTY);
    }

    void Grid::Draw() const {
        for (unsigned int row = 0; row < ROWS; ++row) {
            for (unsigned int column = 0; column < COLUMNS; ++column) {
                const auto cell = grid[row][column];
                const auto color = Utils::GetCellColor(cell);

                const auto x = column * Constants::CELL_SIZE + Constants::PADDING_X;
                auto y = row * Constants::CELL_SIZE + Constants::PADDING_Y;

                if (row > 1) {
                    y += GRID_GAP;
                }

                DrawRectangle(x, y, Constants::CELL_SIZE, Constants::CELL_SIZE, color);

                if (cell == Types::CellType::EMPTY)
                    DrawRectangleLines(x, y, Constants::CELL_SIZE, Constants::CELL_SIZE, BLACK);
            }
        }
    }
} // Tetris