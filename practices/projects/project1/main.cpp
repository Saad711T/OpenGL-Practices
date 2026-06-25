#include <GL/glut.h>


float red = 1.0;
float green = 1.0;
float blue = 1.0;


void processMenu(int option) {
	switch (option) {
	case 1: red = 1.0; green = 0.0; blue = 0.0;
		break;
	case 2: red = 0.0; green = 1.0; blue = 0.0;
		break;
	case 3: red = 0.0; green = 0.0; blue = 1.0;
		break;
	case 4: red = 1.0; green = 0.5; blue = 0.0;
		break;
	case 5: exit(0);
	}
	glutPostRedisplay();
}
void createMenu() {
	int menu = glutCreateMenu(processMenu);
	glutAddMenuEntry("Red", 1);
	glutAddMenuEntry("Green", 2);
	glutAddMenuEntry("Blue", 3);
	glutAddMenuEntry("Orange", 4);
	glutAddMenuEntry("Exit", 5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}
void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(red, green, blue);
	glBegin(GL_TRIANGLES);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glVertex2f(0.0, 0.5);
	glEnd();
	glFlush();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutCreateWindow("OpenGL Menu");
	glClearColor(0, 0, 0, 1);
	gluOrtho2D(-3, 3, -3, 3);
	glutDisplayFunc(draw);
	createMenu();
	glutMainLoop();



	return 0;
}