#include <iostream>
#include<GL\glut.h>

void vertix() {
    glBegin(GL_POLYGON);
    glVertex3f(0.0, 0.0, 0.0);
    glVertex3f(0.5, 0.0, 0.0);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(0.0, 0.5, 0.0);
    glEnd();
}
void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    vertix();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}