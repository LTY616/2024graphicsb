#include <GL/glut.h>
void myBody(){
    glColor3f(1,0,0);
    glutWireCube(0.6);
}
void myArm(){
    glPushMatrix();
        glColor3f(0,1,0);
        glScalef(1.5,0.5,0.5);///寬變1.5倍，長變0.5倍
        glutWireCube(0.3);
    glPopMatrix();
}
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6,+0.3,0);
        myBody();///程式碼移上去
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0.3,0.3,0);///(3)掛到肩上
        glRotatef(angle++,0,0,1);///(2)轉動
        glTranslatef(0.45/2,0,0);///(1)把旋轉中心，放正中心
        myArm();///程式也移上去
    glPopMatrix();
    glutSwapBuffers();
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week10-1");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
}
