#ifndef UTILS_H
#define UTILS_H

#include <raylib.h>

#include "types.h"

namespace Tetris::Utils {
    inline Color GetCellColor(const Types::CellType type) {
        switch (type) {
            case Types::CellType::EMPTY:
                return DARKGRAY;
            case Types::CellType::I:
                return SKYBLUE;
            case Types::CellType::O:
                return GOLD;
            case Types::CellType::T:
                return PURPLE;
            case Types::CellType::S:
                return GREEN;
            case Types::CellType::Z:
                return RED;
            case Types::CellType::J:
                return BLUE;
            case Types::CellType::L:
                return ORANGE;
            default:
                return BLANK;
        }
    }
}

#endif //UTILS_H
