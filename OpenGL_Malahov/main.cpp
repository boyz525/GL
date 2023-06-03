//#include <GL/glut.h>
//#define _USE_MATH_DFINES
//#include <cmath>
//#include <array>
//#include <ctime>
//#include "drawGraph.h"






//void renderScene(void);
//void processKeys(unsigned char key, int x, int y);

//// блок реализации функций

//int main(int argc, char* argv[])
//{
//    initGraph();
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
//    glutInitWindowPosition(100,100);
//    glutInitWindowSize(800,800);
//    glutCreateWindow("Space");
//    glutDisplayFunc(renderScene);
//    glutKeyboardFunc(processKeys);
//    time_appStart=clock();
//    time_anima1=clock();
//    glutTimerFunc(1000/60, animate, 1);
//    glutMainLoop();
//    return 0;
//}

//void renderScene(void) {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функция должна быть первой в renderScene
//    glBegin(GL_QUAD_STRIP);
//    //Фон
//    glColor3ub(255, 255, 0);
//    glVertex2f(1, -1);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-1, -1);
//    glColor3ub(0, 0, 0);
//    glVertex2f(1, 1);
//    glColor3ub(0, 0, 54);
//    glVertex2f(-1, 1);
//    glEnd();
//    plotGraph();
//    //Ракета
//    Figure f = {0.5, 0, false, 100};
//    f.pos.x = -0.5;
//    f.pos.y = 0.3;
//    drawAnima();

////    //луна
////    drawMoon(f);
////    f.pos.x = -0.5;
////    f.pos.y = 0.3;
////    drawMoon(f);
////    drawMoon(moon);

//    glutSwapBuffers();
//}





//void processKeys(unsigned char key, int x, int y){
//    if(key == 'w'){
//        rocket.pos.y += 0.01;
//        rocket.isRight = true;
//    }
//    if(key == 's'){
//        rocket.pos.y -= 0.01;
//        rocket.isRight = false;
//    }
//    if(key == 'a'){
//        rocket.pos.x -= 0.01;
//        rocket.isRight = true;
//    }
//    if(key == 'd'){
//        rocket.pos.x += 0.01;
//        rocket.isRight = true;
//    }
//    glutPostRedisplay();

//}



