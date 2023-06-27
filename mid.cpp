#include <GL/glut.h>
#include <stdio.h>

int xc = 5, yc = 5, r = 50;

void plot_point(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2i(x + xc, y + yc);
    glEnd();
}

void mid_point_circle()
{
    glColor3f(1.0, 1.0, 1.0);
    int x = 0;
    int y = r;
    float p = 1 - r;

    plot_point(x, y);

    while (x <= y)
    {
        x++;

        if (p < 0)
            p += 2 * x + 1;
        else {
            y--;
            p += 2 * (x - y) + 1;
        }

        plot_point(x, y);
        plot_point(x, -y);
        plot_point(-x, y);
        plot_point(-x, -y);
        plot_point(y, x);
        plot_point(-y, x);
        plot_point(y, -x);
        plot_point(-y, -x);
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("201-15-13671_Zobaida Hossain");
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    gluOrtho2D(-100, 100, -100, 100);
    glutDisplayFunc(mid_point_circle);
    glutMainLoop();
    return 0;
}
