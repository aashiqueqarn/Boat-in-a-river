# Boat-in-a-river
OpenGL in C  For driving a boat in a river.
In this program, there is a river flowing in between a land unit.And a boat needs to be driven through that river.
First we need to specify what type of boat that we need to make.
The boat should be simple and eaisy to implement.
We start with header files. Header files used are:
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

So we draw our boat using Opengl inbuilt function
glBegin(GL_POLYGON);
glVertex3d(x,y,z);
'
'
'
glEnd();
We inserted some coordinates in above function.
Now we need to choose area of window i.e windowsize from function glutInitWindowSize(Xsize,Ysize);
The functions that we created for this program are:
drawboat()//this function uses some coordinate to make a boat.
scene()//this function is used to create scene or sorrunding.
boat()//this function is used to show behaviour or working of boat.
drawCircle()//this function is used to make green part of tree.
tree()//This function creates tree at particular coordinates.
keyboard()//this function controls movement of boat.
display()//This function displays the graphics output.
myReshape()//This funtion keeps everything as it was initially.
main()//Probably this function is mother of everyfunction, Because every function is called in main functin at the time of execution.
