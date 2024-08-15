#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    int x = 100, y = 100;
    int dx = 2, dy = 2;
    int radius = 20;

    while (!kbhit()) {
        cleardevice();
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        fillellipse(x, y, radius, radius);
        delay(33);

        x += dx;
        y += dy;

        if (x < radius || x > getmaxx() - radius) dx = -dx;
        if (y < radius || y > getmaxy() - radius) dy = -dy;
    }

    getch();
    closegraph();
    return 0;
}