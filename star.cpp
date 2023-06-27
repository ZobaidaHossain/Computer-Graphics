#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-1000, 1000, -1000, 1000, -1000, 1000);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(100.0f, 400.0f);
    glVertex2f(500.0f, 500.0f);
    glVertex2f(100.0f, 600.0f);
    glVertex2f(0.0f, 1000.0f);
    glVertex2f(-100.0f, 600.0f);
    glVertex2f(-500.0f, 500.0f);
    glVertex2f(-100.0f, 400.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-400.0f, 100.0f);
    glVertex2f(-500.0f, 500.0f);
    glVertex2f(-600.0f, 100.0f);
    glVertex2f(-1000.0f, 0.0f);
    glVertex2f(-600.0f, -100.0f);
    glVertex2f(-500.0f, -500.0f);
    glVertex2f(-400.0f, -100.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(100.0f, -400.0f);
    glVertex2f(500.0f, -500.0f);
    glVertex2f(100.0f, -600.0f);
    glVertex2f(0.0f, -1000.0f);
    glVertex2f(-100.0f, -600.0f);
    glVertex2f(-500.0f, -500.0f);
    glVertex2f(-100.0f, -400.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(400.0f, 100.0f);
    glVertex2f(500.0f, 500.0f);
    glVertex2f(600.0f, 100.0f);
    glVertex2f(1000.0f, 0.0f);
    glVertex2f(600.0f, -100.0f);
    glVertex2f(500.0f, -500.0f);
    glVertex2f(400.0f, -100.0f);
    glVertex2f(0.0f, 0.0f);
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("201-15-13671");
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}