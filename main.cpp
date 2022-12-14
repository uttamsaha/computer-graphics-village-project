#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int i=25,j=445;

void clouds()
{
    //clouds 1
    setcolor(WHITE);
    ellipse(40,30,60,240,10,15);
    ellipse(65,20,345,165,20,15);
    ellipse(103,29,340,160,20,15);
    ellipse(109,42,230,50,20,10);
    ellipse(66,46,163,340,31,17);

    //cloud 2
    ellipse(200,30,60,240,10,15);
    ellipse(225,20,345,165,20,15);
    ellipse(262,27,340,160,20,15);
    ellipse(268,42,230,50,20,10);
    ellipse(226,46,163,340,31,15);
    ellipse(300,21,20,182,21,19);
    ellipse(325,31,290,100,21,15);
    ellipse(299,45,228,20,33,11);

    //clouds 3
    ellipse(450,30,60,240,10,15);
    ellipse(475,20,345,165,20,15);
    ellipse(512,27,340,160,20,15);
    ellipse(518,42,230,50,20,10);
    ellipse(476,46,163,340,31,15);
}

void mountain()
{
    //m1
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(0,150,100,75);
    line(100,75,200,150);

    //m2
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(175,131,275,75);
    line(275,75,375,150);

    //m3
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(350,131,450,75);
    line(450,75,550,150);

    //m4
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,BROWN);
    line(525,131,600,75);
    line(600,75,750,180);

    //ground
    line(0,150,750,150);
    floodfill(100,136,WHITE);
    floodfill(275,136,WHITE);
    floodfill(450,136,WHITE);
    floodfill(600,136,WHITE);

}
void sky()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(50,50,WHITE);

}
void sun()
{
    setcolor(WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);
    arc(524,112,0,173,30);
    floodfill(520,105,WHITE);

}
void road()
{
    setcolor(CYAN);
    rectangle(0,380, 645,480);
    setfillstyle(LINE_FILL,CYAN );
    floodfill(1,381, CYAN);
}
void car()
{
        setfillstyle(SOLID_FILL, BLACK);
        bar(32+i,j-16,86+i,j);
        bar(40+i,j-10,90+i,j);
        setcolor(LIGHTBLUE);
        setfillstyle(SOLID_FILL, WHITE);

        //body
        line(i,j + 23, i, j);
        line(i, j, 40 + i, j - 20);
        line(40 + i,j - 20, 80 + i, j- 20);
        line(80 + i, j - 20, 100 + i, j);
        line(100 + i, j, 120 + i, j);
        line(120 + i, j, 120 + i, j + 23);
        line(0 + i, j + 23, 18 + i, j + 23);
        arc(30 + i, j+ 23, 0, 180, 12);
        line(42 + i, j + 23, 78 + i, j + 23);
        arc(90 + i, j+ 23, 0, 180, 12);
        line(102 + i, j + 23, 120 + i, j + 23);
        line(28 + i, j, 43 + i, j- 15);
        line(43 + i, j - 15, 57 + i, j - 15);
        line(57 + i, j - 15, 57 + i, j);
        line(57 + i, j, 28 + i, j);
        line(62 + i, j - 15, 77 + i, j - 15);
        line(77 + i, j - 15, 92 + i, j);
        line(92 + i, j, 62 + i, j);
        line(62 + i, j, 62 + i, j - 15);
        floodfill(2 + i, j + 20, LIGHTBLUE);
        setcolor(LIGHTGREEN);
        setfillstyle(SOLID_FILL, 3);

        //Wheels
        circle(30 + i  ,j + 25, 9);
        circle(90 + i , j + 25, 9);
        floodfill(30 + i, j + 25, LIGHTGREEN);
        floodfill(90 + i, j + 25, LIGHTGREEN);
}
int drawHouse()
{
    int points[] = {150,250, 250,250, 300,280, 100,280, 150,250};
    setcolor(LIGHTBLUE);
    fillpoly(5, points);

    setcolor(LIGHTRED);
    rectangle(120,280, 280,370);
    setfillstyle(SOLID_FILL,LIGHTRED);
    floodfill(121,281, LIGHTRED);

    setcolor(MAGENTA);
    rectangle(185,320, 215,370);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(186,321, MAGENTA);

    setcolor(BLUE);
    rectangle(140,300, 170,330);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(141,301, BLUE);
    setcolor(BLUE);
    rectangle(230,300, 260,330);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(231,301, BLUE);
}

int school()
{
    setcolor(LIGHTBLUE);
    rectangle(350,200, 550,280);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    floodfill(351,201, LIGHTBLUE);
    //doors
    setcolor(MAGENTA);
    rectangle(385,250, 410,280);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(386,251, MAGENTA);

    setcolor(MAGENTA);
    rectangle(450,250, 475,280);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(451,251, MAGENTA);

    setcolor(MAGENTA);
    rectangle(515,250,540,280);
    setfillstyle(SOLID_FILL,MAGENTA);
    floodfill(516,251, MAGENTA);

    setcolor(BLUE);
    line(510,200, 510,280);

    //window
    setcolor(BLUE);
    rectangle(360,220, 380,240);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(361,221, BLUE);

    setcolor(BLUE);
    rectangle(420,220, 440,240);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(421,221, BLUE);

    setcolor(BLUE);
    rectangle(475,220, 495,240);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(476,221, BLUE);

    //wall
    setcolor(BLUE);
    line(370,175, 570,175);
    line(370,175, 350,200);
    line(350,200, 550,200);
    line(570,175, 550,200); // 550,200
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(371,176, BLUE);

    //wall2
    setcolor(DARKGRAY);
    line(570,175, 550,200);
    line(550,200, 550,280);
    line(570,175, 570,265);
    line(550,280, 570,265);
    setfillstyle(SOLID_FILL,DARKGRAY);
    floodfill(551,201, DARKGRAY);
    setcolor(5);
    outtextxy(370,170,"School");

    //flag
    setcolor(WHITE);
    rectangle(270,170, 315,210);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(271,171, GREEN);
    setcolor(LIGHTGRAY);
    rectangle(315,170, 320,300);
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    floodfill(316,171, LIGHTGRAY);

    setcolor(RED);
    circle(292,190, 10);
    setfillstyle(SOLID_FILL,RED);
    floodfill(293,191, RED);
}

int main()
{
    int gd, gm;
    detectgraph(&gd, &gm);
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    clouds();
    mountain();
    sky();
    sun();
    setcolor(GREEN);
    rectangle(0,150, 645,380);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(1,151, GREEN);
    road();
    car();
    drawHouse();
    school();
    getch();
}
