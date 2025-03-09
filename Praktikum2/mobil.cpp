/*	AMARA PUTRI SONIAJI
	24060123120004
	LAB GKV A1 
*/

#include <GL/glut.h>
#include <GL/gl.h>
#include <math.h>

//RODA
void roda(float x, float y) {
    glPushMatrix();
    glTranslatef(x, y, 0);
    glRotatef(45, 0, 0, 1);  

    glColor3ub(20, 20, 20);
    glutSolidTorus(0.04, 0.14, 30, 30);
    
    glColor3ub(150, 150, 150);
    glutSolidTorus(0.015, 0.09, 30, 30);
    
    glColor3ub(220, 220, 220);
    glBegin(GL_LINES);
    for (int i = 0; i < 10; i++) {
        float angle = i * 36.0 * (M_PI / 180.0);
        float x1 = 0.09 * cos(angle);
        float y1 = 0.09 * sin(angle);
        float x2 = 0.01 * cos(angle);
        float y2 = 0.01 * sin(angle);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
    }
    glEnd();
    
    glColor3ub(50, 50, 50);
    glutSolidSphere(0.02, 20, 20);
    
    glPopMatrix();
}

//MOBIL
void mobil(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
        glColor3ub(130, 15, 45);
        glVertex2f(0.82, 0.03);
        glVertex2f(0.85, 0.10);
        glVertex2f(0.87, 0.18);
        glVertex2f(0.89, 0.22);

        glColor3ub(160, 21, 62);
        glVertex2f(0.7, 0.26);
        glVertex2f(0.6, 0.28);
        glVertex2f(0.6, 0.30);
        glVertex2f(0.4, 0.30);
        glVertex2f(0.25, 0.32);

        glColor3ub(190, 30, 70);
        glVertex2f(0.05, 0.38);
        glVertex2f(-0.05, 0.40);
        glVertex2f(-0.12, 0.42);
        glVertex2f(-0.22, 0.43);
        glVertex2f(-0.35, 0.42);
        glVertex2f(-0.50, 0.40);
        glVertex2f(-0.65, 0.37);
        glVertex2f(-0.75, 0.46);

        glColor3ub(160, 21, 62);
        glVertex2f(-0.78, 0.34);
        glVertex2f(-0.83, 0.28);
        glVertex2f(-0.85, 0.24);
        glVertex2f(-0.80, 0.10);
        glVertex2f(-0.75, 0.03);
        glVertex2f(0.80, 0.05);
    glEnd();

    //JENDELA
    glColor3f(0.7f, 0.7f, 0.7f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.35f, 0.28f); 
        glVertex2f(0.05f, 0.28f);  

        glVertex2f(0.10f, 0.36f); 
        glVertex2f(-0.28f, 0.41f); 
    glEnd();
    glFlush();

    //LAMPU DEPAN
    glBegin(GL_QUADS);
        glColor3ub(255, 255, 255);  
        glVertex2f(0.77, 0.2);

        glColor3ub(200, 200, 200);  
        glVertex2f(0.81, 0.2);

        glColor3ub(255, 180, 100);  
        glVertex2f(0.78, 0.1);

        glColor3ub(220, 220, 220);  
        glVertex2f(0.73, 0.1);
    glEnd();

    //LAMPU BELAKANG
    glBegin(GL_QUADS);
        glColor3ub(220, 0, 0);   
        glVertex2f(-0.82, 0.25);

        glColor3ub(255, 80, 80); 
        glVertex2f(-0.76, 0.25);

        glColor3ub(180, 80, 0);  
        glVertex2f(-0.72, 0.08);

        glColor3ub(230, 230, 230); 
        glVertex2f(-0.78, 0.08);
    glEnd();

    //BUKAAN PINTU 
    glPushMatrix();
        glTranslatef(-0.3, 0.25, 0); 
        glColor3ub(52, 52, 52);
        glRectf(0, 0.015, 0.07, 0); 
    glPopMatrix();

    //SPEKBOR
    glPushMatrix();
        glTranslatef(0.1, 0.01, 0); 
        glColor3ub(52, 52, 52);
        glRectf(-0.86, 0.05, 0.73, 0);
    glPopMatrix();


    roda(0.541, 0.06); 
    roda(-0.513, 0.06); 
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas Pertemuan 2 Amara Putri Soniaji");
    glutDisplayFunc(mobil);
    glClearColor(188/255.0, 204/255.0, 220/255.0, 1);
    glutMainLoop();
    return 0;
}
