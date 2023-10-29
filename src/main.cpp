#include "raylib.h"

int main(void) {
    InitWindow(800, 450, "Moving Circle");

    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircle(400, 225, 60, RED);
        EndDrawing();
    }
    CloseWindow();

    return 0;

}