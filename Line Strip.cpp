#include<windows.h>
#include<glut.h>

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
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    draw_line(15, 25, 126, 129);
    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
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
    glutCreateWindow("hello");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}