#include <windows.h>
#include <GL/glut.h>
#include <gl/glut.h>
#include <Windows.h>
#include <iostream>
using namespace std;

void circle() {
    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-300.0f, -200.0f);
    glVertex2f(-300.0f, 200.0f);
    glVertex2f(300.0f, 200.0f);
    glVertex2f(300.0f, -200.0f);
    glEnd();

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
    gluOrtho2D(-1000, 1000, -1000, 1000);
    glMatrixMode(GL_PROJECTION);
    glViewport(0, 0, 500, 500);

    glutDisplayFunc(circle);
    glutMainLoop();
    return 0;
}