#include <gl/glut.h>
#include <Windows.h>
#include <iostream>
using namespace std;

void circle() {
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(2.0);
    float r = 100;
    float x = 0, y = r;
    float p = 1 - r;
    glBegin(GL_POLYGON);
    while (x < y)
    {
        x++;
        if (p < 0) {
            p += 2 * (x + 1) + 1;
        }
        else {
            y--;
            p += 2 * (x + 1) + 1 - 2 * (y - 1);
        }
        glVertex2i(x, y);
        glVertex2i(-x, y);
        glVertex2i(x, -y);
        glVertex2i(-x, -y);

        glVertex2i(y, x);
        glVertex2i(-y, x);
        glVertex2i(y, -x);
        glVertex2i(-y, -x);

    }

    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    //1
    glVertex2f(-250.0, 250.0);
    glVertex2f(250.0, 250.0);
    //2
    glVertex2f(-250.0, 250.0);
    glVertex2f(-170.0, 350.0);
    //3
    glVertex2f(-230.0, 250.0);
    glVertex2f(-150.0, 350.0);
    //4
    glVertex2f(250.0, 250.0);
    glVertex2f(320.0, 350.0);
    //5
    glVertex2f(230.0, 250.0);
    glVertex2f(300.0, 350.0);
    //6

    glVertex2f(10.0, 250.0);
    glVertex2f(80.0, 350.0);
    //7

    glVertex2f(-10.0, 250.0);
    glVertex2f(60.0, 350.0);
    //8
    glVertex2f(320.0, 350.0);
    glVertex2f(-170.0, 350.0);
    //9

    glVertex2f(290.0, 330.0);
    glVertex2f(-170.0, 330.0);

    //10
    glVertex2f(-250.0, 250.0);
    glVertex2f(-250.0, -250.0);

    //11
    glVertex2f(-230.0, 250.0);
    glVertex2f(-230.0, -250.0);

    //12
    glVertex2f(10.0, 250.0);
    glVertex2f(10.0, -250.0);

    //13
    glVertex2f(-10.0, 250.0);
    glVertex2f(-10.0, -250.0);

    //14
    glVertex2f(250.0, 250.0);
    glVertex2f(250.0, -250.0);

    //15
    glVertex2f(230.0, 250.0);
    glVertex2f(230.0, -250.0);

    //16
    glVertex2f(-600.0, 250.0);
    glVertex2f(-300.0, 250.0);

    //17
    glVertex2f(-300.0, 250.0);
    glVertex2f(-300.0, -250.0);


    //18
    glVertex2f(-450.0, 250.0);
    glVertex2f(-450.0, -250.0);
    //19
    glVertex2f(-600.0, 250.0);
    glVertex2f(-600.0, -250.0);
    //20
    glVertex2f(600.0, 250.0);
    glVertex2f(300.0, 250.0);

    //21
    glVertex2f(300.0, 250.0);
    glVertex2f(300.0, -250.0);
    //22
    glVertex2f(450.0, 250.0);
    glVertex2f(450.0, -250.0);

    //23
    glVertex2f(600.0, 250.0);
    glVertex2f(600.0, -250.0);
    //24
    glVertex2f(-700.0, -250.0);
    glVertex2f(700.0, -250.0);
    //25
    glVertex2f(-700.0, -250.0);
    glVertex2f(-300.0, -450.0);

    //26
    glVertex2f(700.0, -250.0);
    glVertex2f(300.0, -450.0);
    //27
    glVertex2f(-300.0, -450.0);
    glVertex2f(300.0, -450.0);
    //28
    glVertex2f(-500.0, -350.0);
    glVertex2f(500.0, -350.0);


    glEnd();

    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("201-15-13671_Zobaida Hossain");

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(-800, 800, -800, 800);
    glMatrixMode(GL_PROJECTION);
    glViewport(0, 0, 500, 500);

    glutDisplayFunc(circle);
    glutMainLoop();
    return 0;
}