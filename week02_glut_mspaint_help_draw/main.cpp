#include <GL/glut.h>///�ϥ�GLUT�~��
void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1,1,1);///���H�K���զ�
        glVertex2f((30-200)/200.0, -(45-200)/200.0); ///3f�N��T�ӯB�I��
        glVertex2f((46-200)/200.0, -(102-200)/200.0);
        glVertex2f((84-200)/200.0, -(23-200)/200.0);
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
