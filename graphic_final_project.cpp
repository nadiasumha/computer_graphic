#include<dos.h>
#include<iostream>
#include<graphics.h>
#include<math.h>
#include<time.h>
#include<conio.h>

#define ORANGE COLOR(255, 165, 0)  // Define Orange color manually
#define INDIGO COLOR(75, 0, 130)    // Define Indigo color manually
#define VIOLET COLOR(148, 0, 211)   // Define Violet color manually

using namespace std;

int BangladeshFlag()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, GREEN);
    rectangle(100, 85, 250, 150);
    floodfill(101, 86, 15);

    setfillstyle(SOLID_FILL, RED);
    circle(175, 118, 20);
    floodfill(176, 119, 15);

    rectangle(100, 80, 105, 320);
    rectangle(90, 320, 115, 330);

    getch();
    closegraph();

    return 0;
}

int Emoji()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw face
    circle(300, 240, 160);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(302, 142, WHITE);

    // Draw left eye
    ellipse(240, 200, 360, 180, 20, 60);
    line(220, 200, 260, 200);
    setfillstyle(SOLID_FILL, RED);
    floodfill(222, 198, WHITE);

    // Draw right eye
    ellipse(360, 200, 360, 180, 20, 60);
    line(340, 200, 380, 200);
    setfillstyle(SOLID_FILL, RED);
    floodfill(342, 198, WHITE);

    // Draw mouth
    ellipse(300, 300, 360, 180, 100, 30 * 2);
    ellipse(300, 300, 360, 180, 110, 10 * 2);
    setfillstyle(SOLID_FILL, RED);
    floodfill(302, 278, WHITE);

    getch();
    closegraph();
}

int Rainbow()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = getmaxx() / 2;
    int y = getmaxy() / 2;

    // Define colors of the rainbow
    int colors[] = {RED, ORANGE, YELLOW, GREEN, BLUE, INDIGO, VIOLET};

    // Draw arcs of different colors to create a rainbow
    int radius = 220;
    int angle_step = 30;
for (int i = 0; i < 7; i++)
    {
        int arc_radius = radius - i * 10;
        for (int j = 0; j < angle_step; j++)
        {
            setcolor(colors[i]);
            arc(x, y, j * 180 / angle_step, (j + 1) * 180 / angle_step, arc_radius);
        }
    }

    getch();
    closegraph();

    return 0;
}


int Flower()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    ellipse(280, 120, 0, 360, 20, 70);
    floodfill(281, 121, 15);

    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    ellipse(345, 190, 0, 360, 70, 20);
    floodfill(346, 191, 15);

    setfillstyle(SOLID_FILL, LIGHTMAGENTA);
    ellipse(220, 190, 0, 360, 70, 20);
    floodfill(221, 191, 15);


    setfillstyle(SOLID_FILL, GREEN);
    rectangle(280, 200, 285, 300);
    floodfill(281, 201, 15);

    setfillstyle(SOLID_FILL, GREEN);
    ellipse(230, 280, 0, 360, 40, 10);
    floodfill(231, 281, 15);

    setfillstyle(SOLID_FILL, GREEN);
    ellipse(340, 280, 0, 360, 40, 10);
    floodfill(341, 281, 15);

    getch();
    closegraph();

    return 0;
}

int Bird()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setfillstyle(SOLID_FILL, LIGHTGRAY);
    circle(150, 150, 20);
    floodfill(150, 150, 15);

    setcolor(YELLOW);
    arc(90, 190, 50, 145, 60);
    arc(87, 117, 220, 320, 60);
        // Beak
    line(170, 147, 180, 153);
    line(180, 153, 170, 156);

    // Eye
    circle(162, 150, 2);

    // Tail
    line(10, 155, 40, 155);
    line(10, 145, 40, 155);
    line(10, 165, 40, 155);

    line(85, 155, 125, 115);
    line(85, 155, 55, 118);
    arc(90, 177, 60, 122, 70);

    getch();
    closegraph();
}

int main()
{
    int menu;

    cout << endl << endl;
    cout << "\t \t \t \t Name: Nadia Shamim Sumha" << endl;
    cout << "\t \t \t \t Student ID: CSE1903018031" << endl;
    cout << "\t \t \t \t Section: 22A" << endl;
    cout << endl;

    cout << "\t \t \t \t Menu:" << endl;
    cout << "\t \t \t \t 1. Bangladesh Flag" << endl;
    cout << "\t \t \t \t 2. Emoji" << endl;
    cout << "\t \t \t \t 3. Rainbow" << endl;
    cout << "\t \t \t \t 4. Flower" << endl;
    cout << "\t \t \t \t 5. Bird" << endl;

    cout << endl;

    while(true)
    {
        cout << "\t \t \t \t Enter Menu: ";
        cin >> menu;

        if(menu == 1)
        {
            BangladeshFlag();
        }
        else if(menu == 2)
        {
            Emoji();
        }
        else if(menu == 3)
        {
            Rainbow();
        }
        else if(menu == 4)
        {
            Flower();
        }
        else if(menu == 5)
        {
            Bird();
                    }
        else
        {
            cout << endl << "\t \t \t \t Menu not found" << endl << endl;
            //return 0;
        }
    }

    return 0;
}
