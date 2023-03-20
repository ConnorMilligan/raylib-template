#include "raylib.h"

int main(int argc, char **argv) {
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Hello world!");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Hello world!", 190, 200, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}