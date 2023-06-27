#include <gl/glut.h>
#include <Windows.h>
#include <iostream>
using namespace std;

double x = 130;
double c = 0;
double cc = 0;
double s = 0;
double ss = 0;
double m = 0;
double b = 0;
double bb = 0;
double g = 0;

void circle() {

    glColor3ub(173, 216, 230); //sky
    glBegin(GL_POLYGON);
    glVertex2i(0, 600);
    glVertex2i(1000, 600);
    glVertex2i(1000, 1000);
    glVertex2i(0, 1000);
    glEnd();



    glColor3ub(0, 204, 0);//ground
    glBegin(GL_POLYGON);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 600);
    glVertex2i(0, 600);
    glEnd();

    glColor3ub(32, 32, 32);//Road 1
    glBegin(GL_POLYGON);
    glVertex2i(0, 50);
    glVertex2i(1000, 50);
    glVertex2i(1000, 300);
    glVertex2i(0, 300);
    glEnd();

    glEnable(GL_LINE_STIPPLE);//Road 1 Line Draw
    glLineStipple(4, 0x00ff);

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2i(0, 180);
    glVertex2i(1000, 180);
    glEnd();
    glDisable(GL_LINE_STIPPLE);

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
    glVertex2i(1000, 350);
    glVertex2i(1000, 470);
    glVertex2i(0, 470);
    glEnd();

    //car right 1 red
    glColor3ub(255, 0, 0);//Car 3
    glBegin(GL_POLYGON);
    glVertex2i(s + 470, 400);
    glVertex2i(s + 650, 400);
    glVertex2i(s + 650, 430);
    glVertex2i(s + 470, 430);
    if (s < 1000) {

        s = s + 0.04;

    }

    else s = 0;

    glutPostRedisplay();
    glEnd();


    glColor3ub(0, 25, 51);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(s + 490, 430);
    glVertex2i(s + 640, 430);
    glVertex2i(s + 620, 460);
    glVertex2i(s + 530, 460);
    glEnd();

    int p555, x555, y555;
    int xc555 = s + 510, yc555 = 400, r555 = 20;
    p555 = 1 - r555;
    x555 = 0;
    y555 = r555;
    while (x555 <= y555)
    {
        if (p555 < 0)
        {
            x555 = x555 + 1;
            p555 = p555 + 2 * x555 + 1;
        }
        else
        {
            x555 = x555 + 1;
            y555 = y555 - 1;
            p555 = p555 + 2 * (x555 + 1) - 2 * (y555 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x555 + xc555, y555 + yc555);
        glVertex2i(x555 + xc555, -y555 + yc555);
        glVertex2i(-x555 + xc555, -y555 + yc555);
        glVertex2i(-x555 + xc555, y555 + yc555);
        glVertex2i(y555 + xc555, x555 + yc555);
        glVertex2i(y555 + xc555, -x555 + yc555);
        glVertex2i(-y555 + xc555, -x555 + yc555);
        glVertex2i(-y555 + xc555, x555 + yc555);
        glEnd();
    }

    //Car Wheel 4
    int p666, x666, y666;
    int xc666 = s + 600, yc666 = 400, r666 = 20;
    p666 = 1 - r666;
    x666 = 0;
    y666 = r666;
    while (x666 <= y666)
    {
        if (p666 < 0)
        {
            x666 = x666 + 1;
            p666 = p666 + 2 * x666 + 1;
        }
        else
        {
            x666 = x666 + 1;
            y666 = y666 - 1;
            p666 = p666 + 2 * (x666 + 1) - 2 * (y666 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x666 + xc666, y666 + yc666);
        glVertex2i(x666 + xc666, -y666 + yc666);
        glVertex2i(-x666 + xc666, -y666 + yc666);
        glVertex2i(-x666 + xc666, y666 + yc666);
        glVertex2i(y666 + xc666, x666 + yc666);
        glVertex2i(y666 + xc666, -x666 + yc666);
        glVertex2i(-y666 + xc666, -x666 + yc666);
        glVertex2i(-y666 + xc666, x666 + yc666);
        glEnd();
    }

    //car right 2 purple
    glColor3ub(230, 230, 250);//Car 3
    glBegin(GL_POLYGON);
    glVertex2i(ss + 70, 400);
    glVertex2i(ss + 250, 400);
    glVertex2i(ss + 250, 430);
    glVertex2i(ss + 70, 430);
    if (ss < 1000) {

        ss = ss + 0.04;

    }

    else ss = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(0, 0, 0);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(ss + 90, 430);
    glVertex2i(ss + 240, 430);
    glVertex2i(ss + 220, 460);
    glVertex2i(ss + 130, 460);
    glEnd();

    int p5551, x5551, y5551;
    int xc5551 = ss + 110, yc5551 = 400, r5551 = 20;
    p5551 = 1 - r5551;
    x5551 = 0;
    y5551 = r5551;
    while (x5551 <= y5551)
    {
        if (p5551 < 0)
        {
            x5551 = x5551 + 1;
            p5551 = p5551 + 2 * x5551 + 1;
        }
        else
        {
            x5551 = x5551 + 1;
            y5551 = y5551 - 1;
            p5551 = p5551 + 2 * (x5551 + 1) - 2 * (y5551 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x5551 + xc5551, y5551 + yc5551);
        glVertex2i(x5551 + xc5551, -y5551 + yc5551);
        glVertex2i(-x5551 + xc5551, -y5551 + yc5551);
        glVertex2i(-x5551 + xc5551, y5551 + yc5551);
        glVertex2i(y5551 + xc5551, x5551 + yc5551);
        glVertex2i(y5551 + xc5551, -x5551 + yc5551);
        glVertex2i(-y5551 + xc5551, -x5551 + yc5551);
        glVertex2i(-y5551 + xc5551, x5551 + yc5551);
        glEnd();
    }

    //Car Wheel 4
    int p6661, x6661, y6661;
    int xc6661 = s + 190, yc6661 = 400, r6661 = 20;
    p6661 = 1 - r6661;
    x6661 = 0;
    y6661 = r6661;
    while (x6661 <= y6661)
    {
        if (p6661 < 0)
        {
            x6661 = x6661 + 1;
            p6661 = p6661 + 2 * x6661 + 1;
        }
        else
        {
            x6661 = x6661 + 1;
            y6661 = y6661 - 1;
            p6661 = p6661 + 2 * (x6661 + 1) - 2 * (y6661 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x6661 + xc6661, y6661 + yc6661);
        glVertex2i(x6661 + xc6661, -y6661 + yc6661);
        glVertex2i(-x6661 + xc6661, -y6661 + yc6661);
        glVertex2i(-x6661 + xc6661, y6661 + yc6661);
        glVertex2i(y6661 + xc6661, x6661 + yc6661);
        glVertex2i(y6661 + xc6661, -x6661 + yc6661);
        glVertex2i(-y6661 + xc6661, -x6661 + yc6661);
        glVertex2i(-y6661 + xc6661, x6661 + yc6661);
        glEnd();
    }


    /////////////////////////////////
    glColor3ub(255, 255, 102);//metro pillar 0
    glBegin(GL_POLYGON);
    glVertex2i(0, 300);
    glVertex2i(10, 300);
    glVertex2i(10, 400);
    glVertex2i(0, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 1
    glBegin(GL_POLYGON);
    glVertex2i(50, 300);
    glVertex2i(80, 300);
    glVertex2i(80, 400);
    glVertex2i(50, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 2
    glBegin(GL_POLYGON);
    glVertex2i(130, 300);
    glVertex2i(160, 300);
    glVertex2i(160, 400);
    glVertex2i(130, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 3
    glBegin(GL_POLYGON);
    glVertex2i(210, 300);
    glVertex2i(240, 300);
    glVertex2i(240, 400);
    glVertex2i(210, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 4
    glBegin(GL_POLYGON);
    glVertex2i(290, 300);
    glVertex2i(320, 300);
    glVertex2i(320, 400);
    glVertex2i(290, 400);
    glEnd();

    //break
    glColor3ub(255, 255, 102);//metro pillar 5
    glBegin(GL_POLYGON);
    glVertex2i(420, 300);
    glVertex2i(450, 300);
    glVertex2i(450, 400);
    glVertex2i(420, 400);
    glEnd();


    glColor3ub(255, 255, 102);//metro pillar 6
    glBegin(GL_POLYGON);
    glVertex2i(500, 300);
    glVertex2i(530, 300);
    glVertex2i(530, 400);
    glVertex2i(500, 400);
    glEnd();


    glColor3ub(255, 255, 102);//metro pillar 7
    glBegin(GL_POLYGON);
    glVertex2i(580, 300);
    glVertex2i(610, 300);
    glVertex2i(610, 400);
    glVertex2i(580, 400);
    glEnd();


    glColor3ub(255, 255, 102);//metro pillar 8
    glBegin(GL_POLYGON);
    glVertex2i(660, 300);
    glVertex2i(690, 300);
    glVertex2i(690, 400);
    glVertex2i(660, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 9
    glBegin(GL_POLYGON);
    glVertex2i(740, 300);
    glVertex2i(770, 300);
    glVertex2i(770, 400);
    glVertex2i(740, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 10
    glBegin(GL_POLYGON);
    glVertex2i(820, 300);
    glVertex2i(850, 300);
    glVertex2i(850, 400);
    glVertex2i(820, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 1
    glBegin(GL_POLYGON);
    glVertex2i(900, 300);
    glVertex2i(930, 300);
    glVertex2i(930, 400);
    glVertex2i(900, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro pillar 11
    glBegin(GL_POLYGON);
    glVertex2i(980, 300);
    glVertex2i(1000, 300);
    glVertex2i(1000, 400);
    glVertex2i(980, 400);
    glEnd();

    glColor3ub(255, 255, 102);//metro road
    glBegin(GL_POLYGON);
    glVertex2i(0, 400);
    glVertex2i(1000, 400);
    glVertex2i(1000, 420);
    glVertex2i(0, 420);
    glEnd();

    glColor3ub(0, 102, 0);//metro bogi 1
    glBegin(GL_POLYGON);
    glVertex2i(x, 410);
    glVertex2i(x + 165, 410);
    glVertex2i(x + 165, 450);
    glVertex2i(x, 450);

    if (x < 1000) {

        x = x + 0.1;

    }

    else x = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x, 415);
    glVertex2i(x + 165, 415);
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x, 445);
    glVertex2i(x + 165, 445);
    glEnd();

    glColor3ub(153, 0, 0);//metro bogi front
    glBegin(GL_TRIANGLES);
    glVertex2i(x, 410);
    glVertex2i(x, 450);
    glVertex2i(x - 30, 410);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 1 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(x + 10, 420);//150-1
    glVertex2i(x + 30, 420);//180-2
    glVertex2i(x + 30, 440);
    glVertex2i(x + 10, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 1 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(x + 50, 420);
    glVertex2i(x + 70, 420);
    glVertex2i(x + 70, 440);
    glVertex2i(x + 50, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 1 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(x + 90, 420);
    glVertex2i(x + 110, 420);
    glVertex2i(x + 110, 440);
    glVertex2i(x + 90, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 1 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(x + 130, 420);
    glVertex2i(x + 150, 420);
    glVertex2i(x + 150, 440);
    glVertex2i(x + 130, 440);


    glEnd();





    glColor3ub(0, 102, 0);//metro bogi 2
    glBegin(GL_POLYGON);
    glVertex2i(x + 200, 410);
    glVertex2i(x + 373, 410);
    glVertex2i(x + 375, 450);
    glVertex2i(x + 200, 450);


    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x + 200, 415);
    glVertex2i(x + 373, 415);
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x + 200, 445);
    glVertex2i(x + 373, 445);
    glEnd();

    glColor3ub(153, 0, 0);//metro bogi2 front
    glBegin(GL_TRIANGLES);
    glVertex2i(x + 200, 410);
    glVertex2i(x + 200, 450);
    glVertex2i(x + 170, 410);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 2 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(x + 210, 420);
    glVertex2i(x + 230, 420);
    glVertex2i(x + 230, 440);
    glVertex2i(x + 210, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 2 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(x + 250, 420);
    glVertex2i(x + 270, 420);
    glVertex2i(x + 270, 440);
    glVertex2i(x + 250, 440);
    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 2 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(x + 290, 420);
    glVertex2i(x + 310, 420);
    glVertex2i(x + 310, 440);
    glVertex2i(x + 290, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 2 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(x + 330, 420);
    glVertex2i(x + 350, 420);
    glVertex2i(x + 350, 440);
    glVertex2i(x + 330, 440);


    glEnd();


    glColor3ub(0, 102, 0);//metro bogi 3
    glBegin(GL_POLYGON);
    glVertex2i(x + 410, 410);
    glVertex2i(x + 585, 410);
    glVertex2i(x + 585, 450);
    glVertex2i(x + 410, 450);

    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x + 410, 415);
    glVertex2i(x + 585, 415);
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x + 410, 445);
    glVertex2i(x + 585, 445);
    glEnd();

    glColor3ub(153, 0, 0);//metro bogi3 front
    glBegin(GL_TRIANGLES);
    glVertex2i(x + 410, 410);
    glVertex2i(x + 410, 450);
    glVertex2i(x + 380, 410);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 3 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(x + 420, 420);
    glVertex2i(x + 440, 420);
    glVertex2i(x + 440, 440);
    glVertex2i(x + 420, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 3 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(x + 460, 420);
    glVertex2i(x + 480, 420);
    glVertex2i(x + 480, 440);
    glVertex2i(x + 460, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 3 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(x + 500, 420);
    glVertex2i(x + 520, 420);
    glVertex2i(x + 520, 440);
    glVertex2i(x + 500, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 3 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(x + 540, 420);
    glVertex2i(x + 560, 420);
    glVertex2i(x + 560, 440);
    glVertex2i(x + 540, 440);

    glEnd();

    glColor3ub(0, 102, 0);//metro bogi 4
    glBegin(GL_POLYGON);
    glVertex2i(x + 620, 410);
    glVertex2i(x + 795, 410);
    glVertex2i(x + 795, 450);
    glVertex2i(x + 620, 450);

    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x + 620, 415);
    glVertex2i(x + 795, 415);
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(x + 620, 445);
    glVertex2i(x + 795, 445);
    glEnd();

    glColor3ub(153, 0, 0);//metro bogi4 front
    glBegin(GL_TRIANGLES);
    glVertex2i(x + 620, 410);
    glVertex2i(x + 620, 450);
    glVertex2i(x + 590, 410);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 4 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(x + 630, 420);
    glVertex2i(x + 650, 420);
    glVertex2i(x + 650, 440);
    glVertex2i(x + 630, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 4 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(x + 670, 420);
    glVertex2i(x + 690, 420);
    glVertex2i(x + 690, 440);
    glVertex2i(x + 670, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 4 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(x + 710, 420);
    glVertex2i(x + 730, 420);
    glVertex2i(x + 730, 440);
    glVertex2i(x + 710, 440);

    glEnd();

    glColor3ub(255, 255, 102);//metro bogi 4 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(x + 750, 420);
    glVertex2i(x + 770, 420);
    glVertex2i(x + 770, 440);
    glVertex2i(x + 750, 440);

    glEnd();

    glColor3ub(153, 0, 0);//metro bogi front
    glBegin(GL_TRIANGLES);
    glVertex2i(x + 795, 410);
    glVertex2i(x + 795, 450);
    glVertex2i(x + 820, 410);
    glEnd();

    //metro sesh
////////////////////////////////////////////
      //car left right
    glColor3ub(172, 57, 57);//Car 3
    glBegin(GL_POLYGON);
    glVertex2i(cc + 470, 220);
    glVertex2i(cc + 650, 220);
    glVertex2i(cc + 650, 260);
    glVertex2i(cc + 470, 260);

    if (cc < 1000) {

        cc = cc - 0.05;

    }

    else cc = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(0, 25, 51);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(cc + 490, 260);
    glVertex2i(cc + 640, 260);
    glVertex2i(cc + 620, 290);
    glVertex2i(cc + 530, 290);
    glEnd();

    //Car Wheel 3
    int p55, x55, y55;
    int xc55 = cc + 510, yc55 = 220, r55 = 20;
    p55 = 1 - r55;
    x55 = 0;
    y55 = r55;
    while (x55 <= y55)
    {
        if (p55 < 0)
        {
            x55 = x55 + 1;
            p55 = p55 + 2 * x55 + 1;
        }
        else
        {
            x55 = x55 + 1;
            y55 = y55 - 1;
            p55 = p55 + 2 * (x55 + 1) - 2 * (y55 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x55 + xc55, y55 + yc55);
        glVertex2i(x55 + xc55, -y55 + yc55);
        glVertex2i(-x55 + xc55, -y55 + yc55);
        glVertex2i(-x55 + xc55, y55 + yc55);
        glVertex2i(y55 + xc55, x55 + yc55);
        glVertex2i(y55 + xc55, -x55 + yc55);
        glVertex2i(-y55 + xc55, -x55 + yc55);
        glVertex2i(-y55 + xc55, x55 + yc55);
        glEnd();
    }

    int p55z, x55z, y55z;
    int xc55z = cc + 510, yc55z = 220, r55z = 9;
    p55z = 1 - r55z;
    x55z = 0;
    y55z = r55z;
    while (x55z <= y55z)
    {
        if (p55z < 0)
        {
            x55z = x55z + 1;
            p55z = p55z + 2 * x55z + 1;
        }
        else
        {
            x55z = x55z + 1;
            y55z = y55z - 1;
            p55z = p55z + 2 * (x55z + 1) - 2 * (y55z + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x55z + xc55z, y55z + yc55z);
        glVertex2i(x55z + xc55z, -y55z + yc55z);
        glVertex2i(-x55z + xc55z, -y55z + yc55z);
        glVertex2i(-x55z + xc55z, y55z + yc55z);
        glVertex2i(y55z + xc55z, x55z + yc55z);
        glVertex2i(y55z + xc55z, -x55z + yc55z);
        glVertex2i(-y55z + xc55z, -x55z + yc55z);
        glVertex2i(-y55z + xc55z, x55z + yc55z);
        glEnd();
    }
    //weel 
        //Car Wheel 4
    int p66, x66, y66;
    int xc66 = cc + 600, yc66 = 220, r66 = 20;
    p66 = 1 - r66;
    x66 = 0;
    y66 = r66;
    while (x66 <= y66)
    {
        if (p66 < 0)
        {
            x66 = x66 + 1;
            p66 = p66 + 2 * x66 + 1;
        }
        else
        {
            x66 = x66 + 1;
            y66 = y66 - 1;
            p66 = p66 + 2 * (x66 + 1) - 2 * (y66 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x66 + xc66, y66 + yc66);
        glVertex2i(x66 + xc66, -y66 + yc66);
        glVertex2i(-x66 + xc66, -y66 + yc66);
        glVertex2i(-x66 + xc66, y66 + yc66);
        glVertex2i(y66 + xc66, x66 + yc66);
        glVertex2i(y66 + xc66, -x66 + yc66);
        glVertex2i(-y66 + xc66, -x66 + yc66);
        glVertex2i(-y66 + xc66, x66 + yc66);
        glEnd();
    }
    int p66r, x66r, y66r;
    int xc66r = cc + 600, yc66r = 220, r66r = 10;
    p66r = 1 - r66r;
    x66r = 0;
    y66r = r66r;
    while (x66r <= y66r)
    {
        if (p66r < 0)
        {
            x66r = x66r + 1;
            p66r = p66r + 2 * x66r + 1;
        }
        else
        {
            x66r = x66r + 1;
            y66r = y66r - 1;
            p66r = p66r + 2 * (x66r + 1) - 2 * (y66r + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x66r + xc66r, y66r + yc66r);
        glVertex2i(x66r + xc66r, -y66r + yc66r);
        glVertex2i(-x66r + xc66r, -y66r + yc66r);
        glVertex2i(-x66r + xc66r, y66r + yc66r);
        glVertex2i(y66r + xc66r, x66r + yc66r);
        glVertex2i(y66r + xc66r, -x66r + yc66r);
        glVertex2i(-y66r + xc66r, -x66r + yc66r);
        glVertex2i(-y66r + xc66r, x66r + yc66r);
        glEnd();
    }
    //wheel
    glColor3ub(255, 255, 255);//Car Middle Line
    glBegin(GL_LINE_LOOP);
    glVertex2i(cc + 570, 220);
    glVertex2i(cc + 570, 290);
    glEnd();




    //car left right white black

    glColor3ub(255, 255, 255);//Car 3
    glBegin(GL_POLYGON);
    glVertex2i(m + 750, 220);
    glVertex2i(m + 930, 220);
    glVertex2i(m + 930, 260);
    glVertex2i(m + 750, 260);
    if (m < 1000) {

        m = m - 0.05;

    }

    else m = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(0, 0, 0);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(m + 770, 260);
    glVertex2i(m + 920, 260);
    glVertex2i(m + 900, 290);
    glVertex2i(m + 810, 290);
    glEnd();

    //Car Wheel 3
    int p552, x552, y552;
    int xc552 = m + 790, yc552 = 220, r552 = 20;
    p552 = 1 - r552;
    x552 = 0;
    y552 = r552;
    while (x552 <= y552)
    {
        if (p552 < 0)
        {
            x552 = x552 + 1;
            p552 = p552 + 2 * x552 + 1;
        }
        else
        {
            x552 = x552 + 1;
            y552 = y552 - 1;
            p552 = p552 + 2 * (x552 + 1) - 2 * (y552 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x552 + xc552, y552 + yc552);
        glVertex2i(x552 + xc552, -y552 + yc552);
        glVertex2i(-x552 + xc552, -y552 + yc552);
        glVertex2i(-x552 + xc552, y552 + yc552);
        glVertex2i(y552 + xc552, x552 + yc552);
        glVertex2i(y552 + xc552, -x552 + yc552);
        glVertex2i(-y552 + xc552, -x552 + yc552);
        glVertex2i(-y552 + xc552, x552 + yc552);
        glEnd();
    }

    //Car Wheel 3
    int p552x, x552x, y552x;
    int xc552x = m + 790, yc552x = 220, r552x = 9;
    p552x = 1 - r552x;
    x552x = 0;
    y552x = r552x;
    while (x552x <= y552x)
    {
        if (p552x < 0)
        {
            x552x = x552x + 1;
            p552x = p552x + 2 * x552x + 1;
        }
        else
        {
            x552x = x552x + 1;
            y552x = y552x - 1;
            p552x = p552x + 2 * (x552x + 1) - 2 * (y552x + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x552x + xc552x, y552x + yc552x);
        glVertex2i(x552x + xc552x, -y552x + yc552x);
        glVertex2i(-x552x + xc552x, -y552x + yc552x);
        glVertex2i(-x552x + xc552x, y552x + yc552x);
        glVertex2i(y552x + xc552x, x552x + yc552x);
        glVertex2i(y552x + xc552x, -x552x + yc552x);
        glVertex2i(-y552x + xc552x, -x552x + yc552x);
        glVertex2i(-y552x + xc552x, x552x + yc552x);
        glEnd();
    }
    //Car Wheel 4
    int p662, x662, y662;
    int xc662 = cc + 880, yc662 = 220, r662 = 20;
    p662 = 1 - r662;
    x662 = 0;
    y662 = r662;
    while (x662 <= y662)
    {
        if (p662 < 0)
        {
            x662 = x662 + 1;
            p662 = p662 + 2 * x662 + 1;
        }
        else
        {
            x662 = x662 + 1;
            y662 = y662 - 1;
            p662 = p662 + 2 * (x662 + 1) - 2 * (y662 + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x662 + xc662, y662 + yc662);
        glVertex2i(x662 + xc662, -y662 + yc662);
        glVertex2i(-x662 + xc662, -y662 + yc662);
        glVertex2i(-x662 + xc662, y662 + yc662);
        glVertex2i(y662 + xc662, x662 + yc662);
        glVertex2i(y662 + xc662, -x662 + yc662);
        glVertex2i(-y662 + xc662, -x662 + yc662);
        glVertex2i(-y662 + xc662, x662 + yc662);
        glEnd();
    }

    int p662t, x662t, y662t;
    int xc662t = cc + 880, yc662t = 220, r662t = 10;
    p662t = 1 - r662t;
    x662t = 0;
    y662t = r662t;
    while (x662t <= y662t)
    {
        if (p662t < 0)
        {
            x662t = x662t + 1;
            p662t = p662t + 2 * x662t + 1;
        }
        else
        {
            x662t = x662t + 1;
            y662t = y662t - 1;
            p662t = p662t + 2 * (x662t + 1) - 2 * (y662t + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x662t + xc662t, y662t + yc662t);
        glVertex2i(x662t + xc662t, -y662t + yc662t);
        glVertex2i(-x662t + xc662t, -y662t + yc662t);
        glVertex2i(-x662t + xc662t, y662t + yc662t);
        glVertex2i(y662t + xc662t, x662t + yc662t);
        glVertex2i(y662t + xc662t, -x662t + yc662t);
        glVertex2i(-y662t + xc662t, -x662t + yc662t);
        glVertex2i(-y662t + xc662t, x662t + yc662t);
        glEnd();
    }

    glColor3ub(255, 255, 255);//Car Middle Line
    glBegin(GL_LINE_LOOP);
    glVertex2i(m + 850, 220);
    glVertex2i(m + 850, 290);
    glEnd();

    //car left right samner diker gari
    glColor3ub(0, 0, 102);//Car 3
    glBegin(GL_POLYGON);
    glVertex2i(g + 270, 220);
    glVertex2i(g + 450, 220);
    glVertex2i(g + 450, 260);
    glVertex2i(g + 270, 260);

    if (g < 1000) {

        g = g - 0.05;

    }

    else cc = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(255, 255, 255);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(g + 290, 260);
    glVertex2i(g + 440, 260);
    glVertex2i(g + 420, 290);
    glVertex2i(g + 330, 290);
    glEnd();

    //Car Wheel 3
    int p55d, x55d, y55d;
    int xc55d = g + 310, yc55d = 220, r55d = 20;
    p55d = 1 - r55d;
    x55d = 0;
    y55d = r55d;
    while (x55d <= y55d)
    {
        if (p55d < 0)
        {
            x55d = x55d + 1;
            p55d = p55d + 2 * x55d + 1;
        }
        else
        {
            x55d = x55d + 1;
            y55d = y55d - 1;
            p55d = p55d + 2 * (x55d + 1) - 2 * (y55d + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x55d + xc55d, y55d + yc55d);
        glVertex2i(x55d + xc55d, -y55d + yc55d);
        glVertex2i(-x55d + xc55d, -y55d + yc55d);
        glVertex2i(-x55d + xc55d, y55d + yc55d);
        glVertex2i(y55d + xc55d, x55d + yc55d);
        glVertex2i(y55d + xc55d, -x55d + yc55d);
        glVertex2i(-y55d + xc55d, -x55d + yc55d);
        glVertex2i(-y55d + xc55d, x55d + yc55d);
        glEnd();
    }

    int p55zd, x55zd, y55zd;
    int xc55zd = g + 310, yc55zd = 220, r55zd = 9;
    p55zd = 1 - r55zd;
    x55zd = 0;
    y55zd = r55zd;
    while (x55zd <= y55zd)
    {
        if (p55zd < 0)
        {
            x55zd = x55zd + 1;
            p55zd = p55zd + 2 * x55zd + 1;
        }
        else
        {
            x55zd = x55zd + 1;
            y55zd = y55zd - 1;
            p55zd = p55zd + 2 * (x55zd + 1) - 2 * (y55zd + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x55zd + xc55zd, y55zd + yc55zd);
        glVertex2i(x55zd + xc55zd, -y55zd + yc55zd);
        glVertex2i(-x55zd + xc55zd, -y55zd + yc55zd);
        glVertex2i(-x55zd + xc55zd, y55zd + yc55zd);
        glVertex2i(y55zd + xc55zd, x55zd + yc55zd);
        glVertex2i(y55zd + xc55zd, -x55zd + yc55zd);
        glVertex2i(-y55zd + xc55zd, -x55zd + yc55zd);
        glVertex2i(-y55zd + xc55zd, x55zd + yc55zd);
        glEnd();
    }

    //weel 
      //Car Wheel 4
    int p66f, x66f, y66f;
    int xc66f = g + 400, yc66f = 220, r66f = 20;
    p66f = 1 - r66f;
    x66f = 0;
    y66f = r66f;
    while (x66f <= y66f)
    {
        if (p66f < 0)
        {
            x66f = x66f + 1;
            p66f = p66f + 2 * x66f + 1;
        }
        else
        {
            x66f = x66f + 1;
            y66f = y66f - 1;
            p66f = p66f + 2 * (x66f + 1) - 2 * (y66f + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x66f + xc66f, y66f + yc66f);
        glVertex2i(x66f + xc66f, -y66f + yc66f);
        glVertex2i(-x66f + xc66f, -y66f + yc66f);
        glVertex2i(-x66f + xc66f, y66f + yc66f);
        glVertex2i(y66f + xc66f, x66f + yc66f);
        glVertex2i(y66f + xc66f, -x66f + yc66f);
        glVertex2i(-y66f + xc66f, -x66f + yc66f);
        glVertex2i(-y66f + xc66f, x66f + yc66f);
        glEnd();
    }
    int p66rf, x66rf, y66rf;
    int xc66rf = cc + 400, yc66rf = 220, r66rf = 10;
    p66rf = 1 - r66rf;
    x66rf = 0;
    y66rf = r66rf;
    while (x66rf <= y66rf)
    {
        if (p66rf < 0)
        {
            x66rf = x66rf + 1;
            p66rf = p66rf + 2 * x66rf + 1;
        }
        else
        {
            x66rf = x66rf + 1;
            y66rf = y66rf - 1;
            p66rf = p66rf + 2 * (x66rf + 1) - 2 * (y66rf + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x66rf + xc66rf, y66rf + yc66rf);
        glVertex2i(x66rf + xc66rf, -y66rf + yc66rf);
        glVertex2i(-x66rf + xc66rf, -y66rf + yc66rf);
        glVertex2i(-x66rf + xc66rf, y66rf + yc66rf);
        glVertex2i(y66rf + xc66rf, x66rf + yc66rf);
        glVertex2i(y66rf + xc66rf, -x66rf + yc66rf);
        glVertex2i(-y66rf + xc66rf, -x66rf + yc66rf);
        glVertex2i(-y66rf + xc66rf, x66rf + yc66rf);
        glEnd();
    }
    //wheel
    glColor3ub(0, 0, 0);//Car Middle Line
    glBegin(GL_LINE_LOOP);
    glVertex2i(cc + 370, 220);
    glVertex2i(cc + 370, 290);
    glEnd();


    //CAR LEFT left-white noa.
    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(c + 70, 110);
    glVertex2i(c + 230, 110);
    glVertex2i(c + 230, 210);
    glVertex2i(c + 70, 210);

    if (c < 1000) {

        c = c + 0.5;

    }

    else c = 0;

    glutPostRedisplay();
    glEnd();


    glColor3ub(255, 255, 255);
    glBegin(GL_POLYGON);
    glVertex2i(c + 230, 110);
    glVertex2i(c + 260, 110);
    glVertex2i(c + 260, 180);
    glVertex2i(c + 230, 190);
    glEnd();
    //weel 1 car 1
    int p3, x3, y3;
    int xc3 = c + 120, yc3 = 110, r3 = 20;
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

    int p3g, x3g, y3g;
    int xc3g = c + 120, yc3g = 110, r3g = 10;
    p3g = 1 - r3g;
    x3g = 0;
    y3g = r3g;
    while (x3g <= y3g)
    {
        if (p3g < 0)
        {
            x3g = x3g + 1;
            p3g = p3g + 2 * x3g + 1;
        }
        else
        {
            x3g = x3g + 1;
            y3g = y3g - 1;
            p3g = p3g + 2 * (x3g + 1) - 2 * (y3g + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x3g + xc3g, y3g + yc3g);
        glVertex2i(x3g + xc3g, -y3g + yc3g);
        glVertex2i(-x3g + xc3g, -y3g + yc3g);
        glVertex2i(-x3g + xc3g, y3g + yc3g);
        glVertex2i(y3g + xc3g, x3g + yc3g);
        glVertex2i(y3g + xc3g, -x3g + yc3g);
        glVertex2i(-y3g + xc3g, -x3g + yc3g);
        glVertex2i(-y3g + xc3g, x3g + yc3g);
        glEnd();
    }

    //Car Wheel 2
    int p4, x4, y4;
    int xc4 = c + 210, yc4 = 110, r4 = 20;
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

    int p45, x45, y45;
    int xc45 = c + 210, yc45 = 110, r45 = 10;
    p45 = 1 - r45;
    x45 = 0;
    y45 = r45;
    while (x45 <= y45)
    {
        if (p45 < 0)
        {
            x45 = x45 + 1;
            p45 = p45 + 2 * x45 + 1;
        }
        else
        {
            x45 = x45 + 1;
            y45 = y45 - 1;
            p45 = p45 + 2 * (x45 + 1) - 2 * (y45 + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x45 + xc45, y45 + yc45);
        glVertex2i(x45 + xc45, -y45 + yc45);
        glVertex2i(-x45 + xc45, -y45 + yc45);
        glVertex2i(-x45 + xc45, y45 + yc45);
        glVertex2i(y45 + xc45, x45 + yc45);
        glVertex2i(y45 + xc45, -x45 + yc45);
        glVertex2i(-y45 + xc45, -x45 + yc45);
        glVertex2i(-y45 + xc45, x45 + yc45);
        glEnd();
    }

    glColor3ub(0, 0, 0);//CAR Glass
    glBegin(GL_POLYGON);
    glVertex2i(c + 230, 150);
    glVertex2i(c + 260, 150);
    glVertex2i(c + 260, 180);
    glVertex2i(c + 230, 180);
    glEnd();

    //car left left small car 1
    glColor3ub(153, 76, 0);
    glBegin(GL_POLYGON);
    glVertex2i(c + 270, 110);
    glVertex2i(c + 370, 110);
    glVertex2i(c + 370, 150);
    glVertex2i(c + 270, 150);
    glEnd();

    glColor3ub(0, 25, 51);//Car 2 UP
    glBegin(GL_POLYGON);
    glVertex2i(c + 280, 150);
    glVertex2i(c + 300, 180);
    glVertex2i(c + 340, 180);
    glVertex2i(c + 360, 150);
    glEnd();

    //Car Wheel 3
    int p5, x5, y5;
    int xc5 = c + 300, yc5 = 110, r5 = 15;
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

    int p56, x56, y56;
    int xc56 = c + 300, yc56 = 110, r56 = 7;
    p56 = 1 - r56;
    x56 = 0;
    y56 = r56;
    while (x56 <= y56)
    {
        if (p56 < 0)
        {
            x56 = x56 + 1;
            p56 = p56 + 2 * x56 + 1;
        }
        else
        {
            x56 = x56 + 1;
            y56 = y56 - 1;
            p56 = p56 + 2 * (x56 + 1) - 2 * (y56 + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x56 + xc56, y56 + yc56);
        glVertex2i(x56 + xc56, -y56 + yc56);
        glVertex2i(-x56 + xc56, -y56 + yc56);
        glVertex2i(-x56 + xc56, y56 + yc56);
        glVertex2i(y56 + xc56, x56 + yc56);
        glVertex2i(y56 + xc56, -x56 + yc56);
        glVertex2i(-y56 + xc56, -x56 + yc56);
        glVertex2i(-y56 + xc56, x56 + yc56);
        glEnd();
    }


    //Car Wheel 4
    int p6, x6, y6;
    int xc6 = c + 350, yc6 = 110, r6 = 15;
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

    int p63, x63, y63;
    int xc63 = c + 350, yc63 = 110, r63 = 7;
    p63 = 1 - r63;
    x63 = 0;
    y63 = r63;
    while (x63 <= y63)
    {
        if (p63 < 0)
        {
            x63 = x63 + 1;
            p63 = p63 + 2 * x63 + 1;
        }
        else
        {
            x63 = x63 + 1;
            y63 = y63 - 1;
            p63 = p63 + 2 * (x63 + 1) - 2 * (y63 + 1);
        }
        glColor3ub(128, 128, 128);
        glBegin(GL_POLYGON);
        glVertex2i(x63 + xc63, y63 + yc63);
        glVertex2i(x63 + xc63, -y63 + yc63);
        glVertex2i(-x63 + xc63, -y63 + yc63);
        glVertex2i(-x63 + xc63, y63 + yc63);
        glVertex2i(y63 + xc63, x63 + yc63);
        glVertex2i(y63 + xc63, -x63 + yc63);
        glVertex2i(-y63 + xc63, -x63 + yc63);
        glVertex2i(-y63 + xc63, x63 + yc63);
        glEnd();
    }

    glColor3ub(255, 255, 255);//Car Middle Line
    glBegin(GL_LINE_LOOP);
    glVertex2i(c + 325, 110);
    glVertex2i(c + 325, 180);
    glEnd();

    /////////////////////////////////////////////////
        //Moon Shape
    int p, x, y;
    int xc = 850, yc = 950, r = 40;
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
        glColor3ub(255, 255, 0);
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

    //megh 1
    int pd, xd, yd;
    int xcd = 100, ycd = 900, rd = 40;
    pd = 1 - rd;
    xd = 0;
    yd = rd;
    while (xd <= yd)
    {
        if (pd < 0)
        {
            xd = xd + 1;
            pd = pd + 2 * xd + 1;
        }
        else
        {
            xd = xd + 1;
            yd = yd - 1;
            pd = pd + 2 * (xd + 1) - 2 * (yd + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xd + xcd, yd + ycd);
        glVertex2i(xd + xcd, -yd + ycd);
        glVertex2i(-xd + xcd, -yd + ycd);
        glVertex2i(-xd + xcd, yd + ycd);
        glVertex2i(yd + xcd, xd + ycd);
        glVertex2i(yd + xcd, -xd + ycd);
        glVertex2i(-yd + xcd, -xd + ycd);
        glVertex2i(-yd + xcd, xd + ycd);
        glEnd();
    }

    //megh 2
    int pdi, xdi, ydi;
    int xcdi = 140, ycdi = 920, rdi = 40;
    pdi = 1 - rdi;
    xdi = 0;
    ydi = rdi;
    while (xdi <= ydi)
    {
        if (pdi < 0)
        {
            xdi = xdi + 1;
            pdi = pdi + 2 * xdi + 1;
        }
        else
        {
            xdi = xdi + 1;
            ydi = ydi - 1;
            pdi = pdi + 2 * (xdi + 1) - 2 * (ydi + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xdi + xcdi, ydi + ycdi);
        glVertex2i(xdi + xcdi, -ydi + ycdi);
        glVertex2i(-xdi + xcdi, -ydi + ycdi);
        glVertex2i(-xdi + xcdi, ydi + ycdi);
        glVertex2i(ydi + xcdi, xdi + ycdi);
        glVertex2i(ydi + xcdi, -xdi + ycdi);
        glVertex2i(-ydi + xcdi, -xdi + ycdi);
        glVertex2i(-ydi + xcdi, xdi + ycdi);
        glEnd();
    }

    //megh 3
    int pds, xds, yds;
    int xcds = 180, ycds = 900, rds = 40;
    pds = 1 - rds;
    xds = 0;
    yds = rds;
    while (xds <= yds)
    {
        if (pds < 0)
        {
            xds = xds + 1;
            pds = pds + 2 * xds + 1;
        }
        else
        {
            xds = xds + 1;
            yds = yds - 1;
            pds = pds + 2 * (xds + 1) - 2 * (yds + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xds + xcds, yds + ycds);
        glVertex2i(xds + xcds, -yds + ycds);
        glVertex2i(-xds + xcds, -yds + ycds);
        glVertex2i(-xds + xcds, yds + ycds);
        glVertex2i(yds + xcds, xds + ycds);
        glVertex2i(yds + xcds, -xds + ycds);
        glVertex2i(-yds + xcds, -xds + ycds);
        glVertex2i(-yds + xcds, xds + ycds);
        glEnd();
    }
    //megh 4
    int pdi2, xdi2, ydi2;
    int xcdi2 = 140, ycdi2 = 880, rdi2 = 40;
    pdi2 = 1 - rdi2;
    xdi2 = 0;
    ydi2 = rdi2;
    while (xdi2 <= ydi2)
    {
        if (pdi2 < 0)
        {
            xdi2 = xdi2 + 1;
            pdi2 = pdi2 + 2 * xdi2 + 1;
        }
        else
        {
            xdi2 = xdi2 + 1;
            ydi2 = ydi2 - 1;
            pdi2 = pdi2 + 2 * (xdi2 + 1) - 2 * (ydi2 + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xdi2 + xcdi2, ydi2 + ycdi2);
        glVertex2i(xdi2 + xcdi2, -ydi2 + ycdi2);
        glVertex2i(-xdi2 + xcdi2, -ydi2 + ycdi2);
        glVertex2i(-xdi2 + xcdi2, ydi2 + ycdi2);
        glVertex2i(ydi2 + xcdi2, xdi2 + ycdi2);
        glVertex2i(ydi2 + xcdi2, -xdi2 + ycdi2);
        glVertex2i(-ydi2 + xcdi2, -xdi2 + ycdi2);
        glVertex2i(-ydi2 + xcdi2, xdi2 + ycdi2);
        glEnd();
    }


    //megh 22222222222222222

    //megh 1
    int pd9, xd9, yd9;
    int xcd9 = 500, ycd9 = 900, rd9 = 40;
    pd9 = 1 - rd9;
    xd9 = 0;
    yd9 = rd9;
    while (xd9 <= yd9)
    {
        if (pd9 < 0)
        {
            xd9 = xd9 + 1;
            pd9 = pd9 + 2 * xd9 + 1;
        }
        else
        {
            xd9 = xd9 + 1;
            yd9 = yd9 - 1;
            pd9 = pd9 + 2 * (xd9 + 1) - 2 * (yd9 + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xd9 + xcd9, yd9 + ycd9);
        glVertex2i(xd9 + xcd9, -yd9 + ycd9);
        glVertex2i(-xd9 + xcd9, -yd9 + ycd9);
        glVertex2i(-xd9 + xcd9, yd9 + ycd9);
        glVertex2i(yd9 + xcd9, xd9 + ycd9);
        glVertex2i(yd9 + xcd9, -xd9 + ycd9);
        glVertex2i(-yd9 + xcd9, -xd9 + ycd9);
        glVertex2i(-yd9 + xcd9, xd9 + ycd9);
        glEnd();
    }

    //megh 2
    int pdi0, xdi0, ydi0;
    int xcdi0 = 540, ycdi0 = 920, rdi0 = 40;
    pdi0 = 1 - rdi0;
    xdi0 = 0;
    ydi0 = rdi0;
    while (xdi0 <= ydi0)
    {
        if (pdi0 < 0)
        {
            xdi0 = xdi0 + 1;
            pdi0 = pdi0 + 2 * xdi0 + 1;
        }
        else
        {
            xdi0 = xdi0 + 1;
            ydi0 = ydi0 - 1;
            pdi0 = pdi0 + 2 * (xdi0 + 1) - 2 * (ydi0 + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xdi0 + xcdi0, ydi0 + ycdi0);
        glVertex2i(xdi0 + xcdi0, -ydi0 + ycdi0);
        glVertex2i(-xdi0 + xcdi0, -ydi0 + ycdi0);
        glVertex2i(-xdi0 + xcdi0, ydi0 + ycdi0);
        glVertex2i(ydi0 + xcdi0, xdi0 + ycdi0);
        glVertex2i(ydi0 + xcdi0, -xdi0 + ycdi0);
        glVertex2i(-ydi0 + xcdi0, -xdi0 + ycdi0);
        glVertex2i(-ydi0 + xcdi0, xdi0 + ycdi0);
        glEnd();
    }

    //megh 3
    int pds0, xds0, yds0;
    int xcds0 = 580, ycds0 = 900, rds0 = 40;
    pds0 = 1 - rds0;
    xds0 = 0;
    yds0 = rds0;
    while (xds0 <= yds0)
    {
        if (pds0 < 0)
        {
            xds0 = xds0 + 1;
            pds0 = pds0 + 2 * xds0 + 1;
        }
        else
        {
            xds0 = xds0 + 1;
            yds0 = yds0 - 1;
            pds0 = pds0 + 2 * (xds0 + 1) - 2 * (yds0 + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xds0 + xcds0, yds0 + ycds0);
        glVertex2i(xds0 + xcds0, -yds0 + ycds0);
        glVertex2i(-xds0 + xcds0, -yds0 + ycds0);
        glVertex2i(-xds0 + xcds0, yds0 + ycds0);
        glVertex2i(yds0 + xcds0, xds0 + ycds0);
        glVertex2i(yds0 + xcds0, -xds0 + ycds0);
        glVertex2i(-yds0 + xcds0, -xds0 + ycds0);
        glVertex2i(-yds0 + xcds0, xds0 + ycds0);
        glEnd();
    }
    //megh 4
    int pdi27, xdi27, ydi27;
    int xcdi27 = 540, ycdi27 = 880, rdi27 = 40;
    pdi27 = 1 - rdi27;
    xdi27 = 0;
    ydi27 = rdi27;
    while (xdi27 <= ydi27)
    {
        if (pdi27 < 0)
        {
            xdi27 = xdi27 + 1;
            pdi27 = pdi27 + 2 * xdi27 + 1;
        }
        else
        {
            xdi27 = xdi27 + 1;
            ydi27 = ydi27 - 1;
            pdi27 = pdi27 + 2 * (xdi27 + 1) - 2 * (ydi27 + 1);
        }
        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
        glVertex2i(xdi27 + xcdi27, ydi27 + ycdi27);
        glVertex2i(xdi27 + xcdi27, -ydi27 + ycdi27);
        glVertex2i(-xdi27 + xcdi27, -ydi27 + ycdi27);
        glVertex2i(-xdi27 + xcdi27, ydi27 + ycdi27);
        glVertex2i(ydi27 + xcdi27, xdi27 + ycdi27);
        glVertex2i(ydi27 + xcdi27, -xdi27 + ycdi27);
        glVertex2i(-ydi27 + xcdi27, -xdi27 + ycdi27);
        glVertex2i(-ydi27 + xcdi27, xdi27 + ycdi27);
        glEnd();
    }
    ////////////////////////////////


    glColor3ub(255, 0, 0);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(1, 500);
    glVertex2i(100, 500);
    glVertex2i(100, 800);
    glVertex2i(1, 800);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(50, 500);
    glVertex2i(50, 800);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(1, 790);
    glVertex2i(100, 790);
    glEnd();

    glColor3ub(32, 32, 32);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(10, 750);
    glVertex2i(40, 750);
    glVertex2i(40, 780);
    glVertex2i(10, 780);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(1, 740);
    glVertex2i(100, 740);
    glEnd();

    glColor3ub(255, 255, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(10, 700);
    glVertex2i(40, 700);
    glVertex2i(40, 730);
    glVertex2i(10, 730);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(1, 690);
    glVertex2i(100, 690);
    glEnd();

    glColor3ub(255, 255, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(10, 650);
    glVertex2i(40, 650);
    glVertex2i(40, 680);
    glVertex2i(10, 680);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(1, 640);
    glVertex2i(100, 640);
    glEnd();

    glColor3ub(32, 32, 32);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(10, 600);
    glVertex2i(40, 600);
    glVertex2i(40, 630);
    glVertex2i(10, 630);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(1, 590);
    glVertex2i(100, 590);
    glEnd();

    glColor3ub(255, 255, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(10, 550);
    glVertex2i(40, 550);
    glVertex2i(40, 580);
    glVertex2i(10, 580);
    glEnd();

    glColor3ub(255, 255, 255);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(1, 545);
    glVertex2i(100, 545);
    glEnd();

    glColor3ub(32, 32, 32);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(10, 505);
    glVertex2i(40, 505);
    glVertex2i(40, 535);
    glVertex2i(10, 535);
    glEnd();
    //window right side

    glColor3ub(255, 255, 0);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(60, 750);
    glVertex2i(90, 750);
    glVertex2i(90, 780);
    glVertex2i(60, 780);
    glEnd();

    glColor3ub(32, 32, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(60, 700);
    glVertex2i(90, 700);
    glVertex2i(90, 730);
    glVertex2i(60, 730);
    glEnd();

    glColor3ub(255, 255, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(60, 650);
    glVertex2i(90, 650);
    glVertex2i(90, 680);
    glVertex2i(60, 680);
    glEnd();

    glColor3ub(255, 255, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(60, 600);
    glVertex2i(90, 600);
    glVertex2i(90, 630);
    glVertex2i(60, 630);
    glEnd();

    glColor3ub(255, 255, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(60, 550);
    glVertex2i(90, 550);
    glVertex2i(90, 580);
    glVertex2i(60, 580);
    glEnd();

    glColor3ub(32, 32, 32);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(60, 505);
    glVertex2i(90, 505);
    glVertex2i(90, 535);
    glVertex2i(60, 535);
    glEnd();

    //building 2

    glColor3ub(255, 51, 255);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(103, 500);
    glVertex2i(213, 500);
    glVertex2i(213, 800);
    glVertex2i(103, 800);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(103, 800);
    glVertex2i(213, 800);
    glVertex2i(193, 830);
    glVertex2i(133, 830);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(113, 750);
    glVertex2i(143, 750);
    glVertex2i(143, 780);
    glVertex2i(113, 780);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(113, 700);
    glVertex2i(143, 700);
    glVertex2i(143, 730);
    glVertex2i(113, 730);
    glEnd();


    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(113, 650);
    glVertex2i(143, 650);
    glVertex2i(143, 680);
    glVertex2i(113, 680);
    glEnd();


    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(113, 600);
    glVertex2i(143, 600);
    glVertex2i(143, 630);
    glVertex2i(113, 630);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(113, 550);
    glVertex2i(143, 550);
    glVertex2i(143, 580);
    glVertex2i(113, 580);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(113, 505);
    glVertex2i(143, 505);
    glVertex2i(143, 535);
    glVertex2i(113, 535);
    glEnd();
    //window right side

    glColor3ub(255, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(173, 750);
    glVertex2i(203, 750);
    glVertex2i(203, 780);
    glVertex2i(173, 780);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(173, 700);
    glVertex2i(203, 700);
    glVertex2i(203, 730);
    glVertex2i(173, 730);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(173, 650);
    glVertex2i(203, 650);
    glVertex2i(203, 680);
    glVertex2i(173, 680);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(173, 600);
    glVertex2i(203, 600);
    glVertex2i(203, 630);
    glVertex2i(173, 630);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(173, 550);
    glVertex2i(203, 550);
    glVertex2i(203, 580);
    glVertex2i(173, 580);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(173, 505);
    glVertex2i(203, 505);
    glVertex2i(203, 535);
    glVertex2i(173, 535);
    glEnd();

    //building 3

    glColor3ub(0, 0, 102);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(216, 500);
    glVertex2i(366, 500);
    glVertex2i(366, 850);
    glVertex2i(216, 850);
    glEnd();



    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 830);
    glVertex2i(366, 830);
    glEnd();



    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 810);
    glVertex2i(366, 810);
    glEnd();


    //
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 790);
    glVertex2i(366, 790);
    glEnd();


    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 770);
    glVertex2i(366, 770);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 750);
    glVertex2i(366, 750);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 730);
    glVertex2i(366, 730);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 710);
    glVertex2i(366, 710);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 690);
    glVertex2i(366, 690);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 670);
    glVertex2i(366, 670);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 650);
    glVertex2i(366, 650);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 630);
    glVertex2i(366, 630);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 610);
    glVertex2i(366, 610);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 590);
    glVertex2i(366, 590);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 570);
    glVertex2i(366, 570);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 550);
    glVertex2i(366, 550);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 530);
    glVertex2i(366, 530);
    glEnd();
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(216, 510);
    glVertex2i(366, 510);
    glEnd();


    //building 4
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(380, 500);
    glVertex2i(410, 500);
    glVertex2i(410, 800);
    glVertex2i(380, 800);
    glEnd();

    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(385, 800);
    glVertex2i(405, 800);
    glVertex2i(405, 810);
    glVertex2i(385, 810);
    glEnd();

    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(375, 810);
    glVertex2i(415, 810);
    glVertex2i(415, 815);
    glVertex2i(375, 815);
    glEnd();

    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(390, 815);
    glVertex2i(390, 900);
    glEnd();
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(391, 815);
    glVertex2i(391, 900);
    glEnd();

    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(390, 900);
    glVertex2i(400, 900);
    glEnd();
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(390, 901);
    glVertex2i(400, 901);
    glEnd();

    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(400, 815);
    glVertex2i(400, 900);
    glEnd();
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(401, 815);
    glVertex2i(401, 900);
    glEnd();

    //building 5
    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(420, 500);
    glVertex2i(470, 500);
    glVertex2i(470, 805);
    glVertex2i(420, 805);
    glEnd();

    glColor3ub(178, 102, 255);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(425, 505);
    glVertex2i(435, 505);
    glVertex2i(435, 800);
    glVertex2i(425, 800);
    glEnd();

    glColor3ub(178, 102, 255);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(440, 505);
    glVertex2i(465, 505);
    glVertex2i(465, 800);
    glVertex2i(440, 800);
    glEnd();

    //building 6
    glColor3ub(153, 153, 0);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(470, 500);
    glVertex2i(540, 500);
    glVertex2i(540, 705);
    glVertex2i(470, 705);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(475, 505);
    glVertex2i(495, 505);
    glVertex2i(495, 700);
    glVertex2i(475, 700);
    glEnd();

    glColor3ub(192, 192, 192);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(500, 505);
    glVertex2i(535, 505);
    glVertex2i(535, 700);
    glVertex2i(500, 700);
    glEnd();

    //clock building

    glColor3ub(204, 204, 0); //City clock Triangle
    glBegin(GL_TRIANGLES);
    glVertex2i(550, 750);
    glVertex2i(595, 800);
    glVertex2i(640, 750);
    glEnd();

    glColor3ub(102, 51, 0); //City Clock Polygon
    glBegin(GL_POLYGON);
    glVertex2i(550, 520);
    glVertex2i(640, 520);
    glVertex2i(640, 750);
    glVertex2i(550, 750);
    glEnd();

    glColor3ub(0, 51, 0); //City Clock Door
    glBegin(GL_POLYGON);
    glVertex2i(580, 520);
    glVertex2i(610, 520);
    glVertex2i(610, 600);
    glVertex2i(580, 600);
    glEnd();

    glColor3ub(0, 0, 0);//Clock outdoor line 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(580, 510);
    glVertex2i(610, 510);
    glEnd();

    glColor3ub(0, 0, 0);//Clock Outdoor Line 2
    glBegin(GL_LINE_LOOP);
    glVertex2i(580, 515);
    glVertex2i(610, 515);
    glEnd();

    //Clock Shape
    int p1, x1, y1;
    int xc1 = 595, yc1 = 680, r1 = 35;
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
    glVertex2i(595, 680);
    glVertex2i(595, 710);
    glEnd();

    glColor3ub(0, 0, 0);//Hour Clock
    glBegin(GL_LINE_LOOP);
    glVertex2i(595, 680);
    glVertex2i(580, 670);
    glEnd();

    //dan pasher building 1
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(650, 500);
    glVertex2i(760, 500);
    glVertex2i(760, 800);
    glVertex2i(650, 800);
    glEnd();

    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(650, 800);
    glVertex2i(680, 800);
    glVertex2i(680, 850);
    glVertex2i(650, 850);
    glEnd();





    /*glColor3ub(255, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(660, 750);
    glVertex2i(700, 750);
    glVertex2i(700, 780);
    glVertex2i(660, 780);
    glEnd();*/



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(660, 700);
    glVertex2i(700, 700);
    glVertex2i(700, 730);
    glVertex2i(660, 730);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(660, 650);
    glVertex2i(700, 650);
    glVertex2i(700, 680);
    glVertex2i(660, 680);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(660, 600);
    glVertex2i(700, 600);
    glVertex2i(700, 630);
    glVertex2i(660, 630);
    glEnd();



    /*glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(660, 550);
    glVertex2i(700, 550);
    glVertex2i(700, 580);
    glVertex2i(660, 580);
    glEnd();


    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(660, 505);
    glVertex2i(700, 505);
    glVertex2i(700, 535);
    glVertex2i(660, 535);
    glEnd();*/
    //window right side

    /*glColor3ub(255, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(720, 750);
    glVertex2i(750, 750);
    glVertex2i(750, 780);
    glVertex2i(720, 780);
    glEnd();*/

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(720, 700);
    glVertex2i(750, 700);
    glVertex2i(750, 730);
    glVertex2i(720, 730);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(720, 650);
    glVertex2i(750, 650);
    glVertex2i(750, 680);
    glVertex2i(720, 680);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(720, 600);
    glVertex2i(750, 600);
    glVertex2i(750, 630);
    glVertex2i(720, 630);
    glEnd();

    glColor3ub(0, 0, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(720, 550);
    glVertex2i(750, 550);
    glVertex2i(750, 580);
    glVertex2i(720, 580);
    glEnd();

    glColor3ub(0, 0, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(720, 505);
    glVertex2i(750, 505);
    glVertex2i(750, 550);
    glVertex2i(720, 550);
    glEnd();

    //dan pasher building 2
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(760, 500);
    glVertex2i(870, 500);
    glVertex2i(870, 800);
    glVertex2i(760, 800);
    glEnd();

    glColor3ub(160, 160, 160);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(870, 800);
    glVertex2i(840, 800);
    glVertex2i(840, 850);
    glVertex2i(870, 850);
    glEnd();
    //
    glColor3ub(64, 64, 64);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(870, 800);
    glVertex2i(840, 800);
    glVertex2i(840, 850);
    glVertex2i(870, 850);
    glEnd();


    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(760, 700);
    glVertex2i(800, 700);
    glVertex2i(800, 730);
    glVertex2i(760, 730);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(760, 650);
    glVertex2i(800, 650);
    glVertex2i(800, 680);
    glVertex2i(760, 680);
    glEnd();



    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(760, 600);
    glVertex2i(800, 600);
    glVertex2i(800, 630);
    glVertex2i(760, 630);
    glEnd();



    glColor3ub(0, 0, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(750, 550);
    glVertex2i(800, 550);
    glVertex2i(800, 580);
    glVertex2i(750, 580);
    glEnd();


    glColor3ub(0, 0, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(780, 505);
    glVertex2i(800, 505);
    glVertex2i(800, 550);
    glVertex2i(780, 550);
    glEnd();
    //window right side


    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(820, 700);
    glVertex2i(850, 700);
    glVertex2i(850, 730);
    glVertex2i(820, 730);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(820, 650);
    glVertex2i(850, 650);
    glVertex2i(850, 680);
    glVertex2i(820, 680);
    glEnd();

    glColor3ub(255, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(820, 600);
    glVertex2i(850, 600);
    glVertex2i(850, 630);
    glVertex2i(820, 630);
    glEnd();



    int pe, xe, ye;
    int xce = 760, yce = 810, re = 50;
    pe = 1 - re;
    xe = 0;
    ye = re;
    while (xe <= ye)
    {
        if (pe < 0)
        {
            xe = xe + 1;
            pe = pe + 2 * xe + 1;
        }
        else
        {
            xe = xe + 1;
            ye = ye - 1;
            pe = pe + 2 * (xe + 1) - 2 * (ye + 1);
        }
        glColor3ub(64, 64, 64);
        glBegin(GL_POLYGON);
        glVertex2i(xe + xce, ye + yce);
        glVertex2i(xe + xce, -ye + yce);
        glVertex2i(-xe + xce, -ye + yce);
        glVertex2i(-xe + xce, ye + yce);
        glVertex2i(ye + xce, xe + yce);
        glVertex2i(ye + xce, -xe + yce);
        glVertex2i(-ye + xce, -xe + yce);
        glVertex2i(-ye + xce, xe + yce);
        glEnd();
    }

    //medical sign
    int pef, xef, yef;
    int xcef = 770, ycef = 890, ref = 40;
    pef = 1 - ref;
    xef = 0;
    yef = ref;
    while (xef <= yef)
    {
        if (pef < 0)
        {
            xef = xef + 1;
            pef = pef + 2 * xef + 1;
        }
        else
        {
            xef = xef + 1;
            yef = yef - 1;
            pef = pef + 2 * (xef + 1) - 2 * (yef + 1);
        }
        glColor3ub(255, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(xef + xcef, yef + ycef);
        glVertex2i(xef + xcef, -yef + ycef);
        glVertex2i(-xef + xcef, -yef + ycef);
        glVertex2i(-xef + xcef, yef + ycef);
        glVertex2i(yef + xcef, xef + ycef);
        glVertex2i(yef + xcef, -xef + ycef);
        glVertex2i(-yef + xcef, -xef + ycef);
        glVertex2i(-yef + xcef, xef + ycef);
        glEnd();
    }

    int pefe, xefe, yefe;
    int xcefe = 760, ycefe = 910, refe = 50;
    pefe = 1 - refe;
    xefe = 0;
    yefe = refe;
    while (xefe <= yefe)
    {
        if (pefe < 0)
        {
            xefe = xefe + 1;
            pefe = pefe + 2 * xefe + 1;
        }
        else
        {
            xefe = xefe + 1;
            yefe = yefe - 1;
            pefe = pefe + 2 * (xefe + 1) - 2 * (yefe + 1);
        }
        glColor3ub(173, 216, 230);
        glBegin(GL_POLYGON);
        glVertex2i(xefe + xcefe, yefe + ycefe);
        glVertex2i(xefe + xcefe, -yefe + ycefe);
        glVertex2i(-xefe + xcefe, -yefe + ycefe);
        glVertex2i(-xefe + xcefe, yefe + ycefe);
        glVertex2i(yefe + xcefe, xefe + ycefe);
        glVertex2i(yefe + xcefe, -xefe + ycefe);
        glVertex2i(-yefe + xcefe, -xefe + ycefe);
        glVertex2i(-yefe + xcefe, xefe + ycefe);
        glEnd();
    }

    glColor3ub(255, 0, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(730, 810);
    glVertex2i(790, 810);
    glVertex2i(790, 820);
    glVertex2i(730, 820);
    glEnd();

    glColor3ub(255, 0, 0);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(755, 780);
    glVertex2i(765, 780);
    glVertex2i(765, 840);
    glVertex2i(755, 840);
    glEnd();

    //corner building
    glColor3ub(204, 0, 102);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(875, 500);
    glVertex2i(995, 500);
    glVertex2i(995, 800);
    glVertex2i(875, 800);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(885, 750);
    glVertex2i(915, 750);
    glVertex2i(915, 780);
    glVertex2i(885, 780);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(885, 700);
    glVertex2i(915, 700);
    glVertex2i(915, 730);
    glVertex2i(885, 730);
    glEnd();


    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(885, 650);
    glVertex2i(915, 650);
    glVertex2i(915, 680);
    glVertex2i(885, 680);
    glEnd();


    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(885, 600);
    glVertex2i(915, 600);
    glVertex2i(915, 630);
    glVertex2i(885, 630);
    glEnd();



    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(885, 550);
    glVertex2i(915, 550);
    glVertex2i(915, 580);
    glVertex2i(885, 580);
    glEnd();



    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(885, 505);
    glVertex2i(915, 505);
    glVertex2i(915, 535);
    glVertex2i(885, 535);
    glEnd();
    //window right side

    glColor3ub(204, 255, 255);//building 1 window 1
    glBegin(GL_POLYGON);
    glVertex2i(945, 750);
    glVertex2i(975, 750);
    glVertex2i(975, 780);
    glVertex2i(945, 780);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(945, 700);
    glVertex2i(975, 700);
    glVertex2i(975, 730);
    glVertex2i(945, 730);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(945, 650);
    glVertex2i(975, 650);
    glVertex2i(975, 680);
    glVertex2i(945, 680);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(945, 600);
    glVertex2i(975, 600);
    glVertex2i(975, 630);
    glVertex2i(945, 630);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(945, 550);
    glVertex2i(975, 550);
    glVertex2i(975, 580);
    glVertex2i(945, 580);
    glEnd();

    glColor3ub(204, 255, 255);//building 1 window 2
    glBegin(GL_POLYGON);
    glVertex2i(945, 505);
    glVertex2i(975, 505);
    glVertex2i(975, 535);
    glVertex2i(945, 535);
    glEnd();


    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(935, 500);
    glVertex2i(935, 800);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(934, 500);
    glVertex2i(934, 800);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(933, 500);
    glVertex2i(933, 800);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(932, 500);
    glVertex2i(932, 800);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(931, 500);
    glVertex2i(931, 800);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(930, 500);
    glVertex2i(930, 800);
    glEnd();


    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_POLYGON);
    glVertex2i(875, 800);
    glVertex2i(995, 800);
    glVertex2i(935, 850);

    glEnd();

    //bus

    glColor3ub(193, 0, 0);//metro bogi 1
    glBegin(GL_POLYGON);
    glVertex2i(b, 80);
    glVertex2i(b + 165, 80);
    glVertex2i(b + 165, 150);
    glVertex2i(b, 150);

    if (b < 1000) {

        b = b + 0.05;

    }

    else b = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(b, 147);
    glVertex2i(b + 165, 147);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(b, 148);
    glVertex2i(b + 165, 148);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(b, 149);
    glVertex2i(b + 165, 149);
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(b, 110);
    glVertex2i(b + 165, 110);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(b, 109);
    glVertex2i(b + 165, 109);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(b, 108);
    glVertex2i(b + 165, 108);
    glEnd();


    glColor3ub(193, 0, 0);//metro bogi front
    glBegin(GL_TRIANGLES);
    glVertex2i(b + 165, 80);
    glVertex2i(b + 165, 150);
    glVertex2i(b + 180, 80);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(b + 10, 120);//150-1
    glVertex2i(b + 30, 120);//180-2
    glVertex2i(b + 30, 140);
    glVertex2i(b + 10, 140);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(b + 50, 120);
    glVertex2i(b + 70, 120);
    glVertex2i(b + 70, 140);
    glVertex2i(b + 50, 140);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(b + 90, 120);
    glVertex2i(b + 110, 120);
    glVertex2i(b + 110, 140);
    glVertex2i(b + 90, 140);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(b + 130, 120);
    glVertex2i(b + 150, 120);
    glVertex2i(b + 150, 140);
    glVertex2i(b + 130, 140);


    glEnd();

    //dui tala bus
    glColor3ub(193, 0, 0);//metro bogi 1
    glBegin(GL_POLYGON);
    glVertex2i(b, 150);
    glVertex2i(b + 165, 150);
    glVertex2i(b + 165, 190);
    glVertex2i(b, 190);

    if (b < 1000) {

        b = b + 0.05;

    }

    else b = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(b + 10, 160);//150-1
    glVertex2i(b + 30, 160);//180-2
    glVertex2i(b + 30, 180);
    glVertex2i(b + 10, 180);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(b + 50, 160);
    glVertex2i(b + 70, 160);
    glVertex2i(b + 70, 180);
    glVertex2i(b + 50, 180);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(b + 90, 160);
    glVertex2i(b + 110, 160);
    glVertex2i(b + 110, 180);
    glVertex2i(b + 90, 180);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(b + 130, 160);
    glVertex2i(b + 150, 160);
    glVertex2i(b + 150, 180);
    glVertex2i(b + 130, 180);


    glEnd();

    //weel 1 car 1
    int p3v, x3v, y3v;
    int xc3v = b + 120, yc3v = 80, r3v = 15;
    p3v = 1 - r3v;
    x3v = 0;
    y3v = r3v;
    while (x3v <= y3v)
    {
        if (p3v < 0)
        {
            x3v = x3v + 1;
            p3v = p3v + 2 * x3v + 1;
        }
        else
        {
            x3v = x3v + 1;
            y3v = y3v - 1;
            p3v = p3v + 2 * (x3v + 1) - 2 * (y3v + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x3v + xc3v, y3v + yc3v);
        glVertex2i(x3v + xc3v, -y3v + yc3v);
        glVertex2i(-x3v + xc3v, -y3v + yc3v);
        glVertex2i(-x3v + xc3v, y3v + yc3v);
        glVertex2i(y3v + xc3v, x3v + yc3v);
        glVertex2i(y3v + xc3v, -x3v + yc3v);
        glVertex2i(-y3v + xc3v, -x3v + yc3v);
        glVertex2i(-y3v + xc3v, x3v + yc3v);
        glEnd();
    }

    //weel 1 car 1
    int p3vv, x3vv, y3vv;
    int xc3vv = b + 30, yc3vv = 80, r3vv = 15;
    p3vv = 1 - r3vv;
    x3vv = 0;
    y3vv = r3vv;
    while (x3vv <= y3vv)
    {
        if (p3vv < 0)
        {
            x3vv = x3vv + 1;
            p3vv = p3vv + 2 * x3vv + 1;
        }
        else
        {
            x3vv = x3vv + 1;
            y3vv = y3vv - 1;
            p3vv = p3vv + 2 * (x3vv + 1) - 2 * (y3vv + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x3vv + xc3vv, y3vv + yc3vv);
        glVertex2i(x3vv + xc3vv, -y3vv + yc3vv);
        glVertex2i(-x3vv + xc3vv, -y3vv + yc3vv);
        glVertex2i(-x3vv + xc3vv, y3vv + yc3vv);
        glVertex2i(y3vv + xc3vv, x3vv + yc3vv);
        glVertex2i(y3vv + xc3vv, -x3vv + yc3vv);
        glVertex2i(-y3vv + xc3vv, -x3vv + yc3vv);
        glVertex2i(-y3vv + xc3vv, x3vv + yc3vv);
        glEnd();
    }

    //dui tala bus 2
    glColor3ub(193, 0, 0);//metro bogi 1
    glBegin(GL_POLYGON);
    glVertex2i(bb + 400, 150);
    glVertex2i(bb + 565, 150);
    glVertex2i(bb + 565, 190);
    glVertex2i(bb + 400, 190);

    if (bb < 1000) {

        bb = bb + 0.05;

    }

    else bb = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(bb + 410, 160);//150-1
    glVertex2i(bb + 430, 160);//180-2
    glVertex2i(bb + 430, 180);
    glVertex2i(bb + 410, 180);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(bb + 450, 160);
    glVertex2i(bb + 470, 160);
    glVertex2i(bb + 470, 180);
    glVertex2i(bb + 450, 180);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(bb + 490, 160);
    glVertex2i(bb + 510, 160);
    glVertex2i(bb + 510, 180);
    glVertex2i(bb + 490, 180);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(bb + 530, 160);
    glVertex2i(bb + 550, 160);
    glVertex2i(bb + 550, 180);
    glVertex2i(bb + 530, 180);


    glEnd();

    //nicher bus

    glColor3ub(193, 0, 0);//metro bogi 1
    glBegin(GL_POLYGON);
    glVertex2i(bb + 400, 80);
    glVertex2i(bb + 565, 80);
    glVertex2i(bb + 565, 150);
    glVertex2i(bb + 400, 150);

    if (bb < 1000) {

        bb = bb + 0.05;

    }

    else bb = 0;

    glutPostRedisplay();
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(bb + 400, 147);
    glVertex2i(bb + 565, 147);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(bb + 400, 148);
    glVertex2i(bb + 565, 148);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(bb + 400, 149);
    glVertex2i(bb + 565, 149);
    glEnd();

    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(bb + 400, 110);
    glVertex2i(bb + 565, 110);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(bb + 400, 109);
    glVertex2i(bb + 565, 109);
    glEnd();
    glColor3ub(0, 0, 0);//building 1
    glBegin(GL_LINE_LOOP);
    glVertex2i(bb + 400, 108);
    glVertex2i(bb + 565, 108);
    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 1
    glBegin(GL_POLYGON);
    glVertex2i(bb + 410, 120);//150-1
    glVertex2i(bb + 430, 120);//180-2
    glVertex2i(bb + 430, 140);
    glVertex2i(bb + 410, 140);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 2
    glBegin(GL_POLYGON);
    glVertex2i(bb + 450, 120);
    glVertex2i(bb + 470, 120);
    glVertex2i(bb + 470, 140);
    glVertex2i(bb + 450, 140);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 3
    glBegin(GL_POLYGON);
    glVertex2i(bb + 490, 120);
    glVertex2i(bb + 510, 120);
    glVertex2i(bb + 510, 140);
    glVertex2i(bb + 490, 140);

    glEnd();

    glColor3ub(192, 192, 192);//metro bogi 1 janala 4
    glBegin(GL_POLYGON);
    glVertex2i(bb + 530, 120);
    glVertex2i(bb + 550, 120);
    glVertex2i(bb + 550, 140);
    glVertex2i(bb + 530, 140);


    glEnd();

    //weel 1 car 1
    int p3vg, x3vg, y3vg;
    int xc3vg = bb + 520, yc3vg = 80, r3vg = 15;
    p3vg = 1 - r3vg;
    x3vg = 0;
    y3vg = r3vg;
    while (x3vg <= y3vg)
    {
        if (p3vg < 0)
        {
            x3vg = x3vg + 1;
            p3vg = p3vg + 2 * x3vg + 1;
        }
        else
        {
            x3vg = x3vg + 1;
            y3vg = y3vg - 1;
            p3vg = p3vg + 2 * (x3vg + 1) - 2 * (y3vg + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x3vg + xc3vg, y3vg + yc3vg);
        glVertex2i(x3vg + xc3vg, -y3vg + yc3vg);
        glVertex2i(-x3vg + xc3vg, -y3vg + yc3vg);
        glVertex2i(-x3vg + xc3vg, y3vg + yc3vg);
        glVertex2i(y3vg + xc3vg, x3vg + yc3vg);
        glVertex2i(y3vg + xc3vg, -x3vg + yc3vg);
        glVertex2i(-y3vg + xc3vg, -x3vg + yc3vg);
        glVertex2i(-y3vg + xc3vg, x3vg + yc3vg);
        glEnd();
    }

    //weel 1 car 1
    int p3vvd, x3vvd, y3vvd;
    int xc3vvd = b + 430, yc3vvd = 80, r3vvd = 15;
    p3vvd = 1 - r3vvd;
    x3vvd = 0;
    y3vvd = r3vvd;
    while (x3vvd <= y3vvd)
    {
        if (p3vvd < 0)
        {
            x3vvd = x3vvd + 1;
            p3vvd = p3vvd + 2 * x3vvd + 1;
        }
        else
        {
            x3vvd = x3vvd + 1;
            y3vvd = y3vvd - 1;
            p3vvd = p3vvd + 2 * (x3vvd + 1) - 2 * (y3vvd + 1);
        }
        glColor3ub(0, 0, 0);
        glBegin(GL_POLYGON);
        glVertex2i(x3vvd + xc3vvd, y3vvd + yc3vvd);
        glVertex2i(x3vvd + xc3vvd, -y3vvd + yc3vvd);
        glVertex2i(-x3vvd + xc3vvd, -y3vvd + yc3vvd);
        glVertex2i(-x3vvd + xc3vvd, y3vvd + yc3vvd);
        glVertex2i(y3vvd + xc3vvd, x3vvd + yc3vvd);
        glVertex2i(y3vvd + xc3vvd, -x3vvd + yc3vvd);
        glVertex2i(-y3vvd + xc3vvd, -x3vvd + yc3vvd);
        glVertex2i(-y3vvd + xc3vvd, x3vvd + yc3vvd);
        glEnd();
    }



    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 700);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("201-15-13671_Zobaida Hossain");

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(0, 1000, 0, 1000);
    glMatrixMode(GL_PROJECTION);
    glViewport(0, 0, 500, 500);

    glutDisplayFunc(circle);
    glutMainLoop();
    return 0;
}