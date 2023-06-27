#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);


    glColor3ub(0, 76, 153); //sky
    glBegin(GL_POLYGON);
    glVertex2i(0, 400);
    glVertex2i(800, 400);
    glVertex2i(800, 700);
    glVertex2i(0, 700);
    glEnd();

    glColor3ub(102, 102, 0);//ground
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(800, 0);
    glVertex2i(800, 400);
    glVertex2i(0, 400);
    glEnd();


    glColor3ub(32, 32, 32);//Road 1
    glBegin(GL_POLYGON);
    glVertex2i(0, 50);
    glVertex2i(800, 50);
    glVertex2i(800, 200);
    glVertex2i(0, 200);
    glEnd();


    glEnable(GL_LINE_STIPPLE);//Road 1 Line Draw
    glLineStipple(3, 0x00ff);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(0, 130);
    glVertex2i(800, 130);
    glEnd();
    glDisable(GL_LINE_STIPPLE);
    //glPopMatrix();

    glColor3ub(32, 32, 32);//Road 2
    glBegin(GL_POLYGON);
    glVertex2i(350, 200);
    glVertex2i(400, 200);
    glVertex2i(400, 350);
    glVertex2i(350, 350);
    glEnd();

    glColor3ub(32, 32, 32);//Road 3
    glBegin(GL_POLYGON);
    glVertex2i(0, 350);
    glVertex2i(800, 350);
    glVertex2i(800, 380);
    glVertex2i(0, 380);
    glEnd();


    glColor3ub(102, 0, 0);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(30, 390);
    glVertex2i(100, 390);
    glVertex2i(100, 500);
    glVertex2i(30, 500);
    glEnd();

    glColor3ub(32, 32, 32);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(40, 460);
    glVertex2i(60, 460);
    glVertex2i(60, 480);
    glVertex2i(40, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(70, 460);
    glVertex2i(90, 460);
    glVertex2i(90, 480);
    glVertex2i(70, 480);
    glEnd();


    glColor3ub(0, 153, 76);//building 2
    glBegin(GL_POLYGON);
    glVertex2i(210, 390);
    glVertex2i(280, 390);
    glVertex2i(280, 500);
    glVertex2i(210, 500);
    glEnd();

    glColor3ub(255, 255, 102);//building 2 window 1
    glBegin(GL_POLYGON);
    glVertex2i(220, 460);
    glVertex2i(240, 460);
    glVertex2i(240, 480);
    glVertex2i(220, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 2 window 2
    glBegin(GL_POLYGON);
    glVertex2i(250, 460);
    glVertex2i(270, 460);
    glVertex2i(270, 480);
    glVertex2i(250, 480);
    glEnd();

    glColor3ub(0, 102, 51);//building 3
    glBegin(GL_POLYGON);
    glVertex2i(330, 390);
    glVertex2i(420, 390);
    glVertex2i(420, 500);
    glVertex2i(330, 500);
    glEnd();

    glColor3ub(255, 255, 102);//building 3 window 1
    glBegin(GL_POLYGON);
    glVertex2i(335, 460);
    glVertex2i(355, 460);
    glVertex2i(355, 480);
    glVertex2i(335, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 3 window 2
    glBegin(GL_POLYGON);
    glVertex2i(365, 460);
    glVertex2i(385, 460);
    glVertex2i(385, 480);
    glVertex2i(365, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 3 window 3
    glBegin(GL_POLYGON);
    glVertex2i(395, 460);
    glVertex2i(415, 460);
    glVertex2i(415, 480);
    glVertex2i(395, 480);
    glEnd();

    glColor3ub(255, 255, 102);//building 3 window 4
    glBegin(GL_POLYGON);
    glVertex2i(335, 425);
    glVertex2i(355, 425);
    glVertex2i(355, 450);
    glVertex2i(335, 450);
    glEnd();

    glColor3ub(32, 32, 32);//building 3 window 5
    glBegin(GL_POLYGON);
    glVertex2i(365, 425);
    glVertex2i(385, 425);
    glVertex2i(385, 450);
    glVertex2i(365, 450);
    glEnd();

    glColor3ub(255, 255, 102);//building 3 window 6
    glBegin(GL_POLYGON);
    glVertex2i(395, 425);
    glVertex2i(415, 425);
    glVertex2i(415, 450);
    glVertex2i(395, 450);
    glEnd();



    glColor3ub(0, 102, 102);//building 4
    glBegin(GL_POLYGON);
    glVertex2i(430, 390);
    glVertex2i(500, 390);
    glVertex2i(500, 500);
    glVertex2i(430, 500);
    glEnd();

    glColor3ub(32, 32, 32);//building 4 window 1
    glBegin(GL_POLYGON);
    glVertex2i(440, 460);
    glVertex2i(460, 460);
    glVertex2i(460, 480);
    glVertex2i(440, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 4 window 2
    glBegin(GL_POLYGON);
    glVertex2i(470, 460);
    glVertex2i(490, 460);
    glVertex2i(490, 480);
    glVertex2i(470, 480);
    glEnd();

    glColor3ub(255, 255, 102);//building 4 window 3
    glBegin(GL_POLYGON);
    glVertex2i(440, 430);
    glVertex2i(460, 430);
    glVertex2i(460, 450);
    glVertex2i(440, 450);
    glEnd();

    glColor3ub(32, 32, 32);//building 4 window 4
    glBegin(GL_POLYGON);
    glVertex2i(470, 430);
    glVertex2i(490, 430);
    glVertex2i(490, 450);
    glVertex2i(470, 450);
    glEnd();


    glColor3ub(0, 102, 102);//building 5
    glBegin(GL_POLYGON);
    glVertex2i(600, 390);
    glVertex2i(700, 390);
    glVertex2i(700, 500);
    glVertex2i(600, 500);
    glEnd();

    glColor3ub(255, 255, 102);//building 5 window 1
    glBegin(GL_POLYGON);
    glVertex2i(610, 460);
    glVertex2i(630, 460);
    glVertex2i(630, 480);
    glVertex2i(610, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 5 window 2
    glBegin(GL_POLYGON);
    glVertex2i(640, 460);
    glVertex2i(660, 460);
    glVertex2i(660, 480);
    glVertex2i(640, 480);
    glEnd();

    glColor3ub(32, 32, 32);//building 5 window 3
    glBegin(GL_POLYGON);
    glVertex2i(670, 460);
    glVertex2i(690, 460);
    glVertex2i(690, 480);
    glVertex2i(670, 480);
    glEnd();

    glColor3ub(255, 255, 102);//building 5 window 4
    glBegin(GL_POLYGON);
    glVertex2i(610, 430);
    glVertex2i(630, 430);
    glVertex2i(630, 450);
    glVertex2i(610, 450);
    glEnd();

    glColor3ub(255, 255, 102);//building 5 window 5
    glBegin(GL_POLYGON);
    glVertex2i(640, 430);
    glVertex2i(660, 430);
    glVertex2i(660, 450);
    glVertex2i(640, 450);
    glEnd();

    glColor3ub(255, 255, 102);//building 5 window 6
    glBegin(GL_POLYGON);
    glVertex2i(670, 430);
    glVertex2i(690, 430);
    glVertex2i(690, 450);
    glVertex2i(670, 450);
    glEnd();

    glColor3ub(255, 51, 51);//Behind Clock Tower building
    glBegin(GL_POLYGON);
    glVertex2i(280, 340);
    glVertex2i(345, 340);
    glVertex2i(345, 460);
    glVertex2i(280, 460);
    glEnd();

    glColor3ub(153, 0, 76);//building
    glBegin(GL_POLYGON);
    glVertex2i(130, 270);
    glVertex2i(230, 270);
    glVertex2i(230, 480);
    glVertex2i(130, 480);
    glEnd();

    glColor3ub(255, 255, 102); //build  window 1
    glBegin(GL_POLYGON);
    glVertex2i(150, 430);
    glVertex2i(170, 430);
    glVertex2i(170, 460);
    glVertex2i(150, 460);
    glEnd();

    glColor3ub(32, 32, 32); //build  window 2
    glBegin(GL_POLYGON);
    glVertex2i(190, 430);
    glVertex2i(210, 430);
    glVertex2i(210, 460);
    glVertex2i(190, 460);
    glEnd();


    glColor3ub(32, 32, 32); //build  window 3
    glBegin(GL_POLYGON);
    glVertex2i(150, 380);
    glVertex2i(170, 380);
    glVertex2i(170, 410);
    glVertex2i(150, 410);
    glEnd();

    glColor3ub(255, 255, 102); //build  window 4
    glBegin(GL_POLYGON);
    glVertex2i(190, 380);
    glVertex2i(210, 380);
    glVertex2i(210, 410);
    glVertex2i(190, 410);
    glEnd();


    glColor3ub(0, 0, 102);//building
    glBegin(GL_POLYGON);
    glVertex2i(50, 250);
    glVertex2i(150, 250);
    glVertex2i(150, 450);
    glVertex2i(50, 450);
    glEnd();

    glColor3ub(255, 255, 102); //build  window 1
    glBegin(GL_POLYGON);
    glVertex2i(70, 400);
    glVertex2i(90, 400);
    glVertex2i(90, 430);
    glVertex2i(70, 430);
    glEnd();

    glColor3ub(255, 255, 102); //build  window 2
    glBegin(GL_POLYGON);
    glVertex2i(110, 400);
    glVertex2i(130, 400);
    glVertex2i(130, 430);
    glVertex2i(110, 430);
    glEnd();


    glColor3ub(255, 255, 102); //build  window 3
    glBegin(GL_POLYGON);
    glVertex2i(70, 350);
    glVertex2i(90, 350);
    glVertex2i(90, 380);
    glVertex2i(70, 380);
    glEnd();

    glColor3ub(255, 255, 102); //build  window 4
    glBegin(GL_POLYGON);
    glVertex2i(110, 350);
    glVertex2i(130, 350);
    glVertex2i(130, 380);
    glVertex2i(110, 380);
    glEnd();


    glColor3ub(204, 204, 0); //City clock Triangle
    glBegin(GL_TRIANGLES);
    glVertex2i(250, 420);
    glVertex2i(295, 480);
    glVertex2i(340, 420);
    glEnd();

    glColor3ub(102, 51, 0); //City Clock Polygon
    glBegin(GL_POLYGON);
    glVertex2i(250, 250);
    glVertex2i(340, 250);
    glVertex2i(340, 420);
    glVertex2i(250, 420);
    glEnd();

    glColor3ub(0, 51, 0); //City Clock Door
    glBegin(GL_POLYGON);
    glVertex2i(280, 250);
    glVertex2i(310, 250);
    glVertex2i(310, 300);
    glVertex2i(280, 300);
    glEnd();

    glColor3ub(0, 0, 0);//Clock outdoor line 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(280, 240);
    glVertex2i(310, 240);
    glEnd();

    glColor3ub(0, 0, 0);//Clock Outdoor Line 2
    glBegin(GL_LINE_LOOP);
    glVertex2i(280, 235);
    glVertex2i(310, 235);
    glEnd();



    //Bresenham's Circle Algorithm

    //Moon Shape
    int p, x, y;
    int xc = 700, yc = 600, r = 30;
    p = 1 - r;
    x = 0;
    y = r;
    while (x <= y)
    {
        if (p < 0)
        {
            x = x + 1;
            p = p + 2 * x + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            p = p + 2 * (x + 1) - 2 * (y + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(x + xc, y + yc);
        glVertex2i(x + xc, -y + yc);
        glVertex2i(-x + xc, -y + yc);
        glVertex2i(-x + xc, y + yc);
        glVertex2i(y + xc, x + yc);
        glVertex2i(y + xc, -x + yc);
        glVertex2i(-y + xc, -x + yc);
        glVertex2i(-y + xc, x + yc);
        glEnd();
    }


    //Clock Shape
    int p1, x1, y1;
    int xc1 = 295, yc1 = 380, r1 = 35;
    p1 = 1 - r1;
    x1 = 0;
    y1 = r1;
    while (x1 <= y1)
    {
        if (p1 < 0)
        {
            x1 = x1 + 1;
            p1 = p1 + 2 * x1 + 1;
        }
        else
        {
            x1 = x1 + 1;
            y1 = y1 - 1;
            p1 = p1 + 2 * (x1 + 1) - 2 * (y1 + 1);
        }
        glColor3ub(160, 160, 160);
        glBegin(GL_POLYGON);
        glVertex2i(x1 + xc1, y1 + yc1);
        glVertex2i(x1 + xc1, -y1 + yc1);
        glVertex2i(-x1 + xc1, -y1 + yc1);
        glVertex2i(-x1 + xc1, y1 + yc1);
        glVertex2i(y1 + xc1, x1 + yc1);
        glVertex2i(y1 + xc1, -x1 + yc1);
        glVertex2i(-y1 + xc1, -x1 + yc1);
        glVertex2i(-y1 + xc1, x1 + yc1);
        glEnd();
    }

    glColor3ub(0, 0, 0);//Minute Clock
    glBegin(GL_LINE_LOOP);
    glVertex2i(295, 380);
    glVertex2i(295, 410);
    glEnd();

    glColor3ub(0, 0, 0);//Hour Clock
    glBegin(GL_LINE_LOOP);
    glVertex2i(295, 380);
    glVertex2i(280, 370);
    glEnd();


    glColor3ub(76, 0, 153);//1
    glBegin(GL_POLYGON);
    glVertex2i(410, 250);
    glVertex2i(480, 210);
    glVertex2i(480, 380);
    glVertex2i(410, 400);
    glEnd();

    glColor3ub(153, 0, 153);//2
    glBegin(GL_POLYGON);
    glVertex2i(480, 210);
    glVertex2i(520, 230);
    glVertex2i(520, 400);
    glVertex2i(480, 380);
    glEnd();


    glColor3ub(229, 204, 255);//3
    glBegin(GL_POLYGON);
    glVertex2i(410, 400);
    glVertex2i(480, 380);
    glVertex2i(520, 400);
    glVertex2i(450, 420);
    glEnd();


    glColor3ub(153, 0, 0);//Building
    glBegin(GL_POLYGON);
    glVertex2i(550, 230);
    glVertex2i(640, 230);
    glVertex2i(640, 400);
    glVertex2i(550, 400);
    glEnd();


    glColor3ub(32, 32, 32);//Building window
    glBegin(GL_POLYGON);
    glVertex2i(565, 350);
    glVertex2i(590, 350);
    glVertex2i(590, 380);
    glVertex2i(565, 380);
    glEnd();

    glColor3ub(255, 255, 102);//Building window
    glBegin(GL_POLYGON);
    glVertex2i(600, 350);
    glVertex2i(625, 350);
    glVertex2i(625, 380);
    glVertex2i(600, 380);
    glEnd();


    glColor3ub(255, 255, 102);//Building window
    glBegin(GL_POLYGON);
    glVertex2i(565, 310);
    glVertex2i(590, 310);
    glVertex2i(590, 340);
    glVertex2i(565, 340);
    glEnd();

    glColor3ub(32, 32, 32);//Building window
    glBegin(GL_POLYGON);
    glVertex2i(600, 310);
    glVertex2i(625, 310);
    glVertex2i(625, 340);
    glVertex2i(600, 340);
    glEnd();

    glColor3ub(32, 32, 32);//Playgroung Road
    glBegin(GL_POLYGON);
    glVertex2i(710, 330);
    glVertex2i(730, 330);
    glVertex2i(730, 350);
    glVertex2i(710, 350);
    glEnd();

    //PLAYGROUND
    int p2, x2, y2;
    int xc2 = 720, yc2 = 270, r2 = 65;
    p2 = 1 - r2;
    x2 = 0;
    y2 = r2;
    while (x2 <= y2)
    {
        if (p2 < 0)
        {
            x2 = x2 + 1;
            p2 = p2 + 2 * x2 + 1;
        }
        else
        {
            x2 = x2 + 1;
            y2 = y2 - 1;
            p2 = p2 + 2 * (x2 + 1) - 2 * (y2 + 1);
        }
        glColor3ub(0, 102, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x2 + xc2, y2 + yc2);
        glVertex2i(x2 + xc2, -y2 + yc2);
        glVertex2i(-x2 + xc2, -y2 + yc2);
        glVertex2i(-x2 + xc2, y2 + yc2);
        glVertex2i(y2 + xc2, x2 + yc2);
        glVertex2i(y2 + xc2, -x2 + yc2);
        glVertex2i(-y2 + xc2, -x2 + yc2);
        glVertex2i(-y2 + xc2, x2 + yc2);
        glEnd();
    }

    glColor3ub(153, 76, 0);//cricket ground
    glBegin(GL_POLYGON);
    glVertex2i(710, 240);
    glVertex2i(730, 240);
    glVertex2i(730, 300);
    glVertex2i(710, 300);
    glEnd();

    //CAR
    glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2i(70, 110);
    glVertex2i(230, 110);
    glVertex2i(230, 210);
    glVertex2i(70, 210);
    glEnd();

    glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2i(230, 110);
    glVertex2i(260, 110);
    glVertex2i(260, 180);
    glVertex2i(230, 190);
    glEnd();

    //Car Wheel 1
    int p3, x3, y3;
    int xc3 = 120, yc3 = 110, r3 = 20;
    p3 = 1 - r3;
    x3 = 0;
    y3 = r3;
    while (x3 <= y3)
    {
        if (p3 < 0)
        {
            x3 = x3 + 1;
            p3 = p3 + 2 * x3 + 1;
        }
        else
        {
            x3 = x3 + 1;
            y3 = y3 - 1;
            p3 = p3 + 2 * (x3 + 1) - 2 * (y3 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x3 + xc3, y3 + yc3);
        glVertex2i(x3 + xc3, -y3 + yc3);
        glVertex2i(-x3 + xc3, -y3 + yc3);
        glVertex2i(-x3 + xc3, y3 + yc3);
        glVertex2i(y3 + xc3, x3 + yc3);
        glVertex2i(y3 + xc3, -x3 + yc3);
        glVertex2i(-y3 + xc3, -x3 + yc3);
        glVertex2i(-y3 + xc3, x3 + yc3);
        glEnd();
    }

    //Car Wheel 2
    int p4, x4, y4;
    int xc4 = 210, yc4 = 110, r4 = 20;
    p4 = 1 - r4;
    x4 = 0;
    y4 = r4;
    while (x4 <= y4)
    {
        if (p4 < 0)
        {
            x4 = x4 + 1;
            p4 = p4 + 2 * x4 + 1;
        }
        else
        {
            x4 = x4 + 1;
            y4 = y4 - 1;
            p4 = p4 + 2 * (x4 + 1) - 2 * (y4 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x4 + xc4, y4 + yc4);
        glVertex2i(x4 + xc4, -y4 + yc4);
        glVertex2i(-x4 + xc4, -y4 + yc4);
        glVertex2i(-x4 + xc4, y4 + yc4);
        glVertex2i(y4 + xc4, x4 + yc4);
        glVertex2i(y4 + xc4, -x4 + yc4);
        glVertex2i(-y4 + xc4, -x4 + yc4);
        glVertex2i(-y4 + xc4, x4 + yc4);
        glEnd();
    }

    glColor3ub(0, 0, 0);//CAR Glass
    glBegin(GL_POLYGON);
    glVertex2i(230, 150);
    glVertex2i(260, 150);
    glVertex2i(260, 180);
    glVertex2i(230, 180);
    glEnd();


    glColor3ub(205, 205, 0);// Car Light
    glBegin(GL_POLYGON);
    glVertex2i(260, 120);
    glVertex2i(340, 90);
    glVertex2i(340, 150);
    glVertex2i(260, 130);
    glEnd();

    glColor3ub(172, 57, 57);//Car 2
    glBegin(GL_POLYGON);
    glVertex2i(470, 170);
    glVertex2i(650, 170);
    glVertex2i(650, 210);
    glVertex2i(470, 210);
    glEnd();

    glColor3ub(0, 25, 51);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(490, 210);
    glVertex2i(640, 210);
    glVertex2i(620, 240);
    glVertex2i(530, 240);
    glEnd();



    //Car Wheel 3
    int p5, x5, y5;
    int xc5 = 510, yc5 = 170, r5 = 20;
    p5 = 1 - r5;
    x5 = 0;
    y5 = r5;
    while (x5 <= y5)
    {
        if (p5 < 0)
        {
            x5 = x5 + 1;
            p5 = p5 + 2 * x5 + 1;
        }
        else
        {
            x5 = x5 + 1;
            y5 = y5 - 1;
            p5 = p5 + 2 * (x5 + 1) - 2 * (y5 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x5 + xc5, y5 + yc5);
        glVertex2i(x5 + xc5, -y5 + yc5);
        glVertex2i(-x5 + xc5, -y5 + yc5);
        glVertex2i(-x5 + xc5, y5 + yc5);
        glVertex2i(y5 + xc5, x5 + yc5);
        glVertex2i(y5 + xc5, -x5 + yc5);
        glVertex2i(-y5 + xc5, -x5 + yc5);
        glVertex2i(-y5 + xc5, x5 + yc5);
        glEnd();
    }

    //Car Wheel 4
    int p6, x6, y6;
    int xc6 = 600, yc6 = 170, r6 = 20;
    p6 = 1 - r6;
    x6 = 0;
    y6 = r6;
    while (x6 <= y6)
    {
        if (p6 < 0)
        {
            x6 = x6 + 1;
            p6 = p6 + 2 * x6 + 1;
        }
        else
        {
            x6 = x6 + 1;
            y6 = y6 - 1;
            p6 = p6 + 2 * (x6 + 1) - 2 * (y6 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x6 + xc6, y6 + yc6);
        glVertex2i(x6 + xc6, -y6 + yc6);
        glVertex2i(-x6 + xc6, -y6 + yc6);
        glVertex2i(-x6 + xc6, y6 + yc6);
        glVertex2i(y6 + xc6, x6 + yc6);
        glVertex2i(y6 + xc6, -x6 + yc6);
        glVertex2i(-y6 + xc6, -x6 + yc6);
        glVertex2i(-y6 + xc6, x6 + yc6);
        glEnd();
    }

    glColor3ub(255, 255, 255);//Car Middle Line
    glBegin(GL_LINE_LOOP);
    glVertex2i(570, 170);
    glVertex2i(570, 240);
    glEnd();


    glColor3ub(205, 205, 0);// Car 2 Light
    glBegin(GL_POLYGON);
    glVertex2i(400, 150);
    glVertex2i(470, 180);
    glVertex2i(470, 190);
    glVertex2i(400, 210);
    glEnd();


    glFlush();
}
void init(void)
{

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(0, 1000, 0, 1000);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("City Scenerio");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

