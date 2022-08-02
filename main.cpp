#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS); //Back Color Green
	glColor3f(0.0f, 0.5f, 0.0f);
	glVertex2f(-1.f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
glEnd();
	glBegin(GL_QUADS); //Road Up up down
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.2f, -1.0f);
	glVertex2f(-0.1f, -0.0f);
	glVertex2f(0.1f, -0.0f);
	glVertex2f(0.2f, -1.0f);
glEnd();
glBegin(GL_QUADS); //Road left right
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, -0.2f);
	glVertex2f(1.0f, -0.2f);
	glVertex2f(1.0f, -0.45f);
	glVertex2f(0.0f, -0.45f);
glEnd();

glLineWidth(3);    //line road up down
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.0f, -0.9f);
	glVertex2f(-0.0f, -0.85f);

	glVertex2f(-0.0f, -0.7f);
	glVertex2f(-0.0f, -0.65f);

	glVertex2f(-0.0f, -0.5f);
	glVertex2f(-0.0f, -0.45f);

	glVertex2f(-0.0f, -0.3f);
	glVertex2f(-0.0f, -0.25f);

	glVertex2f(-0.0f, -0.1f);
	glVertex2f(-0.0f, -0.05f);

	glEnd();
	glLineWidth(3);    //line road left right
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.25f, -0.325f);
	glVertex2f(0.3f, -0.3255f);

	glVertex2f(0.35f, -0.325f);
	glVertex2f(0.4f, -0.3255f);

	glVertex2f(0.45f, -0.325f);
	glVertex2f(0.5f, -0.3255f);

	glVertex2f(0.55f, -0.325f);
	glVertex2f(0.6f, -0.3255f);

	glVertex2f(0.65f, -0.325f);
	glVertex2f(0.7f, -0.3255f);

	glVertex2f(0.75f, -0.325f);
	glVertex2f(0.8f, -0.3255f);

	glVertex2f(0.85f, -0.325f);
	glVertex2f(0.9f, -0.3255f);

	glVertex2f(0.95f, -0.325f);
	glVertex2f(0.99f, -0.3255f);

	glVertex2f(0.13f, -0.22f);//dense
	glVertex2f(0.18f, -0.22f);

	glVertex2f(0.135f, -0.24f);
	glVertex2f(0.185f, -0.24f);

	glVertex2f(0.14f, -0.26f);
	glVertex2f(0.19f, -0.26f);

	glVertex2f(0.145f, -0.28f);
	glVertex2f(0.195f, -0.28f);

	glVertex2f(0.15f, -0.3f);
	glVertex2f(0.2f, -0.3f);

	glVertex2f(0.155f, -0.32f);
	glVertex2f(0.205f, -0.32f);

	glVertex2f(0.16f, -0.34f);
	glVertex2f(0.21f, -0.34f);

	glVertex2f(0.165f, -0.36f);
	glVertex2f(0.215f, -0.36f);

	glVertex2f(0.17f, -0.38f);
	glVertex2f(0.22f, -0.38f);

	glVertex2f(0.175f, -0.4f);
	glVertex2f(0.225f, -0.4f);

	glVertex2f(0.18f, -0.42f);
	glVertex2f(0.23f, -0.42f);

	glVertex2f(0.185f, -0.44f);
	glVertex2f(0.235f, -0.44f);


	glEnd();

	glLineWidth(10);    //lamp post
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.2f, -0.8f);//1
	glVertex2f(-0.2f, -0.65f);
	glVertex2f(-0.2f, -0.661f);
	glVertex2f(-0.15f, -0.661f);

	glVertex2f(-0.17f, -0.5f);//2
	glVertex2f(-0.17f, -0.35f);
	glVertex2f(-0.17f, -0.361f);
	glVertex2f(-0.12f,-0.361f);

	glVertex2f(-0.14f, -0.2f);//3
	glVertex2f(-0.14f, -0.05f);
	glVertex2f(-0.14f, -0.0561f);
	glVertex2f(-0.09f,-0.061f);

	glVertex2f(0.2f, -0.8f);//4
	glVertex2f(0.2f, -0.65f);
	glVertex2f(0.2f, -0.661f);
	glVertex2f(0.15f, -0.661f);

	glVertex2f(0.17f, -0.5f);//5
	glVertex2f(0.17f, -0.35f);
	glVertex2f(0.17f, -0.361f);
	glVertex2f(0.12f,-0.361f);

	glVertex2f(0.37f, -0.5f);//6
	glVertex2f(0.37f, -0.35f);
	glVertex2f(0.37f, -0.361f);
	glVertex2f(0.33f,-0.32f);

	glVertex2f(0.57f, -0.5f);//7
	glVertex2f(0.57f, -0.35f);
	glVertex2f(0.57f, -0.361f);
	glVertex2f(0.53f,-0.32f);

	glVertex2f(0.77f, -0.5f);//8
	glVertex2f(0.77f, -0.35f);
	glVertex2f(0.77f, -0.361f);
	glVertex2f(0.73f,-0.32f);
	glEnd();

	glBegin(GL_TRIANGLES);//Light 1
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.15f, -0.661f);
	glVertex2f(-0.135f, -0.71f);
	glVertex2f(-0.165f, -0.71f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.15f, -0.71f);
	glVertex2f(-0.13f, -0.78f);
	glVertex2f(-0.17f, -0.78f);

	glEnd();
	glBegin(GL_TRIANGLES);//Light 2
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.12f,-0.361f);
	glVertex2f(-0.10f,-0.41f);
	glVertex2f(-0.14f,-0.41f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.12f,-0.41f);
	glVertex2f(-0.10f,-0.48f);
	glVertex2f(-0.14f,-0.48f);

	glEnd();
	glBegin(GL_TRIANGLES);//Light 3
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(-0.09f,-0.061f);
	glVertex2f(-0.07f,-0.11f);
	glVertex2f(-0.11f,-0.11f);

	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(-0.09f,-0.11f);
	glVertex2f(-0.07f,-0.18f);
	glVertex2f(-0.11f,-0.18f);

	glEnd();
	glBegin(GL_TRIANGLES);//Light 4
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.15f, -0.661f);
	glVertex2f(0.135f, -0.71f);
	glVertex2f(0.165f, -0.71f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.15f, -0.71f);
	glVertex2f(0.13f, -0.78f);
	glVertex2f(0.17f, -0.78f);

	glEnd();
	glBegin(GL_TRIANGLES);//Light 5
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex2f(0.12f,-0.361f);
	glVertex2f(0.10f,-0.41f);
	glVertex2f(0.14f,-0.41f);
	glEnd();
	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.12f,-0.41f);
	glVertex2f(0.10f,-0.48f);
	glVertex2f(0.14f,-0.48f);
	glEnd();
	glBegin(GL_TRIANGLES);//Light 6
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.33f,-0.32f);
	glVertex2f(0.35f,-0.38f);
	glVertex2f(0.31f,-0.38f);

	glEnd();
	glBegin(GL_TRIANGLES);//Light 7
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.53f,-0.32f);
	glVertex2f(0.55f,-0.38f);
	glVertex2f(0.51f,-0.38f);


	glEnd();
	glBegin(GL_TRIANGLES);//Light 8
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex2f(0.73f,-0.32f);
	glVertex2f(0.75f,-0.38f);
	glVertex2f(0.71f,-0.38f);


	glEnd();








glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(900, 600);
	glutInitWindowPosition(10,10);
	glutCreateWindow("OpenGL Setup");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
