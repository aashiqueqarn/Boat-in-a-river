#include<stdio.h>
#include<math.h>
#include<GL/glut.h>
int status=0;
float X=0;
float Y=0;
float Z=0;
void scene(){
	glPushMatrix();
	glBegin(GL_POLYGON);//river lower boundry
	glColor3f(1.0,0.6,0.3);//greycolor
	glVertex3f(-4.5,-0.4,0.0);
	glVertex3f(-4.5,-0.8,0.0);
	glVertex3f(5.0,-0.8,0.0);
	glVertex3f(5.0,-0.4,0.0);
	glVertex3f(3.0,-0.38,0.0);
	glVertex3f(2.0,-0.47,0.0);
	glVertex3f(1.0,-0.38,0.0);
	glVertex3f(0.0,-0.42,0.0);
	glVertex3f(-1.5,-0.4,0.0);
	glVertex3f(-2.5,-0.45,0.0);
	glVertex3f(-3.0,-0.35,0.0);
	glVertex3f(-4.0,-0.38,0.0);
	glEnd();
	glBegin(GL_POLYGON);//river upper boundry
	glColor3f(1.0,0.6,0.3);//greycolor
	glVertex3f(-4.5,0.4,0.0);
	glVertex3f(-4.5,0.8,0.0);
	glVertex3f(5.0,0.8,0.0);
	glVertex3f(5.0,0.4,0.0);
	glVertex3f(4.0,0.35,4.0);
	glVertex3f(2.0,0.45,0.0);
	glVertex3f(0.0,0.32,0.0);
	glVertex3f(-1.5,0.4,0.0);
	glVertex3f(-2.5,0.35,0.0);
	glVertex3f(-3.0,0.45,0.0);
	glVertex3f(-4.0,0.5,0.0);
	glEnd();
	glBegin(GL_POLYGON);//upper field
	glColor3f(0.0,1.0,0.0);//greencolor
	glVertex3f(-4.5,0.8,0.0);
	glVertex3f(-4.5,3.5,0.0);
	glVertex3f(5.0,3.5,0.0);
	glVertex3f(5.0,0.8,0.0);
	glEnd();
	glBegin(GL_POLYGON);//lower boundry
	glColor3f(0.0,1.0,0.0);//greencolor
	glVertex3f(-4.5,-0.8,0.0);
	glVertex3f(-4.5,-3.5,0.0);
	glVertex3f(5.0,-3.5,0.0);
	glVertex3f(5.0,-0.8,0.0);
	glEnd();
	glBegin(GL_POLYGON);//water
	glColor3f(0.5,0.6,0.9);
	glVertex3f(-4.5,0.4,0.0);
	glVertex3f(-4.5,0.4,0.0);
	glVertex3f(-4.0,0.5,0.0);
	glVertex3f(-3.0,0.45,0.0);
	glVertex3f(-2.5,0.35,0.0);
	glVertex3f(-1.5,0.4,0.0);
	glVertex3f(0.0,0.32,0.0);
	glVertex3f(2.0,0.45,0.0);
	glVertex3f(4.0,0.35,0.0);
	glVertex3f(5.0,0.4,0.0);
	glVertex3f(5.0,-0.4,0.0);
	glVertex3f(3.0,-0.38,0.0);
	glVertex3f(2.0,-0.47,0.0);
	glVertex3f(1.0,-0.4,0.0);
	glVertex3f(0.0,-0.42,0.0);
	glVertex3f(-1.5,-0.4,0.0);
	glVertex3f(-2.5,-0.45,0.0);
	glVertex3f(-3.0,-0.35,0.0);
	glVertex3f(-4.0,-0.38,0.0);
	glVertex3f(-4.5,-0.4,0.0);
	glEnd();
	
	glPopMatrix();
}
void DrawCircle(float cx, float cy, float r, int num_segments)
{
	glBegin(GL_TRIANGLE_FAN);
	for (int ii = 0; ii < num_segments; ii++)
	{
		float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle 

		float x = r * cosf(theta);//calculate the x component 
		float y = r * sinf(theta);//calculate the y component 

		glVertex2f(x + cx, y + cy);//output vertex 

	}
	glEnd();
}

void tree()
{
	glPushMatrix();

	glBegin(GL_POLYGON); //Tree 1
	glColor3f(0.6,0.3,0.0);
	glVertex3f(-1.5, 0.85, 0.0);
	glVertex3f(-1.75, 0.84, 0.0);
	glVertex3f(-1.75, 1.5, 0.0);
	glVertex3f(-1.5, 1.5, 0.0);
	glEnd();
	glBegin(GL_POLYGON);//Tree 2
	glColor3f(0.6,0.3,0.0);
	glVertex3f(-3.0,0.82,0.0);
	glVertex3f(-3.25,0.81,0.0);
	glVertex3f(-3.25,1.2,0.0);
	glVertex3f(-3.0,1.1,0.0);
	glEnd();
	glBegin(GL_POLYGON);//Tree 4
	glColor3f(0.6,0.3,0.0);
	glVertex3f(2.6,1.0,0.0);
	glVertex3f(2.87,1.0,0.0);
	glVertex3f(2.87,1.5,0.0);
	glVertex3f(2.6,1.45,0.0);
	glEnd();

	glBegin(GL_POLYGON);//Tree 3
	glColor3f(0.6,0.3,0.0);
	glVertex3f(1.48,0.70,0.0);
	glVertex3f(1.73,0.70,0.0);
	glVertex3f(1.73,1.5,0.0);
	glVertex3f(1.49,1.5,0.0);
	glEnd();
	
	
	glColor3f(0.0, 0.7, 0.1);//tree 4
	DrawCircle(1.58, 1.70, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(1.35, 1.40, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(1.81, 1.40, 0.25, 20);
	
	glColor3f(0.0, 0.7, 0.1);//tree 2
	DrawCircle(-3.29, 1.30, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(-3.0, 1.20, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(-3.1, 1.50, 0.25, 20);
	
	
	glColor3f(0.0, 0.7, 0.1);//tree1
	DrawCircle(-1.58, 1.70, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(-1.35, 1.50, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(-1.81, 1.50, 0.25, 20);
	
	
	glColor3f(0.0, 0.7, 0.1);//tree 3
	DrawCircle(2.71, 1.70, 0.25, 20); 
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(2.48, 1.50, 0.25, 20);
	glColor3f(0.0, 0.7, 0.1);
	DrawCircle(2.94, 1.50, 0.25, 20);
	glPopMatrix();
}
void drawboat(float f)
{
	glPushMatrix();
	glBegin(GL_POLYGON);//bottom square horizontal
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-3.1,-0.1,1.0);
	glVertex3f(-3.1,-0.1,-1.0);
	glVertex3f(-2.6,-0.1,-1.0);
	glVertex3f(-2.6,-0.1,1.0);
	glEnd();
	glBegin(GL_POLYGON);//top square horizontal
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-3.2,0.2,0.2);
	glVertex3f(-3.2,0.2,-0.2);
	glVertex3f(-2.6,0.2,-0.2);
	glVertex3f(-2.6,0.2,0.2);
	glEnd();
	glBegin(GL_POLYGON);//up vertical
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-2.6,-0.1,0.1);
	glVertex3f(-2.6,-0.1,-0.1);
	glVertex3f(-2.6,0.2,-0.2);
	glVertex3f(-2.6,0.2,0.2);
	glEnd();
	glBegin(GL_POLYGON);//down vertical 
	glColor3f(0.6, 0.3, 0.4); 
	glVertex3f(-3.1,-0.1,0.1);
	glVertex3f(-3.1,-0.1,-0.1);
	glVertex3f(-3.2,0.2,-0.2);
	glVertex3f(-3.2,0.2,0.2);
	glEnd();
	glBegin(GL_POLYGON);//left vertical
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-3.1,-0.1,-0.1);
	glVertex3f(-3.2,0.2,-0.2);
	glVertex3f(-2.6,0.2,-0.2);
	glVertex3f(-2.6,-0.1,-0.1);
	glEnd();
	glBegin(GL_POLYGON);//right vertical
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-3.1,-0.1,0.1);
	glVertex3f(-3.2,0.2,0.2);
	glVertex3f(-2.6,0.2,0.2);
	glVertex3f(-2.6,-0.1,0.1);
	glEnd();
	glBegin(GL_POLYGON);//TOP Triangle
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-2.6,0.2,-2.6);
	glVertex3f(-2.6,0.2,-2.6);
	glVertex3f(-2.3,0.2,0.0);
	glEnd();
	glBegin(GL_POLYGON);//DOWN Triangle
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-2.6,-0.1,-0.1);
	glVertex3f(-2.6,-0.1,0.1);
	glVertex3f(-2.6,0.2,0.0);
	glEnd();
	glBegin(GL_POLYGON);//LEFT Triangle
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-2.6,-0.1,-0.1);
	glVertex3f(-2.6,0.2,-0.2);
	glVertex3f(-2.3,0.2,0.0);
	glEnd();
	glBegin(GL_POLYGON);//RIGHT Triangle
	glColor3f(0.6, 0.3, 0.4);
	glVertex3f(-2.6,-0.1,0.1);
	glVertex3f(-2.6,0.2,0.2);
	glVertex3f(-2.3,0.2,0.0);
	glEnd();
	glBegin(GL_POLYGON); //Wall above
	glColor3f(0.3,0.1,0.5);
	glVertex3f(-3.1,0.2,0.2);
	glVertex3f(-3.1,0.4,0.2);
	glVertex3f(-2.65,0.5,0.2);
	glVertex3f(-2.65,0.2,0.2);
	glEnd();
	glBegin(GL_POLYGON);//Roof above wall
	glColor3f(0.6,0.3,0.4);
	glVertex3f(-3.1,0.4,0.2);
	glVertex3f(-2.65,0.5,0.2);
	glVertex3f(-2.65,0.55,0.2);
	glVertex3f(-3.1,0.45,0.2);
	glEnd();
	glBegin(GL_POLYGON);//Window in wall
	glColor3f(0.6,0.3,0.4);
	glVertex3f(-2.85,0.32,0.0);
	glVertex3f(-2.75,0.32,0.0);
	glVertex3f(-2.75,0.42,0.0);
	glVertex3f(-2.85,0.42,0.0);
	glEnd();
	glFlush();
	glPopMatrix();
}
void keyboard(unsigned char key, int x, int y)
{

	switch (key) {
	
	case 'd':		//boat start moving forward
	case 'D':
		status = 1;
		break;
	case 'a':	//boat start moving backward
	case 'A':
		status = 2;
		break;
	/*case 'w':
	case 'W':
		status = 3;
		break;
	case 's':
	case 'S':
		status = 4;
		break;
	*/
	case 'H':		//boat hault or stop
	case 'h':
		status = 0;
		break; v
	default:
		break;
	}
}
void boat()
{	
	int i;
	if (status == 1)
	{	
		X += 0.0009;
		if(X>8)
		{
			X=-3;  
		}		//glTranslatef(boatX, boatY, boatZ);
	}
	else if(status==2)
	{
		X -= 0.0009;
		if (X< (-5))
		{
			X =+8;
		}
	}
	/*else if(status==3)
	{	
		for(i=1;i<2;i++)
		{
		//Y = Y+0.001;
		glTranslatef(X, Y+0.001, Z);
		}
	}
	else if(status == 4)
	{
		for(i=1;i<2;i++)
		{
		//Y = Y-0.001;
		glTranslatef(X, Y-0.001, Z);
		}
	}*/	
	glPushMatrix();
	glTranslatef(X, Y, Z);
	drawboat(1);
	glPopMatrix();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	scene();
	tree();
	boat();
	//glLoadIdentity();
	gluLookAt(-3.4, 0.4, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0); 
	glFlush();
	glutPostRedisplay();
	glutSwapBuffers();
}
void myReshape(	int w, int h)
{
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if(w<=h)
	{
		glOrtho(-2.0,2.0,-2.0*(GLfloat)h/(GLfloat)w,2.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
	}
	else
	{
		glOrtho(-2.0*(GLfloat)w/(GLfloat)h,2.0*(GLfloat)w/(GLfloat)h,-2.0,2.0,-10.0,10.0);
	}
	glMatrixMode(GL_MODELVIEW);

}
int main(int argc, char **argv)
{	

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1250,600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("My Driving Boat In River");
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(myReshape);
	
	glutDisplayFunc(display);
	//glEnable(GL_DEPTH_TEST);
	glClearColor(1.0,1.0,1.0,1.0);
	glutMainLoop();
}

