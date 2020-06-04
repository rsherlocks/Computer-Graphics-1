#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);

/// First(GREEN) star
glColor3ub (0, 255, 0);

glBegin(GL_POLYGON);
glVertex2d (250, 250);
glVertex2d (300, 325);
glVertex2d (200, 325);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (300, 325);
glVertex2d (375, 375);
glVertex2d (300, 425);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (300, 425);
glVertex2d (250, 500);
glVertex2d (200, 425);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (200, 325);
glVertex2d (200, 425);
glVertex2d (125, 375);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (200, 325);
glVertex2d (300, 325);
glVertex2d (300, 425);
glVertex2d (200, 425);
glEnd();

/// Second(RED) star
glColor3ub (255, 0, 0);

glBegin(GL_POLYGON);
glVertex2d (125, 125);
glVertex2d (175, 200);
glVertex2d (75, 200);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (175, 200);
glVertex2d (250, 250);
glVertex2d (175, 300);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (175, 300);
glVertex2d (125, 375);
glVertex2d (75, 300);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (75, 300);
glVertex2d (0, 250);
glVertex2d (75, 200);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (75, 200);
glVertex2d (175, 200);
glVertex2d (175, 300);
glVertex2d (75, 300);
glEnd();

/// Third(BLUE) star
glColor3ub (0, 0, 255);

glBegin(GL_POLYGON);
glVertex2d (200, 75);
glVertex2d (250, 0);
glVertex2d (300, 75);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (300, 75);
glVertex2d (375, 125);
glVertex2d (300, 175);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (300, 175);
glVertex2d (250, 250);
glVertex2d (200, 175);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (200, 175);
glVertex2d (125, 125);
glVertex2d (200, 75);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (200, 75);
glVertex2d (300, 75);
glVertex2d (300, 175);
glVertex2d (200, 175);
glEnd();

/// Fourth(WHITE) star
glColor3ub (255, 255, 255);

glBegin(GL_POLYGON);
glVertex2d (325, 200);
glVertex2d (375, 125);
glVertex2d (425, 200);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (425, 200);
glVertex2d (500, 250);
glVertex2d (425, 300);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (425, 300);
glVertex2d (375, 375);
glVertex2d (325, 300);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (325, 300);
glVertex2d (250, 250);
glVertex2d (325, 200);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (325, 200);
glVertex2d (425, 200);
glVertex2d (425, 300);
glVertex2d (325, 300);
glEnd();

glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, 500, 0, 500);
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Stars");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}

