#include <GL/glut.h>///�ϥ�GLUT�~��
void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1); ///3f�N��T�ӯB�I��
        glColor3f(0,1,0); glVertex2f(1,-0.6);
        glColor3f(0,0,1); glVertex2f(-1,-0.6);
    glEnd();
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
