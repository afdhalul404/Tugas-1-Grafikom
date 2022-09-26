#include <windows.h>
#include <GL/glut.h>

// BUAT POLA DENGAN TITIK DENGAN WARNA BERVARIASI

void titik() {
    static int tick=0;
    glColor3f(0.0,1.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(8,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(9,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(10,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(11,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(12,15);
    glEnd();

    glColor3f(0.0,1.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(13,15);
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(14,14);
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(15,13);
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(16,12);
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(15,11);
    glEnd();

    glColor3f(1.0,0.0,1.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(14,10);
    glEnd();

    glColor3f(1.0,0.5,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(13,9);
    glEnd();

    glColor3f(1.0,0.5,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(12,9);
    glEnd();

    glColor3f(1.0,0.5,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(11,9);
    glEnd();

    glColor3f(1.0,0.5,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(10,9);
    glEnd();

    glColor3f(1.0,0.5,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(9,9);
    glEnd();

    glColor3f(11.0,0.5,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(8,9);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(9,10);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(10,11);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(11,12);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(10,13);
    glEnd();

    glColor3f(1.0,1.0,0.0);
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2i(9,14);
    glEnd();

}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    titik();
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
