#include <GL/glut.h>///�ϥ�GLUT�~��
void display()
{
    glColor3f( 247/255.0 , 180/255.0 , 171/255.0  );
    glutSolidTeapot(0.3);

    glColor3f( 251/255.0 , 233/255.0 , 219/255.0  );
    glutSolidTeapot(0.2);

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
