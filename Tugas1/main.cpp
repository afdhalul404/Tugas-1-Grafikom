#include <windows.h>
#include <GL/glut.h>


// BUAT GARIS LURUS BERWARNA BIRU

void garis(){
    static int tick=0;
    glColor3f(0.,0.,1.);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(11,18);
    glVertex2f(11,11);
    glEnd();
}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    garis();
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
