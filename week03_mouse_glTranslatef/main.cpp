#include <GL/glut.h>
#include <stdio.h>///���Fprintf()
float teapotX=0, teapotY=0;///�s�[���{��,�Ψө�������y��
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX, teapotY, 0);///��y�в���
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();
}               ///state:0:�W�h, 1�U��
void mouse(int button,int state,int x,int y)
{///�o�̭n�������ץ�
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
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
