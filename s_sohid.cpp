#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
float x = 0, y, x2, y2, m, i, j, p;
int dx = 0, dy = 0, r = 10;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    p = 1 - r;
    while ((x <= y)) {
        if (p < 0) {
            x = x + 1;
            y = y;
            printf("%0.2f %0.2f\n", x, y);

            p = p + (2 * x) + 1;

        }


        else {
            x = x + 1;
            y = y - 1;
            printf("%0.2f %0.2f\n", x, y);
            p = p + (2 * x) + 1 - (2 * y);
        }
        glVertex3f(((x / 50)), ((y / 50)), 0.0);

        glVertex3f(((y / 50)), ((x / 50)), 0.0);

        glVertex3f((-(x / 50)), (-(y / 50)), 0.0);

        glVertex3f((-(x / 50)), ((y / 50)), 0.0);

        glVertex3f(((x / 50)), (-(y / 50)), 0.0);

        glVertex3f(((y / 50)), (-(x / 50)), 0.0);

        glVertex3f((-(y / 50)), (-(x / 50)), 0.0);

        glVertex3f((-(y / 50)), ((x / 50)), 0.0);

    }
    glEnd();


    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);

    glVertex2f(-150.0, 150.0);
    glVertex2f(150.0, 150.0);
    glVertex2f(-150.0, 150.0);
    glVertex2f(-70.0, 250.0);
    glVertex2f(-130.0, 150.0);
    glVertex2f(-50.0, 250.0);
    glVertex2f(150.0, 150.0);
    glVertex2f(220.0, 250.0);
    glVertex2f(130.0, 150.0);
    glVertex2f(200.0, 250.0);
    glVertex2f(10.0, 150.0);
    glVertex2f(80.0, 250.0);
    glVertex2f(-10.0, 150.0);
    glVertex2f(60.0, 250.0);
    glVertex2f(220.0, 250.0);
    glVertex2f(-70.0, 250.0);
    glVertex2f(190.0, 230.0);
    glVertex2f(-70.0, 230.0);
    glVertex2f(-150.0, 150.0);
    glVertex2f(-150.0, -150.0);
    glVertex2f(-130.0, 150.0);
    glVertex2f(-130.0, -150.0);
    glVertex2f(10.0, 150.0);
    glVertex2f(10.0, -150.0);
    glVertex2f(-10.0, 150.0);
    glVertex2f(-10.0, -150.0);
    glVertex2f(150.0, 150.0);
    glVertex2f(150.0, -150.0);
    glVertex2f(130.0, 150.0);
    glVertex2f(130.0, -150.0);
    glVertex2f(-500.0, 150.0);
    glVertex2f(-200.0, 150.0);
    glVertex2f(-200.0, 150.0);
    glVertex2f(-200.0, -150.0);
    glVertex2f(-350.0, 150.0);
    glVertex2f(-350.0, -150.0);
    glVertex2f(-500.0, 150.0);
    glVertex2f(-500.0, -150.0);
    glVertex2f(500.0, 150.0);
    glVertex2f(200.0, 150.0);
    glVertex2f(200.0, 150.0);
    glVertex2f(200.0, -150.0);
    glVertex2f(350.0, 150.0);
    glVertex2f(350.0, -150.0);
    glVertex2f(500.0, 150.0);
    glVertex2f(500.0, -150.0);
    glVertex2f(-600.0, -150.0);
    glVertex2f(600.0, -150.0);
    glEnd();

    glFlush();
}
void init(void)
{

    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

}

int main(int argc, char** argv)
{

    printf("Enter radius: ");
    scanf("%d", &r);
    y = r;
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