//#include "drawGraph.h"
//#include <array>
//#include <ctime>
//const int n = 100;
//std::array <Point, n> graph;
//Figure rocket = {{0, 0},false, 100};
//Figure moon = {{1, 1}, false, 100};
//clock_t time_appStart;
//clock_t time_anima1;
//void plotAxes(){
//    glBegin(GL_LINES);
//    glColor3f(1,0,0);
//    glVertex2f(0,0);
//    glVertex2f(3,0);
//    glColor3f(0,0,1);
//    glVertex2f(0,0);
//    glVertex2f(0,3);
//    glEnd();
//}

//void plotGraph(){
//    glPushMatrix();
//    glScalef(0.1, 0.1, 1);
//    glTranslatef(-3, 0, 0);

//    plotAxes();

//    glBegin(GL_LINE_STRIP);
//    glColor3f(1,1,1);
//    for(int i=0; i< graph.size(); i++)
//        glVertex2f(graph[i].x, graph[i].y);

//    glEnd();
//    glPopMatrix();
//}

//void drawRocket(Figure &f){
//    glPushMatrix();
//    glTranslatef(f.pos.x, f.pos.y, 0);
//    if(f.isRight)
//        glRotatef(180, 0, 1, 0);
//    glScalef(0.5, 0.5, 1);
//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(176, 196, 222);
//    glVertex2f(0.03, -0.13);
//    glVertex2f(-0.03, -0.13);
//    glVertex2f(0.025, -0.18);
//    glVertex2f(-0.025, -0.18);
//    glEnd();

//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3ub(255, 250, 250);
//    glVertex2f(-0.027, -0.13);
//    glColor3ub(255, 235, 215);
//    glVertex2f(0.07, -0.44);
//    glColor3ub(112, 128, 144);
//    glVertex2f(0.06, -0.24);
//    glEnd();

//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3ub(255, 250, 250);
//    glVertex2f(0.027, -0.13);
//    glColor3ub(255, 235, 215);
//    glVertex2f(-0.07, -0.44);
//    glColor3ub(112, 128, 144);
//    glVertex2f(-0.06, -0.24);
//    glEnd();

//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3ub(112, 128, 144);
//    glVertex2f(0.037, -0.2);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-0.037, -0.2);
//    glColor3ub(0, 0, 0);
//    glVertex2f(0, -0.25);
//    glEnd();

//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-0.037, 0.07);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-0.037, -0.18);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-0.055, 0);
//    glEnd();

//    glBegin(GL_TRIANGLE_STRIP);
//    glColor3ub(0, 0, 0);
//    glVertex2f(0.037, 0.07);
//    glColor3ub(0, 0, 0);
//    glVertex2f(0.037, -0.18);
//    glColor3ub(0, 0, 0);
//    glVertex2f(0.055, 0);
//    glEnd();

//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.037, -0.2);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.037, -0.2);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.037, 0.2);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.037, 0.2);
//    glEnd();

//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(112, 128, 144);
//    glVertex2f(0.037, 0.2);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-0.037, 0.2);
//    glColor3ub(0, 0, 0);
//    glVertex2f(0.03, 0.24);
//    glColor3ub(0, 0, 0);
//    glVertex2f(-0.03, 0.24);
//    glEnd();

//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.048, 0.24);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.048, 0.24);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.048, 0.4);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.048, 0.4);
//    glEnd();

//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.035, 0.44);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.035, 0.44);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.048, 0.4);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.048, 0.4);
//    glEnd();

//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(71, 74, 81);
//    glVertex2f(0.02, 0.47);
//    glColor3ub(71, 74, 81);
//    glVertex2f(-0.02, 0.47);
//    glColor3ub(255, 255, 255);
//    glVertex2f(0.035, 0.44);
//    glColor3ub(255, 255, 255);
//    glVertex2f(-0.035, 0.44);
//    glEnd();

//    glBegin(GL_QUAD_STRIP);
//    glColor3ub(255, 0, 0);
//    glVertex2f(0.02, 0.47);
//    glVertex2f(-0.02, 0.47);
//    glVertex2f(0, 0.5);
//    glVertex2f(0, 0.5);
//    glEnd();
//    glPopMatrix();
//}

//void initGraph(){
//    Point p;

//    float x = 0.0;
//    float xf = 2*3.14;
//    float h = (xf - x)/n;
//    int i = 0;
//    while(x<xf){

//        //астроида
//        p.x = 2*(pow(sin(x),3));
//        p.y = 2*(pow(cos(x),3));

//        //сердце
//        p.x = 16*pow(sin(x), 3);
//        p.y = 13*cos(x)-5*cos(2*x)-2*cos(3*x)-cos(4*x);

//        //pz
//        p.x = 3.0*cos(2.0*x); //x
//        p.y = 2.0*sinf(3.0*x)+1;
//        graph[i]=p;
//        x = x+h;
//        i++;
//    }

//}
//void animate(int value){
//    glutPostRedisplay();
//    glutTimerFunc(1000/60, animate, 1);
//}

//void drawAnima(){
//    clock_t cT=clock()-time_appStart-time_anima1;
//    float x,y;
//    if(cT<1000.0){
//        y = 0.0;
//        x = 0.0+(1.0-0.0)/(1000.0-0.0)*cT;
//    }else{
//        if(cT<3000.0){
//            x = 0.0+(1.0-0.0)/(1000.0-0.0)*1000.0;
//            y = 0.0+(1.0-0.0)/(3000.0-1000.0)*(cT-1000);
//        }else{
//            time_anima1 = clock();
//        }
//    }
//    glPushMatrix();
//   glTranslatef(x,y,0);
//   drawRocket(rocket);
//    glPopMatrix();
//}
