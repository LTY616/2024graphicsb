#include <GL/glut.h>///�ϥ�GLUT�~��
#include <stdio.h>
void display()
{
    glutSolidTeapot(0.3);///�ۤv�g
    glutSwapBuffers();///�ۤv�g
}
void mouse(int button,int state,int x,int y)
{///�w�qmouse�禡 button:0����, 1:����, 2:�k��
    ///printf("Hello world\"); ///�J��mouse�LHello
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
    }
}
int main(int argc, char *argv[])///�ڭ̪�main�禡
{
    glutInit(&argc, argv);///��l��GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse");///�ص���

    glutDisplayFunc(display);///�]�w�n�e�Ϫ�display�禡
    glutMouseFunc(mouse);

    glutMainLoop();///�D�n�j��
}
