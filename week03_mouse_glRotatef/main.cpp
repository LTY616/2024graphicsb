#include <GL/glut.h>
#include <stdio.h>///為了printf()
float teapotX=0, teapotY=0;///新加的程式,用來放茶壺的座標
float angel=0;///旋轉的角度
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景
    glPushMatrix();///備份矩陣
        ///glTranslatef(teapotX, teapotY, 0);///把座標移動
        glRotatef(angel, 0, 0, 1);///最難的z軸
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣
    glutSwapBuffers();
}               ///state:0:上去, 1下來
void mouse(int button,int state,int x,int y)
{///這裡要巧妙的修正
    teapotX=(x-150)/150.0;
    teapotY=-(y-150)/150.0;
}
void motion(int x, int y)
{
    angel=x;
    display();
}
int main(int argc, char *argv[])///我們的main函式
{
    glutInit(&argc, argv);///初始化GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse");///建視窗

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///設定mouse函式
    glutMotionFunc(motion);///設定mouse的motion動作

    glutMainLoop();///主要迴圈
}
