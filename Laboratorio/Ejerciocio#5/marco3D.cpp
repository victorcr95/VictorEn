
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void reshape(int w, int h)
{
    glViewport(0, 0, w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glFrustum (-1.0, 1.0, -1.0, 1.0, 2.50, 200.0);
    glMatrixMode(GL_MODELVIEW);

}

void display()
{
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    // Resetear transformaciones
    glLoadIdentity();

    gluLookAt(5.2, 5.5, 6.5, //eye (x,y,z)
    0.0,0.0, 0.0,           //at(x,y,z)
    0.0, 1.0, 0.0); 
     
    glColor3f(1.0f,1.0f,1.0f);  
	glPointSize(3);
	//Triangulo frete a la ventanilla
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(2.0,0.0,0.0);
		glVertex3f(0.0,3.0,0.0);	
	glEnd();
	//Marco Pricipal de ventanilla
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,0.0);
		glVertex3f(0.0,0.0,3.0);
		glVertex3f(0.0,3.0,3.0);
		glVertex3f(0.0,3.0,0.0);
		glVertex3f(0.0,0.0,0.0);
	glEnd();
	
	//Parte lateral del tiangulo
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,3.0,0.0);
		glVertex3f(0.0,3.0,-0.50);
		glVertex3f(2.0,0.0,-0.50);
		glVertex3f(2.0,0.0,0.0);	
	glEnd();
	//Rectangulo Superior que cruza toda la figura
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,3.0,-0.50);
		glVertex3f(-0.5,3.0,-0.50);
		glVertex3f(-0.5,3.0,3.0);
		glVertex3f(0.0,3.0,3.0);
	glEnd();
	//Marco un poco mas pequeño del principal
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.750,0.750);
		glVertex3f(0.0,0.750,2.250);
		glVertex3f(0.0,2.250,2.250);
		glVertex3f(0.0,2.250,0.750);
		glVertex3f(0.0,0.750,0.750);
	glEnd();
	//La Representacion de profundida del marco
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.75,0.75);
		glVertex3f(-0.70,0.6,0.5);
		glVertex3f(-0.70,1.780,0.5);
		glVertex3f(-0.70,0.6,0.5);
		glVertex3f(-0.70,0.6,1.70);
	glEnd();
	//ultima linea izquierda vertical mas ultima linea de la parte inferior horizontal
	glBegin(GL_LINE_STRIP);
		glVertex3f(-0.5,3.0,3.0);
		glVertex3f(-0.5,-0.60,3.0);
		glVertex3f(1.5,-0.60,3.0);		
	glEnd();
	//linea superior que va cerca del circulo de izq a derecha
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.0,0.0,3.0);
		glVertex3f(1.5,0.0,3.0);
	glEnd();
	//linea superior que va cerca del circulo de derecha a izq
	glBegin(GL_LINE_STRIP);
		glVertex3f(2.0,0.0,-0.50);
		glVertex3f(2.0,-0.60,-0.50);
		glVertex3f(2.0,-0.60,2.50);		
	glEnd();
	//ultima linea parte inferior horizontal de derecha a izq
	glBegin(GL_LINE_STRIP);
		glVertex3f(2.0,0.0,0.0);
		glVertex3f(2.0,0.0,2.50);		
	glEnd();
	
	//Circulo
	glPointSize(1);   
	double i, x,z; 
    glBegin(GL_POINTS);
    for (i=0;i<=8; i+=0.001)
    {
		x=0.25*cos(i) +1.7;
		z=0.25*sin(i) + 2.70;
		glVertex3f(x,0.30,z);
	}
	glEnd();

	// Primer Curva
	glBegin(GL_POINTS);
    for (i=6.2;i<=8; i+=0.001)
    {
		x=0.5*cos(i) +1.5;
		z=0.5*sin(i) + 2.5;
		glVertex3f(x,-0.0,z);
	}
	glEnd();
	
	//Segunda Curva
		glBegin(GL_POINTS);
    for (i=6.3;i<=8; i+=0.001)
    {
		x=0.5*cos(i) +1.5;
		z=0.5*sin(i) + 2.5;
		glVertex3f(x,-0.60,z);
	}
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
    glutInitWindowSize (400,350 );
    glutInitWindowPosition (420,140);
    // Crear ventana
    glutCreateWindow("Estilo ventana");
	init();
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);


    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
