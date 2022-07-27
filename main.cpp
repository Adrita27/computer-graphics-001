#include<windows.h>

#include <GL/glut.h>


void myDisplayDay(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
gluOrtho2D(-5,5,-4,4);


glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4,1);
	glVertex2f(0,1.3);
	glVertex2f(4,1);
	glVertex2f(4,0);
	glVertex2f(-4,0);
	glEnd();

   glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-3.9,1);
	glVertex2f(-3.9,1.1);
	glVertex2f(-0,1.4);
	glVertex2f(3.9,1.1);
	glVertex2f(3.9,1);
	glVertex2f(-0,1.3);
	glVertex2f(-3.9,1);
	glEnd();

	glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-5,0);
	glVertex2f(-5,-0.1);
	glVertex2f(5,-0.1);
	glVertex2f(5,0);
	glVertex2f(-5,0);
	glEnd();

///Left Pillar
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,0);
	glVertex2f(-4.5,0);
	glVertex2f(-4.5,1);
	glVertex2f(-4,1);
	glVertex2f(-4,0);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-3.9,1);
	glVertex2f(-4.6,1);
	glVertex2f(-4.6,1.2);
	glVertex2f(-4.5,1.2);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4,1.1);
	glVertex2f(-4,1.2);
	glVertex2f(-3.9,1.2);
	glVertex2f(-3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4,1.1);
	glVertex2f(-4.5,1.1);
	glVertex2f(-4.5,1.5);
	glVertex2f(-4,1.5);
	glVertex2f(-4,1.1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4.6,1.5);
	glVertex2f(-4.7,1.6);
	glVertex2f(-3.8,1.6);
	glVertex2f(-3.9,1.5);
	glVertex2f(-4.6,1.5);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(-4.6,1.6);
	glVertex2f(-4.6,1.7);
	glVertex2f(-4.5,1.8);
	glVertex2f(-4.4,1.9);
	glVertex2f(-4.25,2.0);
	glVertex2f(-4.1,1.9);
	glVertex2f(-4.0,1.8);
	glVertex2f(-3.9,1.7);
	glVertex2f(-3.9,1.6);
	glVertex2f(-4.6,1.6);
	glEnd();

	/// Right Pillar
glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4,0);
	glVertex2f(4.5,0);
	glVertex2f(4.5,1);
	glVertex2f(4,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(3.9,1);
	glVertex2f(4.6,1);
	glVertex2f(4.6,1.2);
	glVertex2f(4.5,1.2);
	glVertex2f(4.5,1.1);
	glVertex2f(4,1.1);
	glVertex2f(4,1.2);
	glVertex2f(3.9,1.2);
	glVertex2f(3.9,1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4,1.1);
	glVertex2f(4.5,1.1);
	glVertex2f(4.5,1.5);
	glVertex2f(4,1.5);
	glVertex2f(4,1.1);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4.6,1.5);
	glVertex2f(4.7,1.6);
	glVertex2f(3.8,1.6);
	glVertex2f(3.9,1.5);
	glVertex2f(4.6,1.5);
	glEnd();

glColor3ub(160,82,45);
glBegin(GL_POLYGON);
	glVertex2f(4.6,1.6);
	glVertex2f(4.6,1.7);
	glVertex2f(4.5,1.8);
	glVertex2f(4.4,1.9);
	glVertex2f(4.25,2.0);
	glVertex2f(4.1,1.9);
	glVertex2f(4.0,1.8);
	glVertex2f(3.9,1.7);
	glVertex2f(3.9,1.6);
	glVertex2f(4.6,1.6);
	glEnd();

   ///Left window
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-4.2,1.2);
	glVertex2f(-4.3,1.2);
	glVertex2f(-4.3,1.4);
	glVertex2f(-4.2,1.4);
	glVertex2f(-4.2,1.2);
	glEnd();

	///Right window
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(4.2,1.2);
	glVertex2f(4.3,1.2);
	glVertex2f(4.3,1.4);
	glVertex2f(4.2,1.4);
	glVertex2f(4.2,1.2);
	glEnd();


	///Door -5
glColor3ub(0,0,0);
glBegin(GL_POLYGON);
	glVertex2f(-3.8,0);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.4,0);
	glVertex2f(-3.8,0);
	glEnd();


	glColor3ub(205,133,63);
glBegin(GL_POLYGON);
	glVertex2f(-3.8,0.8);
	glVertex2f(-3.8,0.5);
	glVertex2f(-3.6,0.7);
	glVertex2f(-3.4,0.5);
	glVertex2f(-3.4,0.8);
	glVertex2f(-3.8,0.8);
	glEnd();





	glFlush ();

}
/*
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
}  */

int main(int argc, char** argv)

{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1600,960);
glutCreateWindow ("60 DOME MOSQUE");
glutDisplayFunc(myDisplayDay);
//myInit ();

glutMainLoop();
return 0;
}
