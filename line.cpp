#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>

void point(int x, int y) {
    glBegin(GL_POINTS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2i(x, y);
    glEnd();
}

void draw_line(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int pk = (2 * dy) - dx;

    while (x1 != x2 && y1 != y2) {
        point(x1, y1);
        if (pk < 0) {
            x1 += 1;
            pk = pk + (2 * dy);
        }
        else if (pk > 0) {
            x1 += 1;
            y1 += 1;
            pk = pk + (2 * dy) - (2 * dx);
        }
    }

}

void display(void)
{
    
    glClear(GL_COLOR_BUFFER_BIT);
   
    draw_line(100, 150, 300, 350);
   
    glFlush();
}
void init(void)
{
    
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 500.0, 0.0, 500.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("201-15-13671");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; 
}