
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void reshape(int w, int h)
{
    glViewport(0, 0, w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-4, 7, -3, 7, -7, 7);
	//glFrustum (-1.0, 1.0, -1.0, 1.0, 1.50, 100.0);
    glMatrixMode(GL_MODELVIEW);

}

void display()
{
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    // Resetear transformaciones
    glLoadIdentity();
    
    gluLookAt(1, 2, 3, //eye (x,y,z)
    0.0,0.0, 0.0,           //at(x,y,z)
    0.0, 1.0, 0.0); 

   /* gluLookAt(7, 8.5, 9.5, //eye (x,y,z)
    0.0,0.0, 0.0,           //at(x,y,z)
    0.0, 1.0, 0.0); */
     
    glColor3f(1.0f,1.0f,1.0f);  
	glPointSize(3);
	//El esqueleto principal 
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(-2,0.0,0.65);
		glVertex3f(-2,2.0,0.65);
		glVertex3f(0,2.0,0.0);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0,2.0,0.0);
		glVertex3f(0,4.0,0.0);
		glVertex3f(-2,4.0,0.650);
		glVertex3f(-2,2.0,0.650);
		glVertex3f(-2,2.0,-2.05);
		glVertex3f(-2,0.0,-2.05);
		glVertex3f(-2,0.0,0.65);
		glVertex3f(-2,0.0,-2.05);
		glVertex3f(-2,4.0,-2.05);
		glVertex3f(-2,4.0,0.650);
		glVertex3f(-2,4.0,-2.05);
		glVertex3f(-0,4.0,-2.705);
		glVertex3f(-0,2.0,-2.705);
		glVertex3f(-0,2.0,0);
		glVertex3f(-0,4.0,0);
		glVertex3f(-0,4.0,-2.705);
		glVertex3f(-2,4.0,-2.05);
		glVertex3f(-2,2.0,-2.05);
		glVertex3f(0,2.0,-2.705);
		glVertex3f(0,0,-2.705);
		glVertex3f(-2,0,-2.05);
		glVertex3f(-2,4,-2);
		glVertex3f(-2,6.5,-0.850);
		glVertex3f(-2,4.0,0.650);
		glVertex3f(0,4,-0.0);
		glVertex3f(0,6.5,-1.5);
		glVertex3f(-0,4.0,-2.705);
		glVertex3f(0,6.5,-1.5);
		glVertex3f(-2,6.5,-0.850);
		glVertex3f(0,6.5,-1.5);
		glVertex3f(4.8,6.5,-3.10);//
		glVertex3f(0,6.5,-1.5);
		glVertex3f(-0,4.0,-2.705);
		glVertex3f(-0,0,-2.705);
		glVertex3f(4.8,0,-4.30);//
		glVertex3f(-0,0,-2.705);
		glVertex3f(-0,0,0);
		glVertex3f(4.8,0,-1.60);//
		glVertex3f(4.8,6.5,-3.10);
		glVertex3f(4.8,0,-4.30);
		glVertex3f(4.8,0,-1.60);
		
		glEnd();
		//Delizador
		glBegin(GL_LINE_STRIP);
			glVertex3f(0,2,0);
			glVertex3f(-0.9,-1.50,0.7);
			glVertex3f(0,2,0);
			glVertex3f(-2,2.0,0.65);
			glVertex3f(-2.8,-1.2,1.82);
			glVertex3f(-0.9,-1.50,0.7);
		glEnd();
		//primer columpio
		glBegin(GL_LINE_STRIP);
			glVertex3f(0.9,6.5,-1.78);
			glVertex3f(0.9,1.2,-1.78);
			glVertex3f(0.9,1.2,-1.65);
			glVertex3f(1.9,1.2,-1.98);
			glVertex3f(1.9,1.2,-2.11);
			glVertex3f(1.9,6.5,-2.11);
			glVertex3f(1.9,1.2,-2.11);
			glVertex3f(1.9,1.2,-2.24);
			glVertex3f(0.9,1.2,-1.91);
			glVertex3f(0.9,1.2,-1.78);
		glEnd();
		//Segundo columpio
		glBegin(GL_LINE_STRIP);
			glVertex3f(3.0,6.46,-2.49);
			glVertex3f(3.0,1.2,-2.49);
			glVertex3f(3.0,1.2,-2.36);
			glVertex3f(4.0,1.2,-2.70);
			glVertex3f(4.0,1.2,-2.83);
			glVertex3f(4.0,6.46,-2.83);
			glVertex3f(4.0,1.2,-2.83);
			glVertex3f(4.0,1.2,-2.96);
			glVertex3f(3.0,1.2,-2.62);
			glVertex3f(3.0,1.2,-2.49);
		glEnd();
    glFlush();
    glutSwapBuffers();

}

void init()
{
    glClearColor(0,0,0,0);
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
 }



int main(int argc, char* argv[])
{

    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);

    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (600,450 );
    glutInitWindowPosition (420,120);
    // Crear ventana
    glutCreateWindow("Primer Laboratorio");
	init();
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);


    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
