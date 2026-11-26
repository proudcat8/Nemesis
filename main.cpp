#include "raylib.h"
#include "raymath.h"

#include <cmath>

int ammo = 0;
bool grounded = false;
float bulletspeed = 12.0f;

int main() {
    InitWindow(1280, 720, "Nemesis");
    SetTargetFPS(120);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
