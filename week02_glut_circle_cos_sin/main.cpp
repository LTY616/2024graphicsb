#include <GL/glut.h>///�ϥ�GLUT�~��
#include <math.h> ///���Fcos() �M sin()
void myCircle(float cx, float cy, float r)
{
    glBegin(GL_POLYGON);
    for(float a=0;a<=3.14*2;a+=0.1){
        glVertex2f(r*cos(a)+cx, r*sin(a)+cy);
    }///�T����ƶW�n�� x=cos(a) y=sin(a)
    glEnd();
}
void display()
{
    glColor3f(1,1,1); myCircle(0,0,1);
    glColor3f(0,0,0); myCircle(-0.5,0.5,0.3);
    glColor3f(0,0,0); myCircle(0.5,0.5,0.3);
    glColor3f(0,0,0); myCircle(0,-0.3,0.7);
    glutSwapBuffers();
}

int main(int argc, char *argv[])///�ڭ̪�main�禡
{
    glutInit(&argc, argv);///��l��GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02_glut_color_teapot");///�ص���
    glutDisplayFunc(display);///�]�w�n�e�Ϫ�display�禡
    glutMainLoop();///�D�n�j��
}
