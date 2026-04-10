#include <GL/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);


    // RED
    glColor3ub(255, 0, 0);



    glBegin(GL_TRIANGLES);
    glVertex2i(1, 1);
    glVertex2i(2, 2);
    glVertex2i(3, 1);

    glVertex2i(4, 4);
    glVertex2i(5, 5);
    glVertex2i(6, 4);

    glVertex2i(7, 7);
    glEnd();

    glFlush();


}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Test triangle");
    glClearColor(1, 1, 1, 0);


    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}