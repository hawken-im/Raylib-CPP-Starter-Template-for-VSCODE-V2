#include <raylib.h>

int main() {
    int xball=400, yball=400;
    InitWindow(800, 800, "Bi and Bo");
    SetTargetFPS(60);
    //game loop
    while (WindowShouldClose()==false) {
        //1.event handling
        if (IsKeyDown(KEY_RIGHT)) {
            xball+=4;
        }
        else if (IsKeyDown(KEY_LEFT)) {
            xball-=4;
        }
        if (IsKeyDown(KEY_UP)) {
            yball-=4;
        }
        else if (IsKeyDown(KEY_DOWN)) {
            yball+=4;
        }
        //2.updating positions
        //3.drawing
        BeginDrawing();
        ClearBackground(WHITE);
        DrawCircle(xball, yball, 35, PINK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}