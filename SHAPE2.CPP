#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-500, 500, -500, 500, -500, 500);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, 0.0f);
    glVertex2f(-100.0f, 250.0f);
    glVertex2f(-100.0f, 200.0f);
    glVertex2f(-400.0f, 200.0f);
    glVertex2f(-400.0f, -200.0f);
    glVertex2f(-100.0f, -200.0f);
    glVertex2f(-100.0f, -250.0f);


    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-100.0f, -100.0f);
    glVertex2f(-100.0f, 100.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, 0.0f);
    glVertex2f(200.0f, 200.0f);
    glVertex2f(300.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(100.0f, 0.0f);
    glVertex2f(200.0f, -200.0f);
    glVertex2f(300.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(150.0f, 0.0f);
    glVertex2f(200.0f, 100.0f);
    glVertex2f(250.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(150.0f, 0.0f);
    glVertex2f(200.0f, -100.0f);
    glVertex2f(250.0f, 0.0f);
    glEnd();



    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Triangle");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}