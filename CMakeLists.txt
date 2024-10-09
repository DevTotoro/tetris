cmake_minimum_required(VERSION 3.29)
project(tetris)

set(CMAKE_CXX_STANDARD 23)

# Dependencies
set(RAYLIB_VERSION 5.0)
find_package(raylib ${RAYLIB_VERSION} QUIET) # QUIET or REQUIRED
if (NOT raylib_FOUND) # If there's none, fetch and build raylib
    include(FetchContent)
    FetchContent_Declare(
            raylib
            DOWNLOAD_EXTRACT_TIMESTAMP OFF
            URL https://github.com/raysan5/raylib/archive/refs/tags/${RAYLIB_VERSION}.tar.gz
    )
    FetchContent_GetProperties(raylib)
    if (NOT raylib_POPULATED) # Have we downloaded raylib yet?
        set(FETCHCONTENT_QUIET NO)
        FetchContent_MakeAvailable(raylib)
        set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
    endif()
endif()

add_executable(
        tetris

        src/main.cpp
        src/application.cpp
        src/application.h

        src/lib/constants.h
        src/lib/types.h
        src/lib/utils.h

        src/core/game.cpp
        src/core/game.h
        src/core/grid.cpp
        src/core/grid.h

        src/tetrominoes/tetromino.cpp
        src/tetrominoes/tetromino.h
        src/tetrominoes/tetromino_i.cpp
        src/tetrominoes/tetromino_i.h
        src/tetrominoes/tetromino_o.cpp
        src/tetrominoes/tetromino_o.h
        src/tetrominoes/tetromino_t.cpp
        src/tetrominoes/tetromino_t.h
        src/tetrominoes/tetromino_s.cpp
        src/tetrominoes/tetromino_s.h
        src/tetrominoes/tetromino_z.cpp
        src/tetrominoes/tetromino_z.h
        src/tetrominoes/tetromino_j.cpp
        src/tetrominoes/tetromino_j.h
        src/tetrominoes/tetromino_l.cpp
        src/tetrominoes/tetromino_l.h
)

target_link_libraries(${PROJECT_NAME} raylib)

if (APPLE)
    target_link_libraries(${PROJECT_NAME} "-framework IOKit")
    target_link_libraries(${PROJECT_NAME} "-framework Cocoa")
    target_link_libraries(${PROJECT_NAME} "-framework OpenGL")
endif()
