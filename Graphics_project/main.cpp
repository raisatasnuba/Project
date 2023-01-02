#include<cstdio>
#include<math.h>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
//BOAT & Ship
GLfloat positionB1 = 0.0f;
GLfloat speedB1 = 0.02f;
GLfloat positionB2 = 0.0f;
GLfloat speedB2 = 0.03f;
GLfloat positionA1 = 0.0f;
GLfloat speedA1 = 0.05f;
GLfloat positionC1 = 0.0f;
GLfloat speedC1 = 0.003f;
GLfloat positionC2 = 0.0f;
GLfloat speedC2 = 0.004f;
GLfloat positionC3 = 0.0f;
GLfloat speedC3 = 0.004f;
GLfloat positionC4 = 0.0f;
GLfloat speedC4 = 0.005f;
GLfloat positionC5 = 0.0f;
GLfloat speedC5 = 0.003f;
GLfloat positionBD1 = 0.0f;
GLfloat speedBD1 = 0.008f;
GLfloat positionBD2 = 0.0f;
GLfloat speedBD2 = 0.009f;
GLfloat positionBD3 = 0.0f;
GLfloat speedBD3 = 0.007f;
GLfloat positionBD4 = 0.0f;
GLfloat speedBD4 = 0.1f;
GLfloat positionBD5 = 0.0f;
GLfloat speedBD5 = 0.009f;
GLfloat positionRain = 0.0f;
GLfloat speedRain = 0.1f;



void update(int value)
{
    if(positionB1 >1.0)
        positionB1 = -1.2f;
        if(positionB2 >1.0)
        positionB2 = -1.2f;
        if(positionA1 >1.0)
        positionA1 = -1.2f;
        if(positionC1 >1.0)
        positionC1 = -1.2f;
        if(positionC2 >1.0)
        positionC2 = -1.2f;
        if(positionC3 >1.0)
        positionC3 = -1.2f;
        if(positionC4 >1.0)
        positionC4 = -1.2f;
        if(positionC5 >1.0)
        positionC5 = -1.2f;
        if(positionBD1 >1.0)
        positionBD1 = -1.2f;
        if(positionBD2 >1.0)
        positionBD2 = -1.2f;
        if(positionBD3 >1.0)
        positionBD3 = -1.2f;
        if(positionBD4 >1.0)
        positionBD4 = -1.2f;
        if(positionBD5 >1.0)
        positionBD5 = -1.2f;

if(positionRain >1.0)
        positionRain = -1.2f;



        positionB1 += speedB1;
         positionB2 += speedB2;
         positionA1 += speedA1;
         positionC1 += speedC1;
          positionC2 += speedC2;
           positionC3 += speedC3;
            positionC4 += speedC4;
             positionC5 += speedC5;
             positionBD1 += speedBD1;
              positionBD2 += speedBD2;
               positionBD3 += speedBD3;
                positionBD4 += speedBD4;
                 positionBD5 += speedBD5;
                  positionRain += speedRain;









        glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}
void circle(GLfloat x, GLfloat y, GLfloat r)
{
    int tc=100;
    GLfloat tpi=2.0f *3.141592653589793238;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i=0; i<=tc; i++)
    {
        glVertex2f(x+ (r*cos( (i*tpi)/tc)), y+ (r*sin( (i*tpi)/tc)));
    }
    glEnd();
}
void init() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   gluOrtho2D(-200.0,200.0,-200.0,200.0);
}
void day() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
///River
   glBegin(GL_QUADS);
      glColor3ub(33,150,243);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f( 1.0f, -1.0f);
      glVertex2f( 1.0f,  -0.65f);
      glVertex2f(-1.0f, -0.65f);
      glEnd();
//Boat1
glTranslatef(positionB1,0.0f, 0.0f);
glBegin(GL_QUADS);
      glColor3ub(189, 0, 0); ///1
      glVertex2f(-0.5f, -0.96f);
      glVertex2f(-0.1f, -0.96f);
      glVertex2f( 0.0f, -0.9f);
      glVertex2f(-0.5f, -0.9f);
      glEnd();
glBegin(GL_QUADS); ///2
      glColor3ub(255, 255, 255);
      glVertex2f(-0.45f, -0.9f);
      glVertex2f(-0.1f, -0.9f);
      glVertex2f(-0.15f,-0.85f);
      glVertex2f(-0.45f, -0.85f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(189, 0, 0);
      glVertex2f(-0.4f, -0.85f);
      glVertex2f(-0.2f, -0.85f);
      glVertex2f(-0.25f,-0.8f);
      glVertex2f(-0.4f, -0.8f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(255, 255, 255);
      glVertex2f(-0.35f, -0.8f);
      glVertex2f(-0.28f, -0.8f);
      glVertex2f(-0.3f,-0.75f);
      glVertex2f(-0.35f, -0.75f);
      glEnd();
//Boat2
      glTranslatef(positionB2,0.0f, 0.0f);
      glBegin(GL_QUADS); ///1
      glColor3ub(60, 39, 15);
      glVertex2f(0.4f, -0.96f);
      glVertex2f(0.8f,-0.96f);
      glVertex2f(0.85f,-0.9f);
      glVertex2f(0.35f, -0.9f);
      glEnd();
glBegin(GL_QUADS); ///2
      glColor3ub(213, 159, 236);
      glVertex2f(0.43f, -0.9f);
      glVertex2f(0.77f,-0.9f);
      glVertex2f(0.77f,-0.87f);
      glVertex2f(0.43f, -0.87f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(0, 0, 0);
      glVertex2f(0.54f, -0.87f);
      glVertex2f(0.56f,-0.87f);
      glVertex2f(0.56f,-0.84f);
      glVertex2f(0.54f, -0.84f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(0, 0, 0);
      glVertex2f(0.57f, -0.87f);
      glVertex2f(0.59f,-0.87f);
      glVertex2f(0.59f,-0.84f);
      glVertex2f(0.57f, -0.84f);
      glEnd();
glBegin(GL_TRIANGLES); ///5
      glColor3ub(235, 118, 166);
      glVertex2f(0.46f, -0.84f);
      glVertex2f(0.56f,-0.84f);
      glVertex2f(0.56f,-0.7f);
      glEnd();
glBegin(GL_TRIANGLES); ///6
      glColor3ub(194, 0, 194);
      glVertex2f(0.57f, -0.84f);
      glVertex2f(0.7f,-0.84f);
      glVertex2f(0.57f,-0.7f);
      glEnd();
      glPopMatrix();


      glPushMatrix();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, -0.65f);
      glVertex2f(-0.9f, -0.65f);
      glVertex2f(-0.9f, -0.6f);
      glVertex2f(-1.0f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.9f, -0.65f);
      glVertex2f(-0.7f, -0.65f);
      glVertex2f(-0.7f, -0.6f);
      glVertex2f(-0.9f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f, -0.65f);
      glVertex2f(-0.5f, -0.65f);
      glVertex2f(-0.5f, -0.6f);
      glVertex2f(-0.7f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f, -0.65f);
      glVertex2f(-0.3f, -0.65f);
      glVertex2f(-0.3f, -0.6f);
      glVertex2f(-0.5f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f, -0.65f);
      glVertex2f(-0.1f, -0.65f);
      glVertex2f(-0.1f, -0.6f);
      glVertex2f(-0.3f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.1f, -0.65f);
      glVertex2f(0.1f, -0.65f);
      glVertex2f(0.1f, -0.6f);
      glVertex2f(-0.1f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.1f, -0.65f);
      glVertex2f(0.3f, -0.65f);
      glVertex2f(0.3f, -0.6f);
      glVertex2f(0.1f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.3f, -0.65f);
      glVertex2f(0.5f, -0.65f);
      glVertex2f(0.5f, -0.6f);
      glVertex2f(0.3f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f, -0.65f);
      glVertex2f(0.7f, -0.65f);
      glVertex2f(0.7f, -0.6f);
      glVertex2f(0.5f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.7f, -0.65f);
      glVertex2f(0.9f, -0.65f);
      glVertex2f(0.9f, -0.6f);
      glVertex2f(0.7f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.9f, -0.65f);
      glVertex2f(1.0f, -0.65f);
      glVertex2f(1.0f, -0.6f);
      glVertex2f(0.9f, -0.6f);
      glEnd();


///UpperSide
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, -0.05f);
      glVertex2f(-0.9f, -0.05f);
      glVertex2f(-0.9f, 0.0f);
      glVertex2f(-1.0f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.9f,-0.05f);
      glVertex2f(-0.7f, -0.05f);
      glVertex2f(-0.7f, -0.0f);
      glVertex2f(-0.9f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f,-0.05f);
      glVertex2f(-0.5f, -0.05f);
      glVertex2f(-0.5f, -0.0f);
      glVertex2f(-0.7f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f,-0.05f);
      glVertex2f(-0.3f, -0.05f);
      glVertex2f(-0.3f, -0.0f);
      glVertex2f(-0.5f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f,-0.05f);
      glVertex2f(-0.1f, -0.05f);
      glVertex2f(-0.1f, -0.0f);
      glVertex2f(-0.3f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.1f,-0.05f);
      glVertex2f(0.1f, -0.05f);
      glVertex2f(0.1f, -0.0f);
      glVertex2f(-0.1f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.1f,-0.05f);
      glVertex2f(0.3f, -0.05f);
      glVertex2f(0.3f, -0.0f);
      glVertex2f(0.1f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.3f,-0.05f);
      glVertex2f(0.5f, -0.05f);
      glVertex2f(0.5f, -0.0f);
      glVertex2f(0.3f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f,-0.05f);
      glVertex2f(0.7f, -0.05f);
      glVertex2f(0.7f, -0.0f);
      glVertex2f(0.5f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.7f,-0.05f);
      glVertex2f(0.9f, -0.05f);
      glVertex2f(0.9f, -0.0f);
      glVertex2f(0.7f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.9f,-0.05f);
      glVertex2f(1.0f, -0.05f);
      glVertex2f(1.0f, -0.0f);
      glVertex2f(0.9f, 0.0f);
      glEnd();
/// Road
glBegin(GL_QUADS);
      glColor3ub(92, 92, 92);
      glVertex2f(-1.0f,-0.6f);
      glVertex2f(1.0f, -0.6f);
      glVertex2f(1.0f, -0.05f);
      glVertex2f(-1.0f,-0.05f);
      glEnd();
///Road Middle Line

glBegin(GL_QUADS); ///1
      glColor3ub(255, 255, 0);
      glVertex2f(-1.0f,-0.36f);
      glVertex2f(-0.8f, -0.36f);
      glVertex2f(-0.8f, -0.33f);
      glVertex2f(-1.0f,-0.33f);
      glEnd();

glBegin(GL_QUADS); ///2
      glColor3ub(255, 255, 0);
      glVertex2f(-0.7f,-0.36f);
      glVertex2f(-0.5f, -0.36f);
      glVertex2f(-0.5f, -0.33f);
      glVertex2f(-0.7f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(255, 255, 0);
      glVertex2f(-0.4f,-0.36f);
      glVertex2f(-0.2f, -0.36f);
      glVertex2f(-0.2f, -0.33f);
      glVertex2f(-0.4f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(255, 255, 0);
      glVertex2f(-0.1f,-0.36f);
      glVertex2f(0.1f, -0.36f);
      glVertex2f(0.1f, -0.33f);
      glVertex2f(-0.1f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///5
      glColor3ub(255, 255, 0);
      glVertex2f(0.2f,-0.36f);
      glVertex2f(0.4f, -0.36f);
      glVertex2f(0.4f, -0.33f);
      glVertex2f(0.2f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///6
      glColor3ub(255, 255, 0);
      glVertex2f(0.5f,-0.36f);
      glVertex2f(0.7f, -0.36f);
      glVertex2f(0.7f, -0.33f);
      glVertex2f(0.5f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///7
      glColor3ub(255, 255, 0);
      glVertex2f(0.8f,-0.36f);
      glVertex2f(1.0f, -0.36f);
      glVertex2f(1.0f, -0.33f);
      glVertex2f(0.8f,-0.33f);
      glEnd();
 //end road
 ///sky
glBegin(GL_QUADS);
    glColor3ub(147,222,251);
    glVertex2f(-1,1);
    glVertex2f(-1,0.0);
    glVertex2f(1,0.0);
    glVertex2f(1,1);
    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(positionA1,0.0f, 0.0f);
///Aeroplane
    glBegin(GL_POLYGON);///Body
    glColor3ub(0, 119, 230);
    glVertex2f( -0.66f, 0.7f);
    glVertex2f( -0.66f, 0.69f);
    glVertex2f( -0.59f, 0.65f);
    glVertex2f( -0.38f, 0.65f);
    glVertex2f( -0.36f, 0.67f);
    glVertex2f( -0.36f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.4f, 0.7f);
    glEnd();
   glBegin(GL_QUADS);///Engine
    glColor3ub(0,0,0);
    glVertex2f( -0.49f, 0.64f);
    glVertex2f( -0.49f, 0.62f);
    glVertex2f( -0.47f, 0.62f);
    glVertex2f( -0.47f, 0.64f);
    glEnd();
    glBegin(GL_QUADS);///Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.49f, 0.66f);
    glVertex2f( -0.55f, 0.61f);
    glVertex2f( -0.53f, 0.61f);
    glVertex2f( -0.45f, 0.66f);
    glEnd();
    glBegin(GL_QUADS);///Back Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.53f, 0.73f);
    glVertex2f( -0.5f, 0.7f);
    glVertex2f( -0.47f, 0.7f);
    glVertex2f( -0.51f, 0.73f);
    glEnd();
    glBegin(GL_QUADS);///Tail Top Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.63f, 0.74f);
    glVertex2f( -0.62f, 0.7f);
    glVertex2f( -0.59f, 0.7f);
    glVertex2f( -0.62f, 0.74f);
    glEnd();
    glBegin(GL_QUADS);///Tail Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.61f, 0.69f);
    glVertex2f( -0.64f, 0.67f);
    glVertex2f( -0.61f, 0.67f);
    glVertex2f( -0.58f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);///Front
    glColor3ub(255,255,255);
    glVertex2f( -0.4f, 0.69f);
    glVertex2f( -0.4f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.39f, 0.69f);
    glEnd();
   glPointSize(3);///Windows
   glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   glVertex2f(-0.57f,0.68f);
   glVertex2f(-0.53f,0.68f);
   glVertex2f(-0.49f,0.68f);
   glVertex2f(-0.46f,0.68f);
   glVertex2f(-0.43f,0.68f);
   glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(positionC1,0.0f, 0.0f);
    circle(-1.0f, 0.7f, 0.05f);
    circle(-0.9f, 0.7f, 0.05f);
    circle(-0.95f, 0.73f, 0.05f);
    circle(-0.95f, 0.68f, 0.05f);
glTranslatef(positionC2,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud2
    circle(-0.4f, 0.8f, 0.05f);
    circle(-0.3f, 0.8f, 0.05f);
    circle(-0.35f, 0.83f, 0.05f);
    circle(-0.35f, 0.78f, 0.05f);
glTranslatef(positionC3,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud3
    circle(0.1f, 0.6f, 0.05f);
    circle(0.2f, 0.6f, 0.05f);
    circle(0.15f, 0.63f, 0.05f);
    circle(0.15f, 0.58f, 0.05f);
    glTranslatef(positionC4,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud4
    circle(0.4f, 0.9f, 0.05f);
    circle(0.5f, 0.9f, 0.05f);
    circle(0.45f, 0.93f, 0.05f);
    circle(0.45f, 0.88f, 0.05f);
    glTranslatef(positionC5,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud5
    circle(0.6f, 0.6f, 0.05f);
    circle(0.7f, 0.6f, 0.05f);
    circle(0.65f, 0.58f, 0.05f);
    circle(0.65f, 0.64f, 0.05f);
 glEnd();
 ///Bird
glTranslatef(positionBD1,0.0f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD2, 0.02f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD3, 0.05f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD4, 0.05f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD5, 0.08f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
///end bird
glPopMatrix();
glPushMatrix();
///Building Start
///Building11
glBegin(GL_POLYGON);
    glColor3ub(145,57,23);///Body
    glVertex2f(-.94,0.4);
    glVertex2f(-.8,0.4);
    glVertex2f(-.75,.35);
    glVertex2f(-.75,0.0);
    glVertex2f(-.68,0.0);
    glVertex2f(-.68,.53);
    glVertex2f(-.94,.53);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.68f,0.53f);
    glVertex2f(-.68f,0.0f);
    glVertex2f(-.94f,0.53f);
    glVertex2f(-.68f,0.53f);
    glVertex2f(-.71f,0.53f);
    glVertex2f(-.71f,0.0f);
    glVertex2f(-.75f,0.53f);
    glVertex2f(-.75f,0.0f);
    glVertex2f(-.79f,0.53f);
    glVertex2f(-.79f,0.0f);
    glVertex2f(-.83f,0.53f);
    glVertex2f(-.83f,0.0f);
    glVertex2f(-.87f,0.53f);
    glVertex2f(-.87f,0.0f);
    glVertex2f(-.91f,0.53f);
    glVertex2f(-.91f,0.0f);
    glVertex2f(-.94f,0.53f);
    glVertex2f(-.94f,0.0f);
    glEnd();
///Building31
glBegin(GL_POLYGON);
    glColor3ub(0, 97, 97);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.26,0.0);
    glVertex2f(-0.26,0.3);
    glVertex2f(-0.14,0.3);
    glVertex2f(-0.14,0.55);
    glVertex2f(-0.4,0.55);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.14f,0.5f);
    glVertex2f(-.4f,0.55f);
    glVertex2f(-.14f,0.55f);
    glVertex2f(-.4f,0.45f);
    glVertex2f(-.14f,0.45f);
    glVertex2f(-.4f,0.4f);
    glVertex2f(-.14f,0.4f);
    glVertex2f(-.4f,0.35f);
    glVertex2f(-.14f,0.35f);
    glVertex2f(-.4f,0.3f);
    glVertex2f(-.14f,0.3f);
    glVertex2f(-.4f,0.25f);
    glVertex2f(-.14f,0.25f);
    glVertex2f(-.4f,0.2f);
    glVertex2f(-.14f,0.2f);
    glVertex2f(-.4f,0.15f);
    glVertex2f(-.14f,0.15f);
    glVertex2f(-.4f,0.1f);
    glVertex2f(-.14f,0.1f);
    glVertex2f(-.4f,0.05f);
    glVertex2f(-.14f,0.05f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.14f,0.0f);
    glVertex2f(-.4f,0.55f);
    glVertex2f(-.4f,0.0f);
glVertex2f(-.14f,0.55f);
    glVertex2f(-.14f,0.0f);
    glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.29f,0.5f);
      glVertex2f(-0.23f, 0.5f);
      glVertex2f(-0.23f, 0.45f);
      glVertex2f(-0.29f, 0.45f);
      glEnd();
glBegin(GL_QUADS);///2
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.5f);
      glVertex2f(-0.15f, 0.5f);
      glVertex2f(-0.15f, 0.45f);
      glVertex2f(-0.21f, 0.45f);
      glEnd();
glBegin(GL_QUADS);///3
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.35f);
      glVertex2f(-0.23f, 0.35f);
      glVertex2f(-0.23f, 0.4f);
      glVertex2f(-0.29f, 0.4f);
      glEnd();
glBegin(GL_QUADS);///4
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.35f);
      glVertex2f(-0.15f, 0.35f);
      glVertex2f(-0.15f, 0.4f);
      glVertex2f(-0.21f, 0.4f);
      glEnd();
glBegin(GL_QUADS);///5
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.3f);
      glVertex2f(-0.15f, 0.3f);
      glVertex2f(-0.15f, 0.25f);
      glVertex2f(-0.21f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///6
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.3f);
      glVertex2f(-0.23f, 0.3f);
      glVertex2f(-0.23f, 0.25f);
      glVertex2f(-0.29f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///7
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.2f);
      glVertex2f(-0.23f, 0.2f);
      glVertex2f(-0.23f, 0.15f);
      glVertex2f(-0.29f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///8
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.1f);
      glVertex2f(-0.23f, 0.1f);
      glVertex2f(-0.23f, 0.05f);
      glVertex2f(-0.29f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///9
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.2f);
      glVertex2f(-0.15f, 0.2f);
      glVertex2f(-0.15f, 0.15f);
      glVertex2f(-0.21f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///10
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.1f);
      glVertex2f(-0.15f, 0.1f);
      glVertex2f(-0.15f, 0.05f);
      glVertex2f(-0.21f, 0.05f);
      glEnd();
///Building32
glBegin(GL_POLYGON);
    glColor3ub(206,218,126);
    glVertex2f(-.6,0.45);
    glVertex2f(-.4,0.45);
    glVertex2f(-.35,0.4);
    glVertex2f(-.35,0.0);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.3,0.5);
    glVertex2f(-.6,0.5);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.3f,0.5f);
    glVertex2f(-.6f,0.4f);
    glVertex2f(-.3f,0.4f);
    glVertex2f(-.6f,0.3f);
    glVertex2f(-.3f,0.3f);
    glVertex2f(-.6f,0.2f);
    glVertex2f(-.3f,0.2f);
    glVertex2f(-.6f,0.1f);
    glVertex2f(-.3f,0.1f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.3f,0.0f);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.5f,0.5f);
    glVertex2f(-.5f,0.0f);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.3f,0.5f);
    glVertex2f(-.3f,0.0f);
    glEnd();
  ///Building41
glBegin(GL_QUADS);///Body
      glColor3ub(224, 191, 0);
      glVertex2f(-0.03f,0.45f);
      glVertex2f(0.25f, 0.45f);
      glVertex2f(0.25f, 0.0f);
      glVertex2f(-0.03f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.01f,0.4f);
      glVertex2f(0.05f, 0.4f);
      glVertex2f(0.05f, 0.32f);
      glVertex2f(-0.01f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.07f,0.4f);
      glVertex2f(0.13f, 0.4f);
      glVertex2f(0.13f, 0.32f);
      glVertex2f(0.07f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.15f,0.4f);
      glVertex2f(0.21f, 0.4f);
      glVertex2f(0.21f, 0.32f);
      glVertex2f(0.15f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.01f,0.3f);
      glVertex2f(0.05f, 0.3f);
      glVertex2f(0.05f, 0.22f);
      glVertex2f(-0.01f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(-0.01f,0.2f);
      glVertex2f(0.05f, 0.2f);
      glVertex2f(0.05f, 0.12f);
      glVertex2f(-0.01f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(-0.01f,0.1f);
      glVertex2f(0.05f, 0.1f);
      glVertex2f(0.05f, 0.02f);
      glVertex2f(-0.01f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(0.07f,0.3f);
      glVertex2f(0.13f, 0.3f);
      glVertex2f(0.13f, 0.22f);
      glVertex2f(0.07f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(0.07f,0.2f);
      glVertex2f(0.13f, 0.2f);
      glVertex2f(0.13f, 0.12f);
      glVertex2f(0.07f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///9
      glVertex2f(0.07f,0.1f);
      glVertex2f(0.13f, 0.1f);
      glVertex2f(0.13f, 0.02f);
      glVertex2f(0.07f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///10
      glVertex2f(0.15f,0.3f);
      glVertex2f(0.21f, 0.3f);
      glVertex2f(0.21f, 0.22f);
      glVertex2f(0.15f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///11
      glVertex2f(0.15f,0.2f);
      glVertex2f(0.21f, 0.2f);
      glVertex2f(0.21f, 0.12f);
      glVertex2f(0.15f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///12
      glVertex2f(0.15f,0.1f);
      glVertex2f(0.21f, 0.1f);
      glVertex2f(0.21f, 0.02f);
      glVertex2f(0.15f, 0.02f);
      glEnd();
    ///Building51
glBegin(GL_QUADS);///Body
      glColor3ub(176,190,197);
      glVertex2f(0.33f,0.47f);
      glVertex2f(0.63f, 0.47f);
      glVertex2f(0.63f, 0.0f);
      glVertex2f(0.33f, 0.0f);
      glEnd();
glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(.33f,0.47f);
    glVertex2f(.33f,0.0f);
    glVertex2f(.63f,0.47f);
    glVertex2f(.63f,0.0f);
    glVertex2f(.38f,0.47f);
    glVertex2f(.38f,0.0f);
    glVertex2f(.43f,0.47f);
    glVertex2f(.43f,0.0f);
    glVertex2f(.48f,0.47f);
    glVertex2f(.48f,0.0f);
    glVertex2f(.53f,0.47f);
    glVertex2f(.53f,0.0f);
    glVertex2f(.58f,0.47f);
    glVertex2f(.58f,0.0f);
    glVertex2f(.33f,0.47f);
    glVertex2f(.63f,0.47f);
    glEnd();
///Building1
glBegin(GL_QUADS);///Body
      glColor3ub(43,149,159);
      glVertex2f(-0.99f,0.4f);
      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.99f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(37, 127, 135);
      glVertex2f(-0.8f,0.4f);
      glVertex2f(-0.75f, 0.35f);
      glVertex2f(-0.75f, 0.0f);
      glVertex2f(-0.8f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.97f,0.36f);
      glVertex2f(-0.91f, 0.36f);
      glVertex2f(-0.91f, 0.3f);
      glVertex2f(-0.97f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(-0.88f,0.36f);
      glVertex2f(-0.82f, 0.36f);
      glVertex2f(-0.82f, 0.3f);
      glVertex2f(-0.88f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(-0.97f,0.23f);
      glVertex2f(-0.91f, 0.23f);
      glVertex2f(-0.91f, 0.17f);
      glVertex2f(-0.97f, 0.17f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.88f,0.23f);
      glVertex2f(-0.82f, 0.23f);
      glVertex2f(-0.82f, 0.17f);
      glVertex2f(-0.88f, 0.17f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(-0.97f,0.1f);
      glVertex2f(-0.91f, 0.1f);
      glVertex2f(-0.91f, 0.04f);
      glVertex2f(-0.97f, 0.04f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(-0.88f,0.1f);
      glVertex2f(-0.82f, 0.1f);
      glVertex2f(-0.82f, 0.04f);
      glVertex2f(-0.88f, 0.04f);
      glEnd();

///Building2
glBegin(GL_QUADS);///Body
      glColor3ub(73, 146, 75);
      glVertex2f(-0.65f,0.45f);
      glVertex2f(-0.38f, 0.45f);
      glVertex2f(-0.38f, 0.0f);
      glVertex2f(-0.65f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(52, 129, 54);
      glVertex2f(-0.38f,0.45f);
      glVertex2f(-0.35f, 0.4f);
      glVertex2f(-0.35f, 0.0f);
      glVertex2f(-0.38f, 0.0f);
      glEnd();

glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.63f,0.4f);
      glVertex2f(-0.57f, 0.4f);
      glVertex2f(-0.57f, 0.33f);
      glVertex2f(-0.63f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(-0.55f,0.4f);
      glVertex2f(-0.49f, 0.4f);
      glVertex2f(-0.49f, 0.33f);
      glVertex2f(-0.55f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(-0.47f,0.4f);
      glVertex2f(-0.41f, 0.4f);
      glVertex2f(-0.41f, 0.33f);
      glVertex2f(-0.47f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.63f,0.29f);
      glVertex2f(-0.57f, 0.29f);
      glVertex2f(-0.57f, 0.23f);
      glVertex2f(-0.63f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(-0.63f,0.19f);
      glVertex2f(-0.57f, 0.19f);
      glVertex2f(-0.57f, 0.13f);
      glVertex2f(-0.63f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(-0.63f,0.09f);
      glVertex2f(-0.57f, 0.09f);
      glVertex2f(-0.57f, 0.03f);
      glVertex2f(-0.63f, 0.03f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(-0.55f,0.09f);
      glVertex2f(-0.49f, 0.09f);
      glVertex2f(-0.49f, 0.03f);
      glVertex2f(-0.55f, 0.03f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///9
      glVertex2f(-0.55f,0.19f);
      glVertex2f(-0.49f, 0.19f);
      glVertex2f(-0.49f, 0.13f);
      glVertex2f(-0.55f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///10
      glVertex2f(-0.55f,0.29f);
      glVertex2f(-0.49f, 0.29f);
      glVertex2f(-0.49f, 0.23f);
      glVertex2f(-0.55f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///11
      glVertex2f(-0.47f,0.29f);
      glVertex2f(-0.41f, 0.29f);
      glVertex2f(-0.41f, 0.23f);
      glVertex2f(-0.47f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///12
      glVertex2f(-0.47f,0.19f);
      glVertex2f(-0.41f, 0.19f);
      glVertex2f(-0.41f, 0.13f);
      glVertex2f(-0.47f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///13
      glVertex2f(-0.47f,0.09f);
      glVertex2f(-0.41f, 0.09f);
      glVertex2f(-0.41f, 0.03f);
      glVertex2f(-0.47f, 0.03f);
      glEnd();
///Building3
glBegin(GL_QUADS);///Body
      glColor3ub(209, 202, 211);
      glVertex2f(-0.26f,0.3f);
      glVertex2f(-0.07f, 0.3f);
      glVertex2f(-0.07f, 0.0f);
      glVertex2f(-0.26f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(191, 171, 198);
      glVertex2f(-0.07f,0.3f);
      glVertex2f(-0.05f, 0.25f);
      glVertex2f(-0.05f, 0.0f);
      glVertex2f(-0.07f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0,0,0);///1
      glVertex2f(-0.24f,0.24f);
      glVertex2f(-0.16f, 0.24f);
      glVertex2f(-0.16f, 0.16f);
      glVertex2f(-0.24f, 0.16f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0,0,0);///2
      glVertex2f(-0.24f,0.13f);
      glVertex2f(-0.16f, 0.13f);
      glVertex2f(-0.16f, 0.05f);
      glVertex2f(-0.24f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(-0.14f,0.24f);
      glVertex2f(-0.08f, 0.24f);
      glVertex2f(-0.08f, 0.16f);
      glVertex2f(-0.14f, 0.16f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.14f,0.13f);
      glVertex2f(-0.08f, 0.13f);
      glVertex2f(-0.08f, 0.05f);
      glVertex2f(-0.14f, 0.05f);
      glEnd();
//Building4
glBegin(GL_QUADS);///Body
      glColor3ub(42,104,144);
      glVertex2f(0.03f,0.35f);
      glVertex2f(0.23f, 0.35f);
      glVertex2f(0.23f, 0.0f);
      glVertex2f(0.03f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(20,72,106);
      glVertex2f(0.23f,0.35f);
      glVertex2f(0.26f, 0.3f);
      glVertex2f(0.26f, 0.0f);
      glVertex2f(0.23f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.05f,0.29f);
      glVertex2f(0.12f, 0.29f);
      glVertex2f(0.12f, 0.23f);
      glVertex2f(0.05f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.05f,0.20f);
      glVertex2f(0.12f, 0.20f);
      glVertex2f(0.12f, 0.14f);
      glVertex2f(0.05f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.05f,0.11f);
      glVertex2f(0.12f, 0.11f);
      glVertex2f(0.12f, 0.05f);
      glVertex2f(0.05f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.14f,0.29f);
      glVertex2f(0.21f, 0.29f);
      glVertex2f(0.21f, 0.23f);
      glVertex2f(0.14f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(0.14f,0.20f);
      glVertex2f(0.21f, 0.20f);
      glVertex2f(0.21f, 0.14f);
      glVertex2f(0.14f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(0.14f,0.11f);
      glVertex2f(0.21f, 0.11f);
      glVertex2f(0.21f, 0.05f);
      glVertex2f(0.14f, 0.05f);
      glEnd();
///Building5
glBegin(GL_QUADS);///Body
      glColor3ub(169,238,59);
      glVertex2f(0.28f,0.4f);
      glVertex2f(0.54f, 0.4f);
      glVertex2f(0.54f, 0.0f);
      glVertex2f(0.28f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(107,171,5);
      glVertex2f(0.54f,0.4f);
      glVertex2f(0.59f, 0.35f);
      glVertex2f(0.59f, 0.0f);
      glVertex2f(0.54f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.31f,0.35f);
      glVertex2f(0.37f, 0.35f);
      glVertex2f(0.37f, 0.26f);
      glVertex2f(0.31f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.31f,0.23f);
      glVertex2f(0.37f, 0.23f);
      glVertex2f(0.37f, 0.14f);
      glVertex2f(0.31f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.31f,0.11f);
      glVertex2f(0.37f, 0.11f);
      glVertex2f(0.37f, 0.02f);
      glVertex2f(0.31f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.39f,0.35f);
      glVertex2f(0.45f, 0.35f);
      glVertex2f(0.45f, 0.26f);
      glVertex2f(0.39f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(0.39f,0.23f);
      glVertex2f(0.45f, 0.23f);
      glVertex2f(0.45f, 0.14f);
      glVertex2f(0.39f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(0.39f,0.11f);
      glVertex2f(0.45f, 0.11f);
      glVertex2f(0.45f, 0.02f);
      glVertex2f(0.39f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(0.47f,0.35f);
      glVertex2f(0.53f, 0.35f);
      glVertex2f(0.53f, 0.26f);
      glVertex2f(0.47f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(0.47f,0.23f);
      glVertex2f(0.53f, 0.23f);
      glVertex2f(0.53f, 0.14f);
      glVertex2f(0.47f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///9
      glVertex2f(0.47f,0.11f);
      glVertex2f(0.53f, 0.11f);
      glVertex2f(0.53f, 0.02f);
      glVertex2f(0.47f, 0.02f);
      glEnd();
///Building6
glBegin(GL_QUADS);///Body
      glColor3ub(114,131,87);
      glVertex2f(0.68f,0.5f);
      glVertex2f(0.92f, 0.5f);
      glVertex2f(0.92f, 0.0f);
      glVertex2f(0.68f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(71,87,45);
      glVertex2f(0.92f,0.5f);
      glVertex2f(0.97f, 0.45f);
      glVertex2f(0.97f, 0.0f);
      glVertex2f(0.92f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.71f,0.47f);
      glVertex2f(0.78f, 0.47f);
      glVertex2f(0.78f, 0.37f);
      glVertex2f(0.71f, 0.37f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.71f,0.34f);
      glVertex2f(0.78f, 0.34f);
      glVertex2f(0.78f, 0.25f);
      glVertex2f(0.71f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.71f,0.23f);
      glVertex2f(0.78f, 0.23f);
      glVertex2f(0.78f, 0.15f);
      glVertex2f(0.71f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.71f,0.13f);
      glVertex2f(0.78f, 0.13f);
      glVertex2f(0.78f, 0.05f);
      glVertex2f(0.71f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(0.81f,0.47f);
      glVertex2f(0.88f, 0.47f);
      glVertex2f(0.88f, 0.37f);
      glVertex2f(0.81f, 0.37f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(0.81f,0.34f);
      glVertex2f(0.88f, 0.34f);
      glVertex2f(0.88f, 0.25f);
      glVertex2f(0.81f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(0.81f,0.23f);
      glVertex2f(0.88f, 0.23f);
      glVertex2f(0.88f, 0.15f);
      glVertex2f(0.81f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(0.81f,0.13f);
      glVertex2f(0.88f, 0.13f);
      glVertex2f(0.88f, 0.05f);
      glVertex2f(0.81f, 0.05f);
      glEnd();
///Building56
glBegin(GL_QUADS);///Body
      glColor3ub(191, 49, 49);
      glVertex2f(0.46f,0.0f);
      glVertex2f(0.75f, 0.0f);
      glVertex2f(0.75f, 0.3f);
      glVertex2f(0.46f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(206, 64, 64);
      glVertex2f(0.75f,0.3f);
      glVertex2f(0.8f, 0.27f);
      glVertex2f(0.8f, 0.0f);
      glVertex2f(0.75f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.5f,0.03f);
      glVertex2f(0.6f, 0.03f);
      glVertex2f(0.6f, 0.13f);
      glVertex2f(0.5f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.5f,0.25f);
      glVertex2f(0.6f, 0.25f);
      glVertex2f(0.6f, 0.15f);
      glVertex2f(0.5f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.62f,0.03f);
      glVertex2f(0.72f, 0.03f);
      glVertex2f(0.72f, 0.13f);
      glVertex2f(0.62f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.62f,0.25f);
      glVertex2f(0.72f, 0.25f);
      glVertex2f(0.72f, 0.15f);
      glVertex2f(0.62f, 0.15f);
      glEnd();
///Road Lights
///Road Light1
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
///Road Light2
glTranslatef(.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
    glLoadIdentity();
///Road Light3
glTranslatef(.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
glLoadIdentity();
///Road Light4
glTranslatef(-.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
glLoadIdentity();
///Road Light5
glTranslatef(-0.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
glLoadIdentity();
///Upper side
///Road Light1
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
///Road Light2
glTranslatef(.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();
///Road Light3
glTranslatef(.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();
///Road Light4
glTranslatef(-.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();
///Road Light5
glTranslatef(-.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();



GLfloat x=-.8f,y=.8f;   //sun
    GLfloat radius =0.15f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,0);
        glVertex2f(x, y); // center of circle
        for(int i = 0; i <= triangleAmount;i++)
            {
            glVertex2f
            (
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
            }
    glEnd();

///Traffic Light
glBegin(GL_QUADS);
///Stand
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,0.23f);
glVertex2f(-0.7f,0.23f);
glVertex2f(-0.7f,0.0f);
glVertex2f(-0.71f,0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.73f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-0.73f,0.35f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.71f,0.3f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(-0.71f,0.2f);
glEnd();


///stand



glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.65f);
glVertex2f(0.7f,-0.65f);
glVertex2f(0.7f,-0.42f);
glVertex2f(0.71f,-0.42f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(0.73f,-0.45f);
glVertex2f(0.68f,-0.45f);
glVertex2f(0.68f,-0.25f);
glVertex2f(0.73f,-0.25f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(0.7f,-0.4f);
glEnd();
glPointSize(12);



glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.7f,-0.3f);
glEnd();












glPopMatrix();
      glFlush();
}
void night()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();


   glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
///River
   glBegin(GL_QUADS);
      glColor3ub(144,202,249);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f( 1.0f, -1.0f);
      glVertex2f( 1.0f,  -0.65f);
      glVertex2f(-1.0f, -0.65f);
      glEnd();
//Boat1
glTranslatef(positionB1,0.0f, 0.0f);
glBegin(GL_QUADS);
      glColor3ub(189, 0, 0); ///1
      glVertex2f(-0.5f, -0.96f);
      glVertex2f(-0.1f, -0.96f);
      glVertex2f( 0.0f, -0.9f);
      glVertex2f(-0.5f, -0.9f);
      glEnd();
glBegin(GL_QUADS); ///2
      glColor3ub(255, 255, 255);
      glVertex2f(-0.45f, -0.9f);
      glVertex2f(-0.1f, -0.9f);
      glVertex2f(-0.15f,-0.85f);
      glVertex2f(-0.45f, -0.85f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(189, 0, 0);
      glVertex2f(-0.4f, -0.85f);
      glVertex2f(-0.2f, -0.85f);
      glVertex2f(-0.25f,-0.8f);
      glVertex2f(-0.4f, -0.8f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(255, 255, 255);
      glVertex2f(-0.35f, -0.8f);
      glVertex2f(-0.28f, -0.8f);
      glVertex2f(-0.3f,-0.75f);
      glVertex2f(-0.35f, -0.75f);
      glEnd();
//Boat2
      glTranslatef(positionB2,0.0f, 0.0f);
      glBegin(GL_QUADS); ///1
      glColor3ub(60, 39, 15);
      glVertex2f(0.4f, -0.96f);
      glVertex2f(0.8f,-0.96f);
      glVertex2f(0.85f,-0.9f);
      glVertex2f(0.35f, -0.9f);
      glEnd();
glBegin(GL_QUADS); ///2
      glColor3ub(213, 159, 236);
      glVertex2f(0.43f, -0.9f);
      glVertex2f(0.77f,-0.9f);
      glVertex2f(0.77f,-0.87f);
      glVertex2f(0.43f, -0.87f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(0, 0, 0);
      glVertex2f(0.54f, -0.87f);
      glVertex2f(0.56f,-0.87f);
      glVertex2f(0.56f,-0.84f);
      glVertex2f(0.54f, -0.84f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(0, 0, 0);
      glVertex2f(0.57f, -0.87f);
      glVertex2f(0.59f,-0.87f);
      glVertex2f(0.59f,-0.84f);
      glVertex2f(0.57f, -0.84f);
      glEnd();
glBegin(GL_TRIANGLES); ///5
      glColor3ub(235, 118, 166);
      glVertex2f(0.46f, -0.84f);
      glVertex2f(0.56f,-0.84f);
      glVertex2f(0.56f,-0.7f);
      glEnd();
glBegin(GL_TRIANGLES); ///6
      glColor3ub(194, 0, 194);
      glVertex2f(0.57f, -0.84f);
      glVertex2f(0.7f,-0.84f);
      glVertex2f(0.57f,-0.7f);
      glEnd();
      glPopMatrix();


      glPushMatrix();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, -0.65f);
      glVertex2f(-0.9f, -0.65f);
      glVertex2f(-0.9f, -0.6f);
      glVertex2f(-1.0f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.9f, -0.65f);
      glVertex2f(-0.7f, -0.65f);
      glVertex2f(-0.7f, -0.6f);
      glVertex2f(-0.9f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f, -0.65f);
      glVertex2f(-0.5f, -0.65f);
      glVertex2f(-0.5f, -0.6f);
      glVertex2f(-0.7f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f, -0.65f);
      glVertex2f(-0.3f, -0.65f);
      glVertex2f(-0.3f, -0.6f);
      glVertex2f(-0.5f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f, -0.65f);
      glVertex2f(-0.1f, -0.65f);
      glVertex2f(-0.1f, -0.6f);
      glVertex2f(-0.3f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.1f, -0.65f);
      glVertex2f(0.1f, -0.65f);
      glVertex2f(0.1f, -0.6f);
      glVertex2f(-0.1f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.1f, -0.65f);
      glVertex2f(0.3f, -0.65f);
      glVertex2f(0.3f, -0.6f);
      glVertex2f(0.1f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.3f, -0.65f);
      glVertex2f(0.5f, -0.65f);
      glVertex2f(0.5f, -0.6f);
      glVertex2f(0.3f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f, -0.65f);
      glVertex2f(0.7f, -0.65f);
      glVertex2f(0.7f, -0.6f);
      glVertex2f(0.5f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.7f, -0.65f);
      glVertex2f(0.9f, -0.65f);
      glVertex2f(0.9f, -0.6f);
      glVertex2f(0.7f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.9f, -0.65f);
      glVertex2f(1.0f, -0.65f);
      glVertex2f(1.0f, -0.6f);
      glVertex2f(0.9f, -0.6f);
      glEnd();


///UpperSide
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, -0.05f);
      glVertex2f(-0.9f, -0.05f);
      glVertex2f(-0.9f, 0.0f);
      glVertex2f(-1.0f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.9f,-0.05f);
      glVertex2f(-0.7f, -0.05f);
      glVertex2f(-0.7f, -0.0f);
      glVertex2f(-0.9f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f,-0.05f);
      glVertex2f(-0.5f, -0.05f);
      glVertex2f(-0.5f, -0.0f);
      glVertex2f(-0.7f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f,-0.05f);
      glVertex2f(-0.3f, -0.05f);
      glVertex2f(-0.3f, -0.0f);
      glVertex2f(-0.5f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f,-0.05f);
      glVertex2f(-0.1f, -0.05f);
      glVertex2f(-0.1f, -0.0f);
      glVertex2f(-0.3f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.1f,-0.05f);
      glVertex2f(0.1f, -0.05f);
      glVertex2f(0.1f, -0.0f);
      glVertex2f(-0.1f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.1f,-0.05f);
      glVertex2f(0.3f, -0.05f);
      glVertex2f(0.3f, -0.0f);
      glVertex2f(0.1f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.3f,-0.05f);
      glVertex2f(0.5f, -0.05f);
      glVertex2f(0.5f, -0.0f);
      glVertex2f(0.3f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f,-0.05f);
      glVertex2f(0.7f, -0.05f);
      glVertex2f(0.7f, -0.0f);
      glVertex2f(0.5f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.7f,-0.05f);
      glVertex2f(0.9f, -0.05f);
      glVertex2f(0.9f, -0.0f);
      glVertex2f(0.7f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.9f,-0.05f);
      glVertex2f(1.0f, -0.05f);
      glVertex2f(1.0f, -0.0f);
      glVertex2f(0.9f, 0.0f);
      glEnd();
/// Road
glBegin(GL_QUADS);
      glColor3ub(33,33,33);
      glVertex2f(-1.0f,-0.6f);
      glVertex2f(1.0f, -0.6f);
      glVertex2f(1.0f, -0.05f);
      glVertex2f(-1.0f,-0.05f);
      glEnd();
///Road Middle Line

glBegin(GL_QUADS); ///1
      glColor3ub(255, 255, 0);
      glVertex2f(-1.0f,-0.36f);
      glVertex2f(-0.8f, -0.36f);
      glVertex2f(-0.8f, -0.33f);
      glVertex2f(-1.0f,-0.33f);
      glEnd();

glBegin(GL_QUADS); ///2
      glColor3ub(255, 255, 0);
      glVertex2f(-0.7f,-0.36f);
      glVertex2f(-0.5f, -0.36f);
      glVertex2f(-0.5f, -0.33f);
      glVertex2f(-0.7f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(255, 255, 0);
      glVertex2f(-0.4f,-0.36f);
      glVertex2f(-0.2f, -0.36f);
      glVertex2f(-0.2f, -0.33f);
      glVertex2f(-0.4f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(255, 255, 0);
      glVertex2f(-0.1f,-0.36f);
      glVertex2f(0.1f, -0.36f);
      glVertex2f(0.1f, -0.33f);
      glVertex2f(-0.1f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///5
      glColor3ub(255, 255, 0);
      glVertex2f(0.2f,-0.36f);
      glVertex2f(0.4f, -0.36f);
      glVertex2f(0.4f, -0.33f);
      glVertex2f(0.2f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///6
      glColor3ub(255, 255, 0);
      glVertex2f(0.5f,-0.36f);
      glVertex2f(0.7f, -0.36f);
      glVertex2f(0.7f, -0.33f);
      glVertex2f(0.5f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///7
      glColor3ub(255, 255, 0);
      glVertex2f(0.8f,-0.36f);
      glVertex2f(1.0f, -0.36f);
      glVertex2f(1.0f, -0.33f);
      glVertex2f(0.8f,-0.33f);
      glEnd();
 //end road
 ///sky
glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-1,1);
    glVertex2f(-1,0.0);
    glVertex2f(1,0.0);
    glVertex2f(1,1);
    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(positionA1,0.0f, 0.0f);
///Aeroplane
    glBegin(GL_POLYGON);///Body
    glColor3ub(0, 119, 230);
    glVertex2f( -0.66f, 0.7f);
    glVertex2f( -0.66f, 0.69f);
    glVertex2f( -0.59f, 0.65f);
    glVertex2f( -0.38f, 0.65f);
    glVertex2f( -0.36f, 0.67f);
    glVertex2f( -0.36f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.4f, 0.7f);
    glEnd();
   glBegin(GL_QUADS);///Engine
    glColor3ub(0,0,0);
    glVertex2f( -0.49f, 0.64f);
    glVertex2f( -0.49f, 0.62f);
    glVertex2f( -0.47f, 0.62f);
    glVertex2f( -0.47f, 0.64f);
    glEnd();
    glBegin(GL_QUADS);///Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.49f, 0.66f);
    glVertex2f( -0.55f, 0.61f);
    glVertex2f( -0.53f, 0.61f);
    glVertex2f( -0.45f, 0.66f);
    glEnd();
    glBegin(GL_QUADS);///Back Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.53f, 0.73f);
    glVertex2f( -0.5f, 0.7f);
    glVertex2f( -0.47f, 0.7f);
    glVertex2f( -0.51f, 0.73f);
    glEnd();
    glBegin(GL_QUADS);///Tail Top Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.63f, 0.74f);
    glVertex2f( -0.62f, 0.7f);
    glVertex2f( -0.59f, 0.7f);
    glVertex2f( -0.62f, 0.74f);
    glEnd();
    glBegin(GL_QUADS);///Tail Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.61f, 0.69f);
    glVertex2f( -0.64f, 0.67f);
    glVertex2f( -0.61f, 0.67f);
    glVertex2f( -0.58f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);///Front
    glColor3ub(255,255,255);
    glVertex2f( -0.4f, 0.69f);
    glVertex2f( -0.4f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.39f, 0.69f);
    glEnd();
   glPointSize(3);///Windows
   glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   glVertex2f(-0.57f,0.68f);
   glVertex2f(-0.53f,0.68f);
   glVertex2f(-0.49f,0.68f);
   glVertex2f(-0.46f,0.68f);
   glVertex2f(-0.43f,0.68f);
   glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(positionC1,0.0f, 0.0f);
glColor3ub(189,189,189); ///cloud1
    circle(-1.0f, 0.7f, 0.05f);
    circle(-0.9f, 0.7f, 0.05f);
    circle(-0.95f, 0.73f, 0.05f);
    circle(-0.95f, 0.68f, 0.05f);
glTranslatef(positionC2,0.0f, 0.0f);
glColor3ub(189,189,189); ///cloud2
    circle(-0.4f, 0.8f, 0.05f);
    circle(-0.3f, 0.8f, 0.05f);
    circle(-0.35f, 0.83f, 0.05f);
    circle(-0.35f, 0.78f, 0.05f);
glTranslatef(positionC3,0.0f, 0.0f);
glColor3ub(189,189,189); ///cloud3
    circle(0.1f, 0.6f, 0.05f);
    circle(0.2f, 0.6f, 0.05f);
    circle(0.15f, 0.63f, 0.05f);
    circle(0.15f, 0.58f, 0.05f);
    glTranslatef(positionC4,0.0f, 0.0f);
glColor3ub(189,189,189); ///cloud4
    circle(0.4f, 0.9f, 0.05f);
    circle(0.5f, 0.9f, 0.05f);
    circle(0.45f, 0.93f, 0.05f);
    circle(0.45f, 0.88f, 0.05f);
    glTranslatef(positionC5,0.0f, 0.0f);
glColor3ub(189,189,189); ///cloud5
    circle(0.6f, 0.6f, 0.05f);
    circle(0.7f, 0.6f, 0.05f);
    circle(0.65f, 0.58f, 0.05f);
    circle(0.65f, 0.64f, 0.05f);
 glEnd();
glPopMatrix();





glPushMatrix();
///Building Start
///Building11
glBegin(GL_POLYGON);
    glColor3ub(145,57,23);///Body
    glVertex2f(-.94,0.4);
    glVertex2f(-.8,0.4);
    glVertex2f(-.75,.35);
    glVertex2f(-.75,0.0);
    glVertex2f(-.68,0.0);
    glVertex2f(-.68,.53);
    glVertex2f(-.94,.53);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.68f,0.53f);
    glVertex2f(-.68f,0.0f);
    glVertex2f(-.94f,0.53f);
    glVertex2f(-.68f,0.53f);
    glVertex2f(-.71f,0.53f);
    glVertex2f(-.71f,0.0f);
    glVertex2f(-.75f,0.53f);
    glVertex2f(-.75f,0.0f);
    glVertex2f(-.79f,0.53f);
    glVertex2f(-.79f,0.0f);
    glVertex2f(-.83f,0.53f);
    glVertex2f(-.83f,0.0f);
    glVertex2f(-.87f,0.53f);
    glVertex2f(-.87f,0.0f);
    glVertex2f(-.91f,0.53f);
    glVertex2f(-.91f,0.0f);
    glVertex2f(-.94f,0.53f);
    glVertex2f(-.94f,0.0f);
    glEnd();
///Building31
glBegin(GL_POLYGON);
    glColor3ub(0, 97, 97);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.26,0.0);
    glVertex2f(-0.26,0.3);
    glVertex2f(-0.14,0.3);
    glVertex2f(-0.14,0.55);
    glVertex2f(-0.4,0.55);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.14f,0.5f);
    glVertex2f(-.4f,0.55f);
    glVertex2f(-.14f,0.55f);
    glVertex2f(-.4f,0.45f);
    glVertex2f(-.14f,0.45f);
    glVertex2f(-.4f,0.4f);
    glVertex2f(-.14f,0.4f);
    glVertex2f(-.4f,0.35f);
    glVertex2f(-.14f,0.35f);
    glVertex2f(-.4f,0.3f);
    glVertex2f(-.14f,0.3f);
    glVertex2f(-.4f,0.25f);
    glVertex2f(-.14f,0.25f);
    glVertex2f(-.4f,0.2f);
    glVertex2f(-.14f,0.2f);
    glVertex2f(-.4f,0.15f);
    glVertex2f(-.14f,0.15f);
    glVertex2f(-.4f,0.1f);
    glVertex2f(-.14f,0.1f);
    glVertex2f(-.4f,0.05f);
    glVertex2f(-.14f,0.05f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.14f,0.0f);
    glVertex2f(-.4f,0.55f);
    glVertex2f(-.4f,0.0f);
glVertex2f(-.14f,0.55f);
    glVertex2f(-.14f,0.0f);
    glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(-0.29f,0.5f);
      glVertex2f(-0.23f, 0.5f);
      glVertex2f(-0.23f, 0.45f);
      glVertex2f(-0.29f, 0.45f);
      glEnd();
glBegin(GL_QUADS);///2
      glColor3ub(249,237,65);
      glVertex2f(-0.21f,0.5f);
      glVertex2f(-0.15f, 0.5f);
      glVertex2f(-0.15f, 0.45f);
      glVertex2f(-0.21f, 0.45f);
      glEnd();
glBegin(GL_QUADS);///3
      glColor3ub(249,237,65);
      glVertex2f(-0.29f,0.35f);
      glVertex2f(-0.23f, 0.35f);
      glVertex2f(-0.23f, 0.4f);
      glVertex2f(-0.29f, 0.4f);
      glEnd();
glBegin(GL_QUADS);///4
      glColor3ub(249,237,65);
      glVertex2f(-0.21f,0.35f);
      glVertex2f(-0.15f, 0.35f);
      glVertex2f(-0.15f, 0.4f);
      glVertex2f(-0.21f, 0.4f);
      glEnd();
glBegin(GL_QUADS);///5
      glColor3ub(249,237,65);
      glVertex2f(-0.21f,0.3f);
      glVertex2f(-0.15f, 0.3f);
      glVertex2f(-0.15f, 0.25f);
      glVertex2f(-0.21f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///6
      glColor3ub(249,237,65);
      glVertex2f(-0.29f,0.3f);
      glVertex2f(-0.23f, 0.3f);
      glVertex2f(-0.23f, 0.25f);
      glVertex2f(-0.29f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///7
      glColor3ub(249,237,65);
      glVertex2f(-0.29f,0.2f);
      glVertex2f(-0.23f, 0.2f);
      glVertex2f(-0.23f, 0.15f);
      glVertex2f(-0.29f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///8
      glColor3ub(249,237,65);
      glVertex2f(-0.29f,0.1f);
      glVertex2f(-0.23f, 0.1f);
      glVertex2f(-0.23f, 0.05f);
      glVertex2f(-0.29f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///9
      glColor3ub(249,237,65);
      glVertex2f(-0.21f,0.2f);
      glVertex2f(-0.15f, 0.2f);
      glVertex2f(-0.15f, 0.15f);
      glVertex2f(-0.21f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///10
      glColor3ub(249,237,65);
      glVertex2f(-0.21f,0.1f);
      glVertex2f(-0.15f, 0.1f);
      glVertex2f(-0.15f, 0.05f);
      glVertex2f(-0.21f, 0.05f);
      glEnd();
///Building32
glBegin(GL_POLYGON);
    glColor3ub(206,218,126);
    glVertex2f(-.6,0.45);
    glVertex2f(-.4,0.45);
    glVertex2f(-.35,0.4);
    glVertex2f(-.35,0.0);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.3,0.5);
    glVertex2f(-.6,0.5);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.3f,0.5f);
    glVertex2f(-.6f,0.4f);
    glVertex2f(-.3f,0.4f);
    glVertex2f(-.6f,0.3f);
    glVertex2f(-.3f,0.3f);
    glVertex2f(-.6f,0.2f);
    glVertex2f(-.3f,0.2f);
    glVertex2f(-.6f,0.1f);
    glVertex2f(-.3f,0.1f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.3f,0.0f);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.5f,0.5f);
    glVertex2f(-.5f,0.0f);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.3f,0.5f);
    glVertex2f(-.3f,0.0f);
    glEnd();
  ///Building41
glBegin(GL_QUADS);///Body
      glColor3ub(224, 191, 0);
      glVertex2f(-0.03f,0.45f);
      glVertex2f(0.25f, 0.45f);
      glVertex2f(0.25f, 0.0f);
      glVertex2f(-0.03f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(-0.01f,0.4f);
      glVertex2f(0.05f, 0.4f);
      glVertex2f(0.05f, 0.32f);
      glVertex2f(-0.01f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(0.07f,0.4f);
      glVertex2f(0.13f, 0.4f);
      glVertex2f(0.13f, 0.32f);
      glVertex2f(0.07f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(0.15f,0.4f);
      glVertex2f(0.21f, 0.4f);
      glVertex2f(0.21f, 0.32f);
      glVertex2f(0.15f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(-0.01f,0.3f);
      glVertex2f(0.05f, 0.3f);
      glVertex2f(0.05f, 0.22f);
      glVertex2f(-0.01f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///5
      glVertex2f(-0.01f,0.2f);
      glVertex2f(0.05f, 0.2f);
      glVertex2f(0.05f, 0.12f);
      glVertex2f(-0.01f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///6
      glVertex2f(-0.01f,0.1f);
      glVertex2f(0.05f, 0.1f);
      glVertex2f(0.05f, 0.02f);
      glVertex2f(-0.01f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///7
      glVertex2f(0.07f,0.3f);
      glVertex2f(0.13f, 0.3f);
      glVertex2f(0.13f, 0.22f);
      glVertex2f(0.07f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///8
      glVertex2f(0.07f,0.2f);
      glVertex2f(0.13f, 0.2f);
      glVertex2f(0.13f, 0.12f);
      glVertex2f(0.07f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///9
      glVertex2f(0.07f,0.1f);
      glVertex2f(0.13f, 0.1f);
      glVertex2f(0.13f, 0.02f);
      glVertex2f(0.07f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///10
      glVertex2f(0.15f,0.3f);
      glVertex2f(0.21f, 0.3f);
      glVertex2f(0.21f, 0.22f);
      glVertex2f(0.15f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///11
      glVertex2f(0.15f,0.2f);
      glVertex2f(0.21f, 0.2f);
      glVertex2f(0.21f, 0.12f);
      glVertex2f(0.15f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///12
      glVertex2f(0.15f,0.1f);
      glVertex2f(0.21f, 0.1f);
      glVertex2f(0.21f, 0.02f);
      glVertex2f(0.15f, 0.02f);
      glEnd();
    ///Building51
glBegin(GL_QUADS);///Body
      glColor3ub(176,190,197);
      glVertex2f(0.33f,0.47f);
      glVertex2f(0.63f, 0.47f);
      glVertex2f(0.63f, 0.0f);
      glVertex2f(0.33f, 0.0f);
      glEnd();
glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(.33f,0.47f);
    glVertex2f(.33f,0.0f);
    glVertex2f(.63f,0.47f);
    glVertex2f(.63f,0.0f);
    glVertex2f(.38f,0.47f);
    glVertex2f(.38f,0.0f);
    glVertex2f(.43f,0.47f);
    glVertex2f(.43f,0.0f);
    glVertex2f(.48f,0.47f);
    glVertex2f(.48f,0.0f);
    glVertex2f(.53f,0.47f);
    glVertex2f(.53f,0.0f);
    glVertex2f(.58f,0.47f);
    glVertex2f(.58f,0.0f);
    glVertex2f(.33f,0.47f);
    glVertex2f(.63f,0.47f);
    glEnd();
///Building1
glBegin(GL_QUADS);///Body
      glColor3ub(43,149,159);
      glVertex2f(-0.99f,0.4f);
      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.99f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(37, 127, 135);
      glVertex2f(-0.8f,0.4f);
      glVertex2f(-0.75f, 0.35f);
      glVertex2f(-0.75f, 0.0f);
      glVertex2f(-0.8f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(-0.97f,0.36f);
      glVertex2f(-0.91f, 0.36f);
      glVertex2f(-0.91f, 0.3f);
      glVertex2f(-0.97f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(-0.88f,0.36f);
      glVertex2f(-0.82f, 0.36f);
      glVertex2f(-0.82f, 0.3f);
      glVertex2f(-0.88f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(-0.97f,0.23f);
      glVertex2f(-0.91f, 0.23f);
      glVertex2f(-0.91f, 0.17f);
      glVertex2f(-0.97f, 0.17f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(-0.88f,0.23f);
      glVertex2f(-0.82f, 0.23f);
      glVertex2f(-0.82f, 0.17f);
      glVertex2f(-0.88f, 0.17f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///5
      glVertex2f(-0.97f,0.1f);
      glVertex2f(-0.91f, 0.1f);
      glVertex2f(-0.91f, 0.04f);
      glVertex2f(-0.97f, 0.04f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///6
      glVertex2f(-0.88f,0.1f);
      glVertex2f(-0.82f, 0.1f);
      glVertex2f(-0.82f, 0.04f);
      glVertex2f(-0.88f, 0.04f);
      glEnd();

///Building2
glBegin(GL_QUADS);///Body
      glColor3ub(73, 146, 75);
      glVertex2f(-0.65f,0.45f);
      glVertex2f(-0.38f, 0.45f);
      glVertex2f(-0.38f, 0.0f);
      glVertex2f(-0.65f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(52, 129, 54);
      glVertex2f(-0.38f,0.45f);
      glVertex2f(-0.35f, 0.4f);
      glVertex2f(-0.35f, 0.0f);
      glVertex2f(-0.38f, 0.0f);
      glEnd();

glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(-0.63f,0.4f);
      glVertex2f(-0.57f, 0.4f);
      glVertex2f(-0.57f, 0.33f);
      glVertex2f(-0.63f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(-0.55f,0.4f);
      glVertex2f(-0.49f, 0.4f);
      glVertex2f(-0.49f, 0.33f);
      glVertex2f(-0.55f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(-0.47f,0.4f);
      glVertex2f(-0.41f, 0.4f);
      glVertex2f(-0.41f, 0.33f);
      glVertex2f(-0.47f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(-0.63f,0.29f);
      glVertex2f(-0.57f, 0.29f);
      glVertex2f(-0.57f, 0.23f);
      glVertex2f(-0.63f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///5
      glVertex2f(-0.63f,0.19f);
      glVertex2f(-0.57f, 0.19f);
      glVertex2f(-0.57f, 0.13f);
      glVertex2f(-0.63f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///6
      glVertex2f(-0.63f,0.09f);
      glVertex2f(-0.57f, 0.09f);
      glVertex2f(-0.57f, 0.03f);
      glVertex2f(-0.63f, 0.03f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///7
      glVertex2f(-0.55f,0.09f);
      glVertex2f(-0.49f, 0.09f);
      glVertex2f(-0.49f, 0.03f);
      glVertex2f(-0.55f, 0.03f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///8
      glVertex2f(-0.55f,0.19f);
      glVertex2f(-0.49f, 0.19f);
      glVertex2f(-0.49f, 0.13f);
      glVertex2f(-0.55f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///9
      glVertex2f(-0.55f,0.29f);
      glVertex2f(-0.49f, 0.29f);
      glVertex2f(-0.49f, 0.23f);
      glVertex2f(-0.55f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///10
      glVertex2f(-0.47f,0.29f);
      glVertex2f(-0.41f, 0.29f);
      glVertex2f(-0.41f, 0.23f);
      glVertex2f(-0.47f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///11
      glVertex2f(-0.47f,0.19f);
      glVertex2f(-0.41f, 0.19f);
      glVertex2f(-0.41f, 0.13f);
      glVertex2f(-0.47f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///12
      glVertex2f(-0.47f,0.09f);
      glVertex2f(-0.41f, 0.09f);
      glVertex2f(-0.41f, 0.03f);
      glVertex2f(-0.47f, 0.03f);
      glEnd();
///Building3
glBegin(GL_QUADS);///Body
      glColor3ub(209, 202, 211);
      glVertex2f(-0.26f,0.3f);
      glVertex2f(-0.07f, 0.3f);
      glVertex2f(-0.07f, 0.0f);
      glVertex2f(-0.26f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(191, 171, 198);
      glVertex2f(-0.07f,0.3f);
      glVertex2f(-0.05f, 0.25f);
      glVertex2f(-0.05f, 0.0f);
      glVertex2f(-0.07f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(-0.24f,0.24f);
      glVertex2f(-0.16f, 0.24f);
      glVertex2f(-0.16f, 0.16f);
      glVertex2f(-0.24f, 0.16f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(-0.24f,0.13f);
      glVertex2f(-0.16f, 0.13f);
      glVertex2f(-0.16f, 0.05f);
      glVertex2f(-0.24f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(-0.14f,0.24f);
      glVertex2f(-0.08f, 0.24f);
      glVertex2f(-0.08f, 0.16f);
      glVertex2f(-0.14f, 0.16f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(-0.14f,0.13f);
      glVertex2f(-0.08f, 0.13f);
      glVertex2f(-0.08f, 0.05f);
      glVertex2f(-0.14f, 0.05f);
      glEnd();
//Building4
glBegin(GL_QUADS);///Body
      glColor3ub(42,104,144);
      glVertex2f(0.03f,0.35f);
      glVertex2f(0.23f, 0.35f);
      glVertex2f(0.23f, 0.0f);
      glVertex2f(0.03f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(20,72,106);
      glVertex2f(0.23f,0.35f);
      glVertex2f(0.26f, 0.3f);
      glVertex2f(0.26f, 0.0f);
      glVertex2f(0.23f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(0.05f,0.29f);
      glVertex2f(0.12f, 0.29f);
      glVertex2f(0.12f, 0.23f);
      glVertex2f(0.05f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(0.05f,0.20f);
      glVertex2f(0.12f, 0.20f);
      glVertex2f(0.12f, 0.14f);
      glVertex2f(0.05f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(0.05f,0.11f);
      glVertex2f(0.12f, 0.11f);
      glVertex2f(0.12f, 0.05f);
      glVertex2f(0.05f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(0.14f,0.29f);
      glVertex2f(0.21f, 0.29f);
      glVertex2f(0.21f, 0.23f);
      glVertex2f(0.14f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///5
      glVertex2f(0.14f,0.20f);
      glVertex2f(0.21f, 0.20f);
      glVertex2f(0.21f, 0.14f);
      glVertex2f(0.14f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///6
      glVertex2f(0.14f,0.11f);
      glVertex2f(0.21f, 0.11f);
      glVertex2f(0.21f, 0.05f);
      glVertex2f(0.14f, 0.05f);
      glEnd();
///Building5
glBegin(GL_QUADS);///Body
      glColor3ub(169,238,59);
      glVertex2f(0.28f,0.4f);
      glVertex2f(0.54f, 0.4f);
      glVertex2f(0.54f, 0.0f);
      glVertex2f(0.28f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(107,171,5);
      glVertex2f(0.54f,0.4f);
      glVertex2f(0.59f, 0.35f);
      glVertex2f(0.59f, 0.0f);
      glVertex2f(0.54f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(0.31f,0.35f);
      glVertex2f(0.37f, 0.35f);
      glVertex2f(0.37f, 0.26f);
      glVertex2f(0.31f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(0.31f,0.23f);
      glVertex2f(0.37f, 0.23f);
      glVertex2f(0.37f, 0.14f);
      glVertex2f(0.31f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(0.31f,0.11f);
      glVertex2f(0.37f, 0.11f);
      glVertex2f(0.37f, 0.02f);
      glVertex2f(0.31f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(0.39f,0.35f);
      glVertex2f(0.45f, 0.35f);
      glVertex2f(0.45f, 0.26f);
      glVertex2f(0.39f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///5
      glVertex2f(0.39f,0.23f);
      glVertex2f(0.45f, 0.23f);
      glVertex2f(0.45f, 0.14f);
      glVertex2f(0.39f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///6
      glVertex2f(0.39f,0.11f);
      glVertex2f(0.45f, 0.11f);
      glVertex2f(0.45f, 0.02f);
      glVertex2f(0.39f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///7
      glVertex2f(0.47f,0.35f);
      glVertex2f(0.53f, 0.35f);
      glVertex2f(0.53f, 0.26f);
      glVertex2f(0.47f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///8
      glVertex2f(0.47f,0.23f);
      glVertex2f(0.53f, 0.23f);
      glVertex2f(0.53f, 0.14f);
      glVertex2f(0.47f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///9
      glVertex2f(0.47f,0.11f);
      glVertex2f(0.53f, 0.11f);
      glVertex2f(0.53f, 0.02f);
      glVertex2f(0.47f, 0.02f);
      glEnd();
///Building6
glBegin(GL_QUADS);///Body
      glColor3ub(114,131,87);
      glVertex2f(0.68f,0.5f);
      glVertex2f(0.92f, 0.5f);
      glVertex2f(0.92f, 0.0f);
      glVertex2f(0.68f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(71,87,45);
      glVertex2f(0.92f,0.5f);
      glVertex2f(0.97f, 0.45f);
      glVertex2f(0.97f, 0.0f);
      glVertex2f(0.92f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(0.71f,0.47f);
      glVertex2f(0.78f, 0.47f);
      glVertex2f(0.78f, 0.37f);
      glVertex2f(0.71f, 0.37f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(0.71f,0.34f);
      glVertex2f(0.78f, 0.34f);
      glVertex2f(0.78f, 0.25f);
      glVertex2f(0.71f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(0.71f,0.23f);
      glVertex2f(0.78f, 0.23f);
      glVertex2f(0.78f, 0.15f);
      glVertex2f(0.71f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(0.71f,0.13f);
      glVertex2f(0.78f, 0.13f);
      glVertex2f(0.78f, 0.05f);
      glVertex2f(0.71f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///5
      glVertex2f(0.81f,0.47f);
      glVertex2f(0.88f, 0.47f);
      glVertex2f(0.88f, 0.37f);
      glVertex2f(0.81f, 0.37f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///6
      glVertex2f(0.81f,0.34f);
      glVertex2f(0.88f, 0.34f);
      glVertex2f(0.88f, 0.25f);
      glVertex2f(0.81f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///7
      glVertex2f(0.81f,0.23f);
      glVertex2f(0.88f, 0.23f);
      glVertex2f(0.88f, 0.15f);
      glVertex2f(0.81f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///8
      glVertex2f(0.81f,0.13f);
      glVertex2f(0.88f, 0.13f);
      glVertex2f(0.88f, 0.05f);
      glVertex2f(0.81f, 0.05f);
      glEnd();
///Building56
glBegin(GL_QUADS);///Body
      glColor3ub(191, 49, 49);
      glVertex2f(0.46f,0.0f);
      glVertex2f(0.75f, 0.0f);
      glVertex2f(0.75f, 0.3f);
      glVertex2f(0.46f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(206, 64, 64);
      glVertex2f(0.75f,0.3f);
      glVertex2f(0.8f, 0.27f);
      glVertex2f(0.8f, 0.0f);
      glVertex2f(0.75f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///1
      glVertex2f(0.5f,0.03f);
      glVertex2f(0.6f, 0.03f);
      glVertex2f(0.6f, 0.13f);
      glVertex2f(0.5f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///2
      glVertex2f(0.5f,0.25f);
      glVertex2f(0.6f, 0.25f);
      glVertex2f(0.6f, 0.15f);
      glVertex2f(0.5f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///3
      glVertex2f(0.62f,0.03f);
      glVertex2f(0.72f, 0.03f);
      glVertex2f(0.72f, 0.13f);
      glVertex2f(0.62f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(249,237,65);///4
      glVertex2f(0.62f,0.25f);
      glVertex2f(0.72f, 0.25f);
      glVertex2f(0.72f, 0.15f);
      glVertex2f(0.62f, 0.15f);
      glEnd();

  ///Road Lights
///Road Light1
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

///Left Light
glBegin(GL_QUADS);
    glColor3ub(255,204,128);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.6);
    glVertex2f(-.03,-.6);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.6);
    glVertex2f(.12,-.6);
    glEnd();













///Road Light2
glTranslatef(.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();


///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.6);
    glVertex2f(-.03,-.6);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.6);
    glVertex2f(.12,-.6);
    glEnd();
    glLoadIdentity();








///Road Light3
glTranslatef(.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();



 ///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.6);
    glVertex2f(-.03,-.6);
    glEnd();

///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.6);
    glVertex2f(.12,-.6);
    glEnd();
glLoadIdentity();





///Road Light4
glTranslatef(-.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();


 ///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.6);
    glVertex2f(-.03,-.6);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.6);
    glVertex2f(.12,-.6);
    glEnd();

glLoadIdentity();



///Road Light5
glTranslatef(-0.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();

  ///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(-.06,-.15);
    glVertex2f(-.09,-.15);
    glVertex2f(-.12,-.6);
    glVertex2f(-.03,-.6);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(.09,-.15);
    glVertex2f(.06,-.15);
    glVertex2f(.03,-.6);
    glVertex2f(.12,-.6);
    glEnd();
glLoadIdentity();










///Upper side
///Road Light1
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();

///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(-.06,.25);
    glVertex2f(-.09,.25);
    glVertex2f(-.12,0.0);
    glVertex2f(-.03,0.0);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,.25);
    glVertex2f(.06,.25);
    glVertex2f(.03,0.0);
    glVertex2f(.12,0.0);
    glEnd();












///Road Light2
glTranslatef(.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();

  ///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(-.06,.25);
    glVertex2f(-.09,.25);
    glVertex2f(-.12,0.0);
    glVertex2f(-.03,0.0);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,.25);
    glVertex2f(.06,.25);
    glVertex2f(.03,0.0);
    glVertex2f(.12,0.0);
    glEnd();

glLoadIdentity();





///Road Light3
glTranslatef(.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();



 ///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(-.06,.25);
    glVertex2f(-.09,.25);
    glVertex2f(-.12,0.0);
    glVertex2f(-.03,0.0);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,.25);
    glVertex2f(.06,.25);
    glVertex2f(.03,0.0);
    glVertex2f(.12,0.0);
    glEnd();

glLoadIdentity();






///Road Light4
glTranslatef(-.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();


 ///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(-.06,.25);
    glVertex2f(-.09,.25);
    glVertex2f(-.12,0.0);
    glVertex2f(-.03,0.0);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(.09,.25);
    glVertex2f(.06,.25);
    glVertex2f(.03,0.0);
    glVertex2f(.12,0.0);
    glEnd();


glLoadIdentity();






///Road Light5
glTranslatef(-.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
///Left Light
glBegin(GL_QUADS);
    glColor3ub(255, 204,128);
    glVertex2f(-.06,.25);
    glVertex2f(-.09,.25);
    glVertex2f(-.12,0.0);
    glVertex2f(-.03,0.0);
    glEnd();
///Right Light
glBegin(GL_QUADS);
    glColor3ub(255, 204, 128);
    glVertex2f(.09,.25);
    glVertex2f(.06,.25);
    glVertex2f(.03,0.0);
    glVertex2f(.12,0.0);
    glEnd();

glLoadIdentity();



GLfloat x=.8f,y=.8f;   //moon
    GLfloat radius =0.15f;
    int triangleAmount = 20; //# of triangles used to draw circle

    //GLfloat radius = 0.8f; //radius
    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,92);
        glVertex2f(x, y); // center of circle
        for(int i = 0; i <= triangleAmount;i++)
            {
            glVertex2f
            (
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
            }
    glEnd();

///Traffic Light
glBegin(GL_QUADS);
///Stand
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,0.23f);
glVertex2f(-0.7f,0.23f);
glVertex2f(-0.7f,0.0f);
glVertex2f(-0.71f,0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.73f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-0.73f,0.35f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.71f,0.3f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(-0.71f,0.2f);
glEnd();

///stand



glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.65f);
glVertex2f(0.7f,-0.65f);
glVertex2f(0.7f,-0.42f);
glVertex2f(0.71f,-0.42f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(0.73f,-0.45f);
glVertex2f(0.68f,-0.45f);
glVertex2f(0.68f,-0.25f);
glVertex2f(0.73f,-0.25f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(0.7f,-0.4f);
glEnd();
glPointSize(12);



glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.7f,-0.3f);
glEnd();

glPopMatrix();



glFlush();

}







void rainyday() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


glPushMatrix();
glTranslatef(0.0f,0.0f, 0.0f);
///River
   glBegin(GL_QUADS);
      glColor3ub(33,150,243);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f( 1.0f, -1.0f);
      glVertex2f( 1.0f,  -0.65f);
      glVertex2f(-1.0f, -0.65f);
      glEnd();
//Boat1
glTranslatef(positionB1,0.0f, 0.0f);
glBegin(GL_QUADS);
      glColor3ub(189, 0, 0); ///1
      glVertex2f(-0.5f, -0.96f);
      glVertex2f(-0.1f, -0.96f);
      glVertex2f( 0.0f, -0.9f);
      glVertex2f(-0.5f, -0.9f);
      glEnd();
glBegin(GL_QUADS); ///2
      glColor3ub(255, 255, 255);
      glVertex2f(-0.45f, -0.9f);
      glVertex2f(-0.1f, -0.9f);
      glVertex2f(-0.15f,-0.85f);
      glVertex2f(-0.45f, -0.85f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(189, 0, 0);
      glVertex2f(-0.4f, -0.85f);
      glVertex2f(-0.2f, -0.85f);
      glVertex2f(-0.25f,-0.8f);
      glVertex2f(-0.4f, -0.8f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(255, 255, 255);
      glVertex2f(-0.35f, -0.8f);
      glVertex2f(-0.28f, -0.8f);
      glVertex2f(-0.3f,-0.75f);
      glVertex2f(-0.35f, -0.75f);
      glEnd();
//Boat2
      glTranslatef(positionB2,0.0f, 0.0f);
      glBegin(GL_QUADS); ///1
      glColor3ub(60, 39, 15);
      glVertex2f(0.4f, -0.96f);
      glVertex2f(0.8f,-0.96f);
      glVertex2f(0.85f,-0.9f);
      glVertex2f(0.35f, -0.9f);
      glEnd();
glBegin(GL_QUADS); ///2
      glColor3ub(213, 159, 236);
      glVertex2f(0.43f, -0.9f);
      glVertex2f(0.77f,-0.9f);
      glVertex2f(0.77f,-0.87f);
      glVertex2f(0.43f, -0.87f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(0, 0, 0);
      glVertex2f(0.54f, -0.87f);
      glVertex2f(0.56f,-0.87f);
      glVertex2f(0.56f,-0.84f);
      glVertex2f(0.54f, -0.84f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(0, 0, 0);
      glVertex2f(0.57f, -0.87f);
      glVertex2f(0.59f,-0.87f);
      glVertex2f(0.59f,-0.84f);
      glVertex2f(0.57f, -0.84f);
      glEnd();
glBegin(GL_TRIANGLES); ///5
      glColor3ub(235, 118, 166);
      glVertex2f(0.46f, -0.84f);
      glVertex2f(0.56f,-0.84f);
      glVertex2f(0.56f,-0.7f);
      glEnd();
glBegin(GL_TRIANGLES); ///6
      glColor3ub(194, 0, 194);
      glVertex2f(0.57f, -0.84f);
      glVertex2f(0.7f,-0.84f);
      glVertex2f(0.57f,-0.7f);
      glEnd();
      glPopMatrix();


      glPushMatrix();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, -0.65f);
      glVertex2f(-0.9f, -0.65f);
      glVertex2f(-0.9f, -0.6f);
      glVertex2f(-1.0f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.9f, -0.65f);
      glVertex2f(-0.7f, -0.65f);
      glVertex2f(-0.7f, -0.6f);
      glVertex2f(-0.9f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f, -0.65f);
      glVertex2f(-0.5f, -0.65f);
      glVertex2f(-0.5f, -0.6f);
      glVertex2f(-0.7f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f, -0.65f);
      glVertex2f(-0.3f, -0.65f);
      glVertex2f(-0.3f, -0.6f);
      glVertex2f(-0.5f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f, -0.65f);
      glVertex2f(-0.1f, -0.65f);
      glVertex2f(-0.1f, -0.6f);
      glVertex2f(-0.3f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.1f, -0.65f);
      glVertex2f(0.1f, -0.65f);
      glVertex2f(0.1f, -0.6f);
      glVertex2f(-0.1f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.1f, -0.65f);
      glVertex2f(0.3f, -0.65f);
      glVertex2f(0.3f, -0.6f);
      glVertex2f(0.1f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.3f, -0.65f);
      glVertex2f(0.5f, -0.65f);
      glVertex2f(0.5f, -0.6f);
      glVertex2f(0.3f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f, -0.65f);
      glVertex2f(0.7f, -0.65f);
      glVertex2f(0.7f, -0.6f);
      glVertex2f(0.5f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.7f, -0.65f);
      glVertex2f(0.9f, -0.65f);
      glVertex2f(0.9f, -0.6f);
      glVertex2f(0.7f, -0.6f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.9f, -0.65f);
      glVertex2f(1.0f, -0.65f);
      glVertex2f(1.0f, -0.6f);
      glVertex2f(0.9f, -0.6f);
      glEnd();


///UpperSide
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-1.0f, -0.05f);
      glVertex2f(-0.9f, -0.05f);
      glVertex2f(-0.9f, 0.0f);
      glVertex2f(-1.0f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.9f,-0.05f);
      glVertex2f(-0.7f, -0.05f);
      glVertex2f(-0.7f, -0.0f);
      glVertex2f(-0.9f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.7f,-0.05f);
      glVertex2f(-0.5f, -0.05f);
      glVertex2f(-0.5f, -0.0f);
      glVertex2f(-0.7f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f,-0.05f);
      glVertex2f(-0.3f, -0.05f);
      glVertex2f(-0.3f, -0.0f);
      glVertex2f(-0.5f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(-0.3f,-0.05f);
      glVertex2f(-0.1f, -0.05f);
      glVertex2f(-0.1f, -0.0f);
      glVertex2f(-0.3f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(-0.1f,-0.05f);
      glVertex2f(0.1f, -0.05f);
      glVertex2f(0.1f, -0.0f);
      glVertex2f(-0.1f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.1f,-0.05f);
      glVertex2f(0.3f, -0.05f);
      glVertex2f(0.3f, -0.0f);
      glVertex2f(0.1f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.3f,-0.05f);
      glVertex2f(0.5f, -0.05f);
      glVertex2f(0.5f, -0.0f);
      glVertex2f(0.3f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.5f,-0.05f);
      glVertex2f(0.7f, -0.05f);
      glVertex2f(0.7f, -0.0f);
      glVertex2f(0.5f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(255, 255, 255);
      glVertex2f(0.7f,-0.05f);
      glVertex2f(0.9f, -0.05f);
      glVertex2f(0.9f, -0.0f);
      glVertex2f(0.7f, 0.0f);
      glEnd();
///Black and White bits Road
glBegin(GL_QUADS);
      glColor3ub(0, 0, 0);
      glVertex2f(0.9f,-0.05f);
      glVertex2f(1.0f, -0.05f);
      glVertex2f(1.0f, -0.0f);
      glVertex2f(0.9f, 0.0f);
      glEnd();
/// Road
glBegin(GL_QUADS);
      glColor3ub(92, 92, 92);
      glVertex2f(-1.0f,-0.6f);
      glVertex2f(1.0f, -0.6f);
      glVertex2f(1.0f, -0.05f);
      glVertex2f(-1.0f,-0.05f);
      glEnd();
///Road Middle Line

glBegin(GL_QUADS); ///1
      glColor3ub(255, 255, 0);
      glVertex2f(-1.0f,-0.36f);
      glVertex2f(-0.8f, -0.36f);
      glVertex2f(-0.8f, -0.33f);
      glVertex2f(-1.0f,-0.33f);
      glEnd();

glBegin(GL_QUADS); ///2
      glColor3ub(255, 255, 0);
      glVertex2f(-0.7f,-0.36f);
      glVertex2f(-0.5f, -0.36f);
      glVertex2f(-0.5f, -0.33f);
      glVertex2f(-0.7f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///3
      glColor3ub(255, 255, 0);
      glVertex2f(-0.4f,-0.36f);
      glVertex2f(-0.2f, -0.36f);
      glVertex2f(-0.2f, -0.33f);
      glVertex2f(-0.4f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///4
      glColor3ub(255, 255, 0);
      glVertex2f(-0.1f,-0.36f);
      glVertex2f(0.1f, -0.36f);
      glVertex2f(0.1f, -0.33f);
      glVertex2f(-0.1f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///5
      glColor3ub(255, 255, 0);
      glVertex2f(0.2f,-0.36f);
      glVertex2f(0.4f, -0.36f);
      glVertex2f(0.4f, -0.33f);
      glVertex2f(0.2f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///6
      glColor3ub(255, 255, 0);
      glVertex2f(0.5f,-0.36f);
      glVertex2f(0.7f, -0.36f);
      glVertex2f(0.7f, -0.33f);
      glVertex2f(0.5f,-0.33f);
      glEnd();
glBegin(GL_QUADS); ///7
      glColor3ub(255, 255, 0);
      glVertex2f(0.8f,-0.36f);
      glVertex2f(1.0f, -0.36f);
      glVertex2f(1.0f, -0.33f);
      glVertex2f(0.8f,-0.33f);
      glEnd();
 //end road
 ///sky
glBegin(GL_QUADS);
    glColor3ub(147,222,251);
    glVertex2f(-1,1);
    glVertex2f(-1,0.0);
    glVertex2f(1,0.0);
    glVertex2f(1,1);
    glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(positionA1,0.0f, 0.0f);
///Aeroplane
    glBegin(GL_POLYGON);///Body
    glColor3ub(0, 119, 230);
    glVertex2f( -0.66f, 0.7f);
    glVertex2f( -0.66f, 0.69f);
    glVertex2f( -0.59f, 0.65f);
    glVertex2f( -0.38f, 0.65f);
    glVertex2f( -0.36f, 0.67f);
    glVertex2f( -0.36f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.4f, 0.7f);
    glEnd();
   glBegin(GL_QUADS);///Engine
    glColor3ub(0,0,0);
    glVertex2f( -0.49f, 0.64f);
    glVertex2f( -0.49f, 0.62f);
    glVertex2f( -0.47f, 0.62f);
    glVertex2f( -0.47f, 0.64f);
    glEnd();
    glBegin(GL_QUADS);///Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.49f, 0.66f);
    glVertex2f( -0.55f, 0.61f);
    glVertex2f( -0.53f, 0.61f);
    glVertex2f( -0.45f, 0.66f);
    glEnd();
    glBegin(GL_QUADS);///Back Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.53f, 0.73f);
    glVertex2f( -0.5f, 0.7f);
    glVertex2f( -0.47f, 0.7f);
    glVertex2f( -0.51f, 0.73f);
    glEnd();
    glBegin(GL_QUADS);///Tail Top Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.63f, 0.74f);
    glVertex2f( -0.62f, 0.7f);
    glVertex2f( -0.59f, 0.7f);
    glVertex2f( -0.62f, 0.74f);
    glEnd();
    glBegin(GL_QUADS);///Tail Front Wing
    glColor3ub(255,255,255);
    glVertex2f( -0.61f, 0.69f);
    glVertex2f( -0.64f, 0.67f);
    glVertex2f( -0.61f, 0.67f);
    glVertex2f( -0.58f, 0.69f);
    glEnd();

    glBegin(GL_QUADS);///Front
    glColor3ub(255,255,255);
    glVertex2f( -0.4f, 0.69f);
    glVertex2f( -0.4f, 0.68f);
    glVertex2f( -0.37f, 0.68f);
    glVertex2f( -0.39f, 0.69f);
    glEnd();
   glPointSize(3);///Windows
   glBegin(GL_POINTS);
   glColor3ub(255,255,255);
   glVertex2f(-0.57f,0.68f);
   glVertex2f(-0.53f,0.68f);
   glVertex2f(-0.49f,0.68f);
   glVertex2f(-0.46f,0.68f);
   glVertex2f(-0.43f,0.68f);
   glEnd();
glPopMatrix();
glPushMatrix();
glTranslatef(positionC1,0.0f, 0.0f);
    circle(-1.0f, 0.7f, 0.05f);
    circle(-0.9f, 0.7f, 0.05f);
    circle(-0.95f, 0.73f, 0.05f);
    circle(-0.95f, 0.68f, 0.05f);
glTranslatef(positionC2,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud2
    circle(-0.4f, 0.8f, 0.05f);
    circle(-0.3f, 0.8f, 0.05f);
    circle(-0.35f, 0.83f, 0.05f);
    circle(-0.35f, 0.78f, 0.05f);
glTranslatef(positionC3,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud3
    circle(0.1f, 0.6f, 0.05f);
    circle(0.2f, 0.6f, 0.05f);
    circle(0.15f, 0.63f, 0.05f);
    circle(0.15f, 0.58f, 0.05f);
    glTranslatef(positionC4,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud4
    circle(0.4f, 0.9f, 0.05f);
    circle(0.5f, 0.9f, 0.05f);
    circle(0.45f, 0.93f, 0.05f);
    circle(0.45f, 0.88f, 0.05f);
    glTranslatef(positionC5,0.0f, 0.0f);
glColor3ub(255, 255, 255); ///cloud5
    circle(0.6f, 0.6f, 0.05f);
    circle(0.7f, 0.6f, 0.05f);
    circle(0.65f, 0.58f, 0.05f);
    circle(0.65f, 0.64f, 0.05f);
 glEnd();
 ///Bird
glTranslatef(positionBD1,0.0f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD2, 0.02f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD3, 0.05f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD4, 0.05f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
glTranslatef(positionBD5, 0.08f, 0.0f);
glBegin(GL_LINES);
glColor3ub(0, 0, 0);
glVertex2f(-0.6f,0.7f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.59f,0.68f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.58f,0.7f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.57f,0.68f);
glVertex2f(-0.56f,0.7f);
glEnd();
///end bird
glPopMatrix();
glPushMatrix();
///Building Start
///Building11
glBegin(GL_POLYGON);
    glColor3ub(145,57,23);///Body
    glVertex2f(-.94,0.4);
    glVertex2f(-.8,0.4);
    glVertex2f(-.75,.35);
    glVertex2f(-.75,0.0);
    glVertex2f(-.68,0.0);
    glVertex2f(-.68,.53);
    glVertex2f(-.94,.53);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.68f,0.53f);
    glVertex2f(-.68f,0.0f);
    glVertex2f(-.94f,0.53f);
    glVertex2f(-.68f,0.53f);
    glVertex2f(-.71f,0.53f);
    glVertex2f(-.71f,0.0f);
    glVertex2f(-.75f,0.53f);
    glVertex2f(-.75f,0.0f);
    glVertex2f(-.79f,0.53f);
    glVertex2f(-.79f,0.0f);
    glVertex2f(-.83f,0.53f);
    glVertex2f(-.83f,0.0f);
    glVertex2f(-.87f,0.53f);
    glVertex2f(-.87f,0.0f);
    glVertex2f(-.91f,0.53f);
    glVertex2f(-.91f,0.0f);
    glVertex2f(-.94f,0.53f);
    glVertex2f(-.94f,0.0f);
    glEnd();
///Building31
glBegin(GL_POLYGON);
    glColor3ub(0, 97, 97);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.3,0.5);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.26,0.0);
    glVertex2f(-0.26,0.3);
    glVertex2f(-0.14,0.3);
    glVertex2f(-0.14,0.55);
    glVertex2f(-0.4,0.55);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.14f,0.5f);
    glVertex2f(-.4f,0.55f);
    glVertex2f(-.14f,0.55f);
    glVertex2f(-.4f,0.45f);
    glVertex2f(-.14f,0.45f);
    glVertex2f(-.4f,0.4f);
    glVertex2f(-.14f,0.4f);
    glVertex2f(-.4f,0.35f);
    glVertex2f(-.14f,0.35f);
    glVertex2f(-.4f,0.3f);
    glVertex2f(-.14f,0.3f);
    glVertex2f(-.4f,0.25f);
    glVertex2f(-.14f,0.25f);
    glVertex2f(-.4f,0.2f);
    glVertex2f(-.14f,0.2f);
    glVertex2f(-.4f,0.15f);
    glVertex2f(-.14f,0.15f);
    glVertex2f(-.4f,0.1f);
    glVertex2f(-.14f,0.1f);
    glVertex2f(-.4f,0.05f);
    glVertex2f(-.14f,0.05f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.14f,0.0f);
    glVertex2f(-.4f,0.55f);
    glVertex2f(-.4f,0.0f);
glVertex2f(-.14f,0.55f);
    glVertex2f(-.14f,0.0f);
    glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.29f,0.5f);
      glVertex2f(-0.23f, 0.5f);
      glVertex2f(-0.23f, 0.45f);
      glVertex2f(-0.29f, 0.45f);
      glEnd();
glBegin(GL_QUADS);///2
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.5f);
      glVertex2f(-0.15f, 0.5f);
      glVertex2f(-0.15f, 0.45f);
      glVertex2f(-0.21f, 0.45f);
      glEnd();
glBegin(GL_QUADS);///3
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.35f);
      glVertex2f(-0.23f, 0.35f);
      glVertex2f(-0.23f, 0.4f);
      glVertex2f(-0.29f, 0.4f);
      glEnd();
glBegin(GL_QUADS);///4
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.35f);
      glVertex2f(-0.15f, 0.35f);
      glVertex2f(-0.15f, 0.4f);
      glVertex2f(-0.21f, 0.4f);
      glEnd();
glBegin(GL_QUADS);///5
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.3f);
      glVertex2f(-0.15f, 0.3f);
      glVertex2f(-0.15f, 0.25f);
      glVertex2f(-0.21f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///6
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.3f);
      glVertex2f(-0.23f, 0.3f);
      glVertex2f(-0.23f, 0.25f);
      glVertex2f(-0.29f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///7
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.2f);
      glVertex2f(-0.23f, 0.2f);
      glVertex2f(-0.23f, 0.15f);
      glVertex2f(-0.29f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///8
      glColor3ub(0, 0, 0);
      glVertex2f(-0.29f,0.1f);
      glVertex2f(-0.23f, 0.1f);
      glVertex2f(-0.23f, 0.05f);
      glVertex2f(-0.29f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///9
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.2f);
      glVertex2f(-0.15f, 0.2f);
      glVertex2f(-0.15f, 0.15f);
      glVertex2f(-0.21f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///10
      glColor3ub(0, 0, 0);
      glVertex2f(-0.21f,0.1f);
      glVertex2f(-0.15f, 0.1f);
      glVertex2f(-0.15f, 0.05f);
      glVertex2f(-0.21f, 0.05f);
      glEnd();
///Building32
glBegin(GL_POLYGON);
    glColor3ub(206,218,126);
    glVertex2f(-.6,0.45);
    glVertex2f(-.4,0.45);
    glVertex2f(-.35,0.4);
    glVertex2f(-.35,0.0);
    glVertex2f(-0.3,0.0);
    glVertex2f(-0.3,0.5);
    glVertex2f(-.6,0.5);
    glEnd();
glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.3f,0.5f);
    glVertex2f(-.6f,0.4f);
    glVertex2f(-.3f,0.4f);
    glVertex2f(-.6f,0.3f);
    glVertex2f(-.3f,0.3f);
    glVertex2f(-.6f,0.2f);
    glVertex2f(-.3f,0.2f);
    glVertex2f(-.6f,0.1f);
    glVertex2f(-.3f,0.1f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.3f,0.0f);
    glVertex2f(-.6f,0.5f);
    glVertex2f(-.6f,0.0f);
    glVertex2f(-.5f,0.5f);
    glVertex2f(-.5f,0.0f);
    glVertex2f(-.4f,0.5f);
    glVertex2f(-.4f,0.0f);
    glVertex2f(-.3f,0.5f);
    glVertex2f(-.3f,0.0f);
    glEnd();
  ///Building41
glBegin(GL_QUADS);///Body
      glColor3ub(224, 191, 0);
      glVertex2f(-0.03f,0.45f);
      glVertex2f(0.25f, 0.45f);
      glVertex2f(0.25f, 0.0f);
      glVertex2f(-0.03f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.01f,0.4f);
      glVertex2f(0.05f, 0.4f);
      glVertex2f(0.05f, 0.32f);
      glVertex2f(-0.01f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.07f,0.4f);
      glVertex2f(0.13f, 0.4f);
      glVertex2f(0.13f, 0.32f);
      glVertex2f(0.07f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.15f,0.4f);
      glVertex2f(0.21f, 0.4f);
      glVertex2f(0.21f, 0.32f);
      glVertex2f(0.15f, 0.32f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.01f,0.3f);
      glVertex2f(0.05f, 0.3f);
      glVertex2f(0.05f, 0.22f);
      glVertex2f(-0.01f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(-0.01f,0.2f);
      glVertex2f(0.05f, 0.2f);
      glVertex2f(0.05f, 0.12f);
      glVertex2f(-0.01f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(-0.01f,0.1f);
      glVertex2f(0.05f, 0.1f);
      glVertex2f(0.05f, 0.02f);
      glVertex2f(-0.01f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(0.07f,0.3f);
      glVertex2f(0.13f, 0.3f);
      glVertex2f(0.13f, 0.22f);
      glVertex2f(0.07f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(0.07f,0.2f);
      glVertex2f(0.13f, 0.2f);
      glVertex2f(0.13f, 0.12f);
      glVertex2f(0.07f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///9
      glVertex2f(0.07f,0.1f);
      glVertex2f(0.13f, 0.1f);
      glVertex2f(0.13f, 0.02f);
      glVertex2f(0.07f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///10
      glVertex2f(0.15f,0.3f);
      glVertex2f(0.21f, 0.3f);
      glVertex2f(0.21f, 0.22f);
      glVertex2f(0.15f, 0.22f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///11
      glVertex2f(0.15f,0.2f);
      glVertex2f(0.21f, 0.2f);
      glVertex2f(0.21f, 0.12f);
      glVertex2f(0.15f, 0.12f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///12
      glVertex2f(0.15f,0.1f);
      glVertex2f(0.21f, 0.1f);
      glVertex2f(0.21f, 0.02f);
      glVertex2f(0.15f, 0.02f);
      glEnd();
    ///Building51
glBegin(GL_QUADS);///Body
      glColor3ub(176,190,197);
      glVertex2f(0.33f,0.47f);
      glVertex2f(0.63f, 0.47f);
      glVertex2f(0.63f, 0.0f);
      glVertex2f(0.33f, 0.0f);
      glEnd();
glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(.33f,0.47f);
    glVertex2f(.33f,0.0f);
    glVertex2f(.63f,0.47f);
    glVertex2f(.63f,0.0f);
    glVertex2f(.38f,0.47f);
    glVertex2f(.38f,0.0f);
    glVertex2f(.43f,0.47f);
    glVertex2f(.43f,0.0f);
    glVertex2f(.48f,0.47f);
    glVertex2f(.48f,0.0f);
    glVertex2f(.53f,0.47f);
    glVertex2f(.53f,0.0f);
    glVertex2f(.58f,0.47f);
    glVertex2f(.58f,0.0f);
    glVertex2f(.33f,0.47f);
    glVertex2f(.63f,0.47f);
    glEnd();
///Building1
glBegin(GL_QUADS);///Body
      glColor3ub(43,149,159);
      glVertex2f(-0.99f,0.4f);
      glVertex2f(-0.8f, 0.4f);
      glVertex2f(-0.8f, 0.0f);
      glVertex2f(-0.99f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(37, 127, 135);
      glVertex2f(-0.8f,0.4f);
      glVertex2f(-0.75f, 0.35f);
      glVertex2f(-0.75f, 0.0f);
      glVertex2f(-0.8f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.97f,0.36f);
      glVertex2f(-0.91f, 0.36f);
      glVertex2f(-0.91f, 0.3f);
      glVertex2f(-0.97f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(-0.88f,0.36f);
      glVertex2f(-0.82f, 0.36f);
      glVertex2f(-0.82f, 0.3f);
      glVertex2f(-0.88f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(-0.97f,0.23f);
      glVertex2f(-0.91f, 0.23f);
      glVertex2f(-0.91f, 0.17f);
      glVertex2f(-0.97f, 0.17f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.88f,0.23f);
      glVertex2f(-0.82f, 0.23f);
      glVertex2f(-0.82f, 0.17f);
      glVertex2f(-0.88f, 0.17f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(-0.97f,0.1f);
      glVertex2f(-0.91f, 0.1f);
      glVertex2f(-0.91f, 0.04f);
      glVertex2f(-0.97f, 0.04f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(-0.88f,0.1f);
      glVertex2f(-0.82f, 0.1f);
      glVertex2f(-0.82f, 0.04f);
      glVertex2f(-0.88f, 0.04f);
      glEnd();

///Building2
glBegin(GL_QUADS);///Body
      glColor3ub(73, 146, 75);
      glVertex2f(-0.65f,0.45f);
      glVertex2f(-0.38f, 0.45f);
      glVertex2f(-0.38f, 0.0f);
      glVertex2f(-0.65f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(52, 129, 54);
      glVertex2f(-0.38f,0.45f);
      glVertex2f(-0.35f, 0.4f);
      glVertex2f(-0.35f, 0.0f);
      glVertex2f(-0.38f, 0.0f);
      glEnd();

glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(-0.63f,0.4f);
      glVertex2f(-0.57f, 0.4f);
      glVertex2f(-0.57f, 0.33f);
      glVertex2f(-0.63f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(-0.55f,0.4f);
      glVertex2f(-0.49f, 0.4f);
      glVertex2f(-0.49f, 0.33f);
      glVertex2f(-0.55f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(-0.47f,0.4f);
      glVertex2f(-0.41f, 0.4f);
      glVertex2f(-0.41f, 0.33f);
      glVertex2f(-0.47f, 0.33f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.63f,0.29f);
      glVertex2f(-0.57f, 0.29f);
      glVertex2f(-0.57f, 0.23f);
      glVertex2f(-0.63f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(-0.63f,0.19f);
      glVertex2f(-0.57f, 0.19f);
      glVertex2f(-0.57f, 0.13f);
      glVertex2f(-0.63f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(-0.63f,0.09f);
      glVertex2f(-0.57f, 0.09f);
      glVertex2f(-0.57f, 0.03f);
      glVertex2f(-0.63f, 0.03f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(-0.55f,0.09f);
      glVertex2f(-0.49f, 0.09f);
      glVertex2f(-0.49f, 0.03f);
      glVertex2f(-0.55f, 0.03f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///9
      glVertex2f(-0.55f,0.19f);
      glVertex2f(-0.49f, 0.19f);
      glVertex2f(-0.49f, 0.13f);
      glVertex2f(-0.55f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///10
      glVertex2f(-0.55f,0.29f);
      glVertex2f(-0.49f, 0.29f);
      glVertex2f(-0.49f, 0.23f);
      glVertex2f(-0.55f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///11
      glVertex2f(-0.47f,0.29f);
      glVertex2f(-0.41f, 0.29f);
      glVertex2f(-0.41f, 0.23f);
      glVertex2f(-0.47f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///12
      glVertex2f(-0.47f,0.19f);
      glVertex2f(-0.41f, 0.19f);
      glVertex2f(-0.41f, 0.13f);
      glVertex2f(-0.47f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///13
      glVertex2f(-0.47f,0.09f);
      glVertex2f(-0.41f, 0.09f);
      glVertex2f(-0.41f, 0.03f);
      glVertex2f(-0.47f, 0.03f);
      glEnd();
///Building3
glBegin(GL_QUADS);///Body
      glColor3ub(209, 202, 211);
      glVertex2f(-0.26f,0.3f);
      glVertex2f(-0.07f, 0.3f);
      glVertex2f(-0.07f, 0.0f);
      glVertex2f(-0.26f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(191, 171, 198);
      glVertex2f(-0.07f,0.3f);
      glVertex2f(-0.05f, 0.25f);
      glVertex2f(-0.05f, 0.0f);
      glVertex2f(-0.07f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0,0,0);///1
      glVertex2f(-0.24f,0.24f);
      glVertex2f(-0.16f, 0.24f);
      glVertex2f(-0.16f, 0.16f);
      glVertex2f(-0.24f, 0.16f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0,0,0);///2
      glVertex2f(-0.24f,0.13f);
      glVertex2f(-0.16f, 0.13f);
      glVertex2f(-0.16f, 0.05f);
      glVertex2f(-0.24f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(-0.14f,0.24f);
      glVertex2f(-0.08f, 0.24f);
      glVertex2f(-0.08f, 0.16f);
      glVertex2f(-0.14f, 0.16f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(-0.14f,0.13f);
      glVertex2f(-0.08f, 0.13f);
      glVertex2f(-0.08f, 0.05f);
      glVertex2f(-0.14f, 0.05f);
      glEnd();
//Building4
glBegin(GL_QUADS);///Body
      glColor3ub(42,104,144);
      glVertex2f(0.03f,0.35f);
      glVertex2f(0.23f, 0.35f);
      glVertex2f(0.23f, 0.0f);
      glVertex2f(0.03f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(20,72,106);
      glVertex2f(0.23f,0.35f);
      glVertex2f(0.26f, 0.3f);
      glVertex2f(0.26f, 0.0f);
      glVertex2f(0.23f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.05f,0.29f);
      glVertex2f(0.12f, 0.29f);
      glVertex2f(0.12f, 0.23f);
      glVertex2f(0.05f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.05f,0.20f);
      glVertex2f(0.12f, 0.20f);
      glVertex2f(0.12f, 0.14f);
      glVertex2f(0.05f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.05f,0.11f);
      glVertex2f(0.12f, 0.11f);
      glVertex2f(0.12f, 0.05f);
      glVertex2f(0.05f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.14f,0.29f);
      glVertex2f(0.21f, 0.29f);
      glVertex2f(0.21f, 0.23f);
      glVertex2f(0.14f, 0.23f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(0.14f,0.20f);
      glVertex2f(0.21f, 0.20f);
      glVertex2f(0.21f, 0.14f);
      glVertex2f(0.14f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(0.14f,0.11f);
      glVertex2f(0.21f, 0.11f);
      glVertex2f(0.21f, 0.05f);
      glVertex2f(0.14f, 0.05f);
      glEnd();
///Building5
glBegin(GL_QUADS);///Body
      glColor3ub(169,238,59);
      glVertex2f(0.28f,0.4f);
      glVertex2f(0.54f, 0.4f);
      glVertex2f(0.54f, 0.0f);
      glVertex2f(0.28f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(107,171,5);
      glVertex2f(0.54f,0.4f);
      glVertex2f(0.59f, 0.35f);
      glVertex2f(0.59f, 0.0f);
      glVertex2f(0.54f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.31f,0.35f);
      glVertex2f(0.37f, 0.35f);
      glVertex2f(0.37f, 0.26f);
      glVertex2f(0.31f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.31f,0.23f);
      glVertex2f(0.37f, 0.23f);
      glVertex2f(0.37f, 0.14f);
      glVertex2f(0.31f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.31f,0.11f);
      glVertex2f(0.37f, 0.11f);
      glVertex2f(0.37f, 0.02f);
      glVertex2f(0.31f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.39f,0.35f);
      glVertex2f(0.45f, 0.35f);
      glVertex2f(0.45f, 0.26f);
      glVertex2f(0.39f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(0.39f,0.23f);
      glVertex2f(0.45f, 0.23f);
      glVertex2f(0.45f, 0.14f);
      glVertex2f(0.39f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(0.39f,0.11f);
      glVertex2f(0.45f, 0.11f);
      glVertex2f(0.45f, 0.02f);
      glVertex2f(0.39f, 0.02f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(0.47f,0.35f);
      glVertex2f(0.53f, 0.35f);
      glVertex2f(0.53f, 0.26f);
      glVertex2f(0.47f, 0.26f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(0.47f,0.23f);
      glVertex2f(0.53f, 0.23f);
      glVertex2f(0.53f, 0.14f);
      glVertex2f(0.47f, 0.14f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///9
      glVertex2f(0.47f,0.11f);
      glVertex2f(0.53f, 0.11f);
      glVertex2f(0.53f, 0.02f);
      glVertex2f(0.47f, 0.02f);
      glEnd();
///Building6
glBegin(GL_QUADS);///Body
      glColor3ub(114,131,87);
      glVertex2f(0.68f,0.5f);
      glVertex2f(0.92f, 0.5f);
      glVertex2f(0.92f, 0.0f);
      glVertex2f(0.68f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(71,87,45);
      glVertex2f(0.92f,0.5f);
      glVertex2f(0.97f, 0.45f);
      glVertex2f(0.97f, 0.0f);
      glVertex2f(0.92f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.71f,0.47f);
      glVertex2f(0.78f, 0.47f);
      glVertex2f(0.78f, 0.37f);
      glVertex2f(0.71f, 0.37f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.71f,0.34f);
      glVertex2f(0.78f, 0.34f);
      glVertex2f(0.78f, 0.25f);
      glVertex2f(0.71f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.71f,0.23f);
      glVertex2f(0.78f, 0.23f);
      glVertex2f(0.78f, 0.15f);
      glVertex2f(0.71f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.71f,0.13f);
      glVertex2f(0.78f, 0.13f);
      glVertex2f(0.78f, 0.05f);
      glVertex2f(0.71f, 0.05f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///5
      glVertex2f(0.81f,0.47f);
      glVertex2f(0.88f, 0.47f);
      glVertex2f(0.88f, 0.37f);
      glVertex2f(0.81f, 0.37f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///6
      glVertex2f(0.81f,0.34f);
      glVertex2f(0.88f, 0.34f);
      glVertex2f(0.88f, 0.25f);
      glVertex2f(0.81f, 0.25f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///7
      glVertex2f(0.81f,0.23f);
      glVertex2f(0.88f, 0.23f);
      glVertex2f(0.88f, 0.15f);
      glVertex2f(0.81f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///8
      glVertex2f(0.81f,0.13f);
      glVertex2f(0.88f, 0.13f);
      glVertex2f(0.88f, 0.05f);
      glVertex2f(0.81f, 0.05f);
      glEnd();
///Building56
glBegin(GL_QUADS);///Body
      glColor3ub(191, 49, 49);
      glVertex2f(0.46f,0.0f);
      glVertex2f(0.75f, 0.0f);
      glVertex2f(0.75f, 0.3f);
      glVertex2f(0.46f, 0.3f);
      glEnd();
glBegin(GL_QUADS);///Body
      glColor3ub(206, 64, 64);
      glVertex2f(0.75f,0.3f);
      glVertex2f(0.8f, 0.27f);
      glVertex2f(0.8f, 0.0f);
      glVertex2f(0.75f, 0.0f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///1
      glVertex2f(0.5f,0.03f);
      glVertex2f(0.6f, 0.03f);
      glVertex2f(0.6f, 0.13f);
      glVertex2f(0.5f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///2
      glVertex2f(0.5f,0.25f);
      glVertex2f(0.6f, 0.25f);
      glVertex2f(0.6f, 0.15f);
      glVertex2f(0.5f, 0.15f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///3
      glVertex2f(0.62f,0.03f);
      glVertex2f(0.72f, 0.03f);
      glVertex2f(0.72f, 0.13f);
      glVertex2f(0.62f, 0.13f);
      glEnd();
glBegin(GL_QUADS);///Windows
      glColor3ub(0, 0, 0);///4
      glVertex2f(0.62f,0.25f);
      glVertex2f(0.72f, 0.25f);
      glVertex2f(0.72f, 0.15f);
      glVertex2f(0.62f, 0.15f);
      glEnd();
///Road Lights
///Road Light1
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
///Road Light2
glTranslatef(.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
    glLoadIdentity();
///Road Light3
glTranslatef(.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
glLoadIdentity();
///Road Light4
glTranslatef(-.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
glLoadIdentity();
///Road Light5
glTranslatef(-0.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,-.6);
    glVertex2f(.005,-.20);
    glVertex2f(-.005,-.20);
    glVertex2f(-.005,-.6);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,-.13);
    glVertex2f(-.08,-.13);
    glVertex2f(-.1,-.15);
    glVertex2f(-.03,-.15);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.005,-.20);
    glVertex2f(.0,-.20);
    glVertex2f(-.03,-.13);
    glVertex2f(-.03,-.15);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.1,-.15);
    glVertex2f(.08,-.13);
    glVertex2f(.03,-.13);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,-.15);
    glVertex2f(.03,-.13);
    glVertex2f(.0,-.20);
    glVertex2f(.005,-.20);
    glEnd();
glLoadIdentity();
///Upper side
///Road Light1
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
///Road Light2
glTranslatef(.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();
///Road Light3
glTranslatef(.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();
///Road Light4
glTranslatef(-.45,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();
///Road Light5
glTranslatef(-.9,0,0);
///road light stand
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,0.0);
    glVertex2f(.005,.20);
    glVertex2f(-.005,.20);
    glVertex2f(-.005,0.0);
    glEnd();
///left
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.03,.25);
    glVertex2f(.09,.25);
    glVertex2f(.08,.27);
    glVertex2f(.03,.27);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(.005,.20);
    glVertex2f(0.0,.20);
    glVertex2f(.03,.25);
    glVertex2f(.03,.27);
    glEnd();
///right
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.08,.27);
    glVertex2f(-.09,.25);
    glVertex2f(-.03,.25);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(102, 102, 102);
    glVertex2f(-.03,.27);
    glVertex2f(-.03,.25);
    glVertex2f(0.0,.20);
    glVertex2f(-.005,.20);
    glEnd();
glLoadIdentity();


///Traffic Light
glBegin(GL_QUADS);
///Stand
glColor3ub(0, 0, 0);
glVertex2f(-0.71f,0.23f);
glVertex2f(-0.7f,0.23f);
glVertex2f(-0.7f,0.0f);
glVertex2f(-0.71f,0.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(-0.73f,0.15f);
glVertex2f(-0.68f,0.15f);
glVertex2f(-0.68f,0.35f);
glVertex2f(-0.73f,0.35f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(-0.71f,0.3f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(-0.71f,0.2f);
glEnd();


///stand



glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(0.71f,-0.65f);
glVertex2f(0.7f,-0.65f);
glVertex2f(0.7f,-0.42f);
glVertex2f(0.71f,-0.42f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(0, 102, 102);
glVertex2f(0.73f,-0.45f);
glVertex2f(0.68f,-0.45f);
glVertex2f(0.68f,-0.25f);
glVertex2f(0.73f,-0.25f);
glEnd();
glPointSize(12);
glBegin(GL_POINTS);
glColor3f(0,1,0);
glVertex2f(0.7f,-0.4f);
glEnd();
glPointSize(12);



glBegin(GL_POINTS);
glColor3f(1,0,0);
glVertex2f(0.7f,-0.3f);
glEnd();

glPopMatrix();


glPushMatrix();
glTranslatef(0,-positionRain,0);
glBegin(GL_LINES);
    glColor3ub(204, 204, 179);


    glVertex2f(0.17,0.6);
    glVertex2f(0.15,0.5);

    glVertex2f(-0.17,0.7);
    glVertex2f(-0.15,0.8);

    glVertex2f(-0.27,0.5);
    glVertex2f(-0.25,0.6);

     glVertex2f(-0.37,0.6);
    glVertex2f(-0.35,0.7);

     glVertex2f(-0.47,0.4);
    glVertex2f(-0.45,0.5);


    glVertex2f(-0.57,0.3);
    glVertex2f(-0.55,0.4);


     glVertex2f(-0.67,0.8);
    glVertex2f(-0.65,0.9);


     glVertex2f(-0.77,0.8);
    glVertex2f(-0.75,0.9);


     glVertex2f(-0.87,0.1);
    glVertex2f(-0.85,0.2);


     glVertex2f(-0.97,0.1);
    glVertex2f(-0.95,0.2);


    glVertex2f(-0.5,0.1);
    glVertex2f(-0.48,0.2);


     glVertex2f(0.5,0.1);
    glVertex2f(0.52,0.2);


     glVertex2f(0.6,0.2);
    glVertex2f(0.62,0.3);


     glVertex2f(0.7,0.3);
    glVertex2f(0.72,0.4);


    glVertex2f(0.8,0.4);
    glVertex2f(0.82,0.5);


     glVertex2f(0.9,0.3);
    glVertex2f(0.92,0.4);


     glVertex2f(0.6,0.8);
    glVertex2f(0.62,0.9);


     glVertex2f(0.1,0.5);
    glVertex2f(0.12,0.6);


     glVertex2f(0.1,0.8);
    glVertex2f(0.12,0.9);

    glVertex2f(0.2,0.6);
    glVertex2f(0.22,0.7);

     glVertex2f(0.2,0.4);
    glVertex2f(0.22,0.5);

    glVertex2f(0.3,0.1);
    glVertex2f(0.32,0.2);

     glVertex2f(0.4,0.3);
    glVertex2f(0.42,0.4);

    glVertex2f(0.9,-0.3);
    glVertex2f(0.92,-0.2);


      glVertex2f(0.1,-0.3);
    glVertex2f(0.12,-0.2);


     glVertex2f(0.1,0);
    glVertex2f(0.12,0.1);


     glVertex2f(0.1,0.15);
    glVertex2f(0.12,0.25);


    glVertex2f(-0.1,0.15);
    glVertex2f(-0.08,0.25);


    glVertex2f(-0.2,0.1);
    glVertex2f(-0.18,0.2);


     glVertex2f(-0.2,-0.3);
    glVertex2f(-0.18,-0.2);

     glVertex2f(-0.3,-0.5);
    glVertex2f(-0.28,-0.4);


    glVertex2f(-0.8,-0.9);
    glVertex2f(-0.78,-0.8);


    glVertex2f(-0.9,-0.7);
    glVertex2f(-0.88,-0.6);


    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.88,-0.4);


    glVertex2f(-0.9,-1.0);
    glVertex2f(-0.88,-0.9);


    glVertex2f(0.9,-0.5);
    glVertex2f(0.92,-0.4);


     glVertex2f(0.9,-0.9);
    glVertex2f(0.92,-0.8);


    glVertex2f(0.7,-0.9);
    glVertex2f(0.72,-0.8);


    glVertex2f(0.7,-0.3);
    glVertex2f(0.72,-0.2);


    glVertex2f(0.4,-0.3);
    glVertex2f(0.42,-0.2);


    glVertex2f(0.4,-0.6);
    glVertex2f(0.42,-0.5);


    glVertex2f(0.5,-0.3);
    glVertex2f(0.52,-0.2);


    glVertex2f(0.5,-0.7);
    glVertex2f(0.52,-0.6);


    glVertex2f(0.1,-0.7);
    glVertex2f(0.12,-0.6);

    glVertex2f(-0.1,-0.8);
    glVertex2f(-0.08,-0.7);


    glVertex2f(-0.2,-0.8);
    glVertex2f(-0.18,-0.7);



     glVertex2f(-0.3,-0.6);
    glVertex2f(-0.28,-0.5);


    glVertex2f(0.0,-0.6);
    glVertex2f(0.02,-0.5);

    glVertex2f(-0.4,-0.7);
    glVertex2f(-0.38,-0.6);


    glVertex2f(-0.5,-0.9);
    glVertex2f(-0.48,-0.8);


    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.58,-0.3);

    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.68,-0.1);

    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.48,-0.2);
        glEnd();

glPopMatrix();






















glFlush();


}




void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

	case 'd':
    glutDisplayFunc(day);
   // rainday = false;

    break;
 case 'n':
    glutDisplayFunc(night);
    //rainday = false;

    break;
   case 'r':
    glutDisplayFunc(rainyday);
    speedRain+=0.1;



     break;




    glLoadIdentity();
    glutPostRedisplay();

	}
}





int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(640, 480);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Scenario");
   glutDisplayFunc(day);
   init();
   glutKeyboardFunc(handleKeypress);
   //glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}





