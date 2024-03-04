#include <GL/glut.h>///使用GLUT外掛
#include <stdio.h>
void display()
{
    glutSolidTeapot(0.3);///自己寫
    glutSwapBuffers();///自己寫
}
void mouse(int button,int state,int x,int y)
{///定義mouse函式 button:0左鍵, 1:中鍵, 2:右鍵
    ///printf("Hello world\"); ///遇到mouse印Hello
    ///printf("%d %d %d %d\n",button,state,x,y);
    if(state==GLUT_DOWN){
        printf("glVertex2f((%d-150)/150.0,-(%d-150)/150.0);\n",x,y);
    }
}
int main(int argc, char *argv[])///我們的main函式
{
    glutInit(&argc, argv);///初始化GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse");///建視窗

    glutDisplayFunc(display);///設定要畫圖的display函式
    glutMouseFunc(mouse);

    glutMainLoop();///主要迴圈
}
