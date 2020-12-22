#include <stdio.h>
#include <GL/glut.h>
#include <math.h> 
#define PI 3.14159265f

GLfloat radius = 2;   // Radius of the bouncing ball
GLfloat xx=18,yy=18;
GLfloat flag=0;
float theta; //To stare radians of the circle
void display(void)
{
  glClear( GL_COLOR_BUFFER_BIT);

   
//drawing blocks from bottom up left to right upto top
//begin blue
  glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
 glVertex3f(4.0, 0.0, 0.0);
glVertex3f(8.0, 0.0, 0.0);
 glVertex3f(8.0, 4.0, 0.0);
glVertex3f(4.0, 4.0, 0.0);
 
 glEnd();
//end

//begin orange
glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex3f(8.0, 0.0, 0.0);
glVertex3f(12.0, 0.0, 0.0);
 glVertex3f(12.0, 4.0, 0.0);
glVertex3f(8.0, 4.0, 0.0);
 glEnd();
//end

//begin blue
  glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
 glVertex3f(12.0, 0.0, 0.0);
glVertex3f(16.0, 0.0, 0.0);
 glVertex3f(16.0, 4.0, 0.0);
glVertex3f(12.0, 4.0, 0.0);
 
 glEnd();
//end

//begin orange
glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex3f(8.0, 0.0, 0.0);
glVertex3f(12.0, 0.0, 0.0);
 glVertex3f(12.0, 4.0, 0.0);
glVertex3f(8.0, 4.0, 0.0);
 glEnd();
//end

//begin green
 glColor3f(0.0, 1.0, 0.0);
 glBegin(GL_POLYGON);
 glVertex3f(16.0, 0.0, 0.0);
  glVertex3f(20.0, 0.0, 0.0);
   glVertex3f(20.0, 4.0, 0.0);
  glVertex3f(16.0, 4.0, 0.0);
  glEnd();
//end

//begin blue
  glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
 glVertex3f(8.0, 4.0, 0.0);
glVertex3f(12.0, 4.0, 0.0);
 glVertex3f(12.0, 8.0, 0.0);
glVertex3f(8.0, 8.0, 0.0);
 
 glEnd();
//end

//begin orange
glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex3f(12.0, 4.0, 0.0);
glVertex3f(16.0, 4.0, 0.0);
 glVertex3f(16.0, 8.0, 0.0);
glVertex3f(12.0, 8.0, 0.0);
 glEnd();
//end

//begin blue
  glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
 glVertex3f(16.0, 4.0, 0.0);
glVertex3f(20.0, 4.0, 0.0);
 glVertex3f(20.0, 8.0, 0.0);
glVertex3f(16.0, 8.0, 0.0);
 glEnd();
//end

//begin blue
  glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
 glVertex3f(12.0, 8.0, 0.0);
glVertex3f(16.0, 8.0, 0.0);
 glVertex3f(16.0, 12.0, 0.0);
glVertex3f(12.0, 12.0, 0.0);
 glEnd();
//end

//begin orange
  glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex3f(16.0, 8.0, 0.0);
glVertex3f(20.0, 8.0, 0.0);
 glVertex3f(20.0, 12.0, 0.0);
glVertex3f(16.0, 12.0, 0.0);
 glEnd();
//end

//begin blue
  glColor3f(0.0, 0.0, 1.0);
 glBegin(GL_POLYGON);
 glVertex3f(16.0, 12.0, 0.0);
glVertex3f(20.0, 12.0, 0.0);
 glVertex3f(20.0, 16.0, 0.0);
glVertex3f(16.0, 16.0, 0.0);
 glEnd();
//end

//drawing circle at the top

glBegin(GL_POLYGON);
      glColor3f(0.329412, 0.329412, 0.329412);  
      //glVertex2f(18, 18);       // Center of circle
      for(int i=0;i<360;i++)
      {
          theta=i*PI/180;
          glVertex2f(xx+radius*cos(theta),yy+radius*sin(theta));
      }
   glEnd();
  

 glFlush();
 // Updating and redisplaying 
 if(flag==0)
 {
    xx=xx-4;
    flag=1;
 }
 else
 {
    yy=yy-4;
    flag=0;
 } 
   
   if(xx<0 && yy<0)
   {
      //starting again if all steps are completed
      xx=18;
      yy=18;
   }
   glutPostRedisplay();

}

int main(int argc, char **argv)
{

 glutInit(&argc, argv);
 glutInitDisplayMode ( GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);

 glutInitWindowPosition(100,100);
 glutInitWindowSize(300,300);
 glutCreateWindow ("IIT2018139_c3");

 glClearColor(1.0, 1.0, 1.0, 0.0);         
 glMatrixMode(GL_PROJECTION);              
 glLoadIdentity();                           
 glOrtho(0.0, 20.0, 0.0, 20.0, -1.0, 1.0);  
 glutDisplayFunc(display);
 glutDisplayFunc(display);
 glutMainLoop();

 return 0;
}