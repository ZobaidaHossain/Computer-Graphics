#include <windows.h>
#include <GL/glut.h>

void display() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glOrtho(-5, 5, -5, 5, -5, 5);
  glClear(GL_COLOR_BUFFER_BIT);

  glBegin(GL_QUADS);
  glColor3f(1.0f, 1.0f, 1.0f);
  glVertex2f(-2.0f, -2.0f);
  glVertex2f(-2.0f, 2.0f);
  glVertex2f(2.0f, 2.0f);
  glVertex2f(2.0f, -2.0f);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(0.0f, 1.0f, 0.0f);
  glVertex2f(-2.0f, 2.0f);
  glVertex2f(0.0f, 4.0f);
  glVertex2f(2.0f, 2.0f);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex2f(-0.8f, -2.0f);
  glVertex2f(-0.8f, 1.0f);
  glVertex2f(0.8f, 1.0f);
  glVertex2f(0.8f, -2.0f);
  glEnd();

  glBegin(GL_QUADS);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex2f(-1.8f, 0.5f);
  glVertex2f(-1.8f, 1.5f);
  glVertex2f(-1.2f, 1.5f);
  glVertex2f(-1.2f, 0.5f);
  glEnd();


  glBegin(GL_QUADS);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex2f(1.8f, 0.5f);
  glVertex2f(1.8f, 1.5f);
  glVertex2f(1.2f, 1.5f);
  glVertex2f(1.2f, 0.5f);
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