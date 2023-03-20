cmake_minimum_required(VERSION 3.16)
project(curses)

add_subdirectory(${PROJECT_SOURCE_DIR}/lib/raylib)

file(GLOB PROJECT_HEADERS src/*.h)
file(GLOB PROJECT_SOURCES src/*.c)


add_executable(${PROJECT_NAME} ${PROJECT_SOURCES} ${PROJECT_HEADERS})

target_link_libraries(${PROJECT_NAME} raylib)