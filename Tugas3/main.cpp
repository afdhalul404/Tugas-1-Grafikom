#include <windows.h>
#include <GL/glut.h>

// BUAT POLYGON
void polygon(){
    static int tick=0;

//    polygon 1
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.5,1.);
    glVertex2f(12,12);
    glVertex2f(13.5,16.);
    glVertex2i(12,20);
    glVertex2f(10.5,16);
    glEnd();

    //polygon 2
    glBegin(GL_LINE_LOOP);
    glColor4f(0.0, 1.0, 1.0, 1.0);
    glVertex2f(12,12);
    glVertex2f(16.,10.5);
    glVertex2i(20,12);
    glVertex2f(16.,13.5);
    glEnd();

    //polygon 3
    glBegin(GL_POLYGON);
    glColor3f(0.5,1.0,0.5);
    glVertex2f(12,12);
    glVertex2f(13.5,8);
    glVertex2i(12,4);
    glVertex2f(10.5,8.);
    glEnd();

    //polygon 4
    glBegin(GL_LINE_LOOP);
    glColor3f(0.8,0.2,0.2);
    glVertex2f(12,12);
    glVertex2f(8.,10.5);
    glVertex2i(4,12);
    glVertex2f(8,13.5);
    glEnd();
}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    polygon();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Tugas 1 Grafika Komputer");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
