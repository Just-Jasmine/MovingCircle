#include "raylib.h"

Vector2 getInput() {
    Vector2 input = Vector2{0.0, 0.0};
    if (IsKeyDown(KEY_W)) input.y -= 2.0;
    if (IsKeyDown(KEY_A)) input.x -= 2.0;
    if (IsKeyDown(KEY_S)) input.y += 2.0;
    if (IsKeyDown(KEY_D)) input.x += 2.0;
    return input;
}

int main(void) {
    InitWindow(800, 450, "Moving Circle");

    SetTargetFPS(60);

    Vector2 ballPosition = Vector2{400.0, 225.0};

    while (!WindowShouldClose()){
        ballPosition.x += getInput().x;
        ballPosition.y += getInput().y;
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawCircle(ballPosition.x, ballPosition.y, 60, RED);
        EndDrawing();
    }
    CloseWindow();

    return 0;

}