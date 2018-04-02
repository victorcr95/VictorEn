#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

   
void display(void)
{
	glClearColor(1.0f,1.0,1.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    
    glColor3f(0.0f,0.0f,0.0f);  
    glBegin(GL_LINE_STRIP);
    //parta plana o base de la llave del chorro
		glVertex3f(-0.40f,1.0f,0.0f);
		glVertex3f(0.40f,1.0f,0.0f);
		glVertex3f(0.30f,1.0f,0.0f);
		glVertex3f(0.30f,1.2f,0.0f);
		glVertex3f(-0.30f,1.2f,0.0f);
		glVertex3f(-0.30f,1.0f,0.0f);
		glVertex3f(-0.30f,1.2f,0.0f);
		glVertex3f(-0.10f,1.2f,0.0f);
		glVertex3f(-0.10f,1.6f,0.0f);
		glVertex3f(-0.10f,1.2f,0.0f);
		glVertex3f(0.10f,1.2f,0.0f);
		glVertex3f(0.10f,1.6f,0.0f);
    glEnd();
    //circulo de la llave
	glPointSize(1);   
	double i, x,y; 
    glBegin(GL_POINTS);
    for (i=2.1;i<=7.39; i+=0.001)
    {
		x=0.2*cos(i) +0.0;
		y=-0.2*sin(i) +1.75 ;
		glVertex3f(x,y,0);
	}
	glEnd();
	//manijas del chorro
	glBegin(GL_LINE_STRIP);
		glVertex3f(-0.70f,1.9f,0.0f);
		glVertex3f(-0.70f,1.7f,0.0f);
		glVertex3f(-0.2f,1.75f,0.0f);
		glVertex3f(-0.70f,1.7f,0.0f);
		glVertex3f(-0.70f,1.9f,0.0f);
		glVertex3f(-0.2f,1.8f,0.0f);		
    glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.70f,1.9f,0.0f);
		glVertex3f(0.70f,1.7f,0.0f);
		glVertex3f(0.2f,1.75f,0.0f);
		glVertex3f(0.70f,1.7f,0.0f);
		glVertex3f(0.70f,1.9f,0.0f);
		glVertex3f(0.2f,1.8f,0.0f);		
    glEnd();
	
	//pequeñas lineas que bajan a las curvas del chorro
	glBegin(GL_LINE_STRIP);
		glVertex3f(-0.40f,1.0f,0.0f);
		glVertex3f(-0.40f,0.80f,0.0f);
		glVertex3f(-0.40f,1.0f,0.0f);
		glVertex3f(0.40f,1.0f,0.0f);
		glVertex3f(0.40f,0.80f,0.0f);		
    glEnd();
    //curva del chorro para la derecha
       glBegin(GL_POINTS);
    for (i=3;i<=4.5; i+=0.001)
    {
		x=0.5*cos(i) +0.90;
		y=0.5*sin(i) +0.8 ;
		glVertex3f(x,y,0);
	}

	//curva superior del chorro para la izquierda
   
    for (i=3;i<=4.5; i+=0.001)
    {
		x=-0.5*cos(i) -0.90;
		y=0.5*sin(i) +0.8 ;
		glVertex3f(x,y,0);
	}	
	//curva inferior del chorro para la izquierda 
	for (i=4.6;i<=6.4; i+=0.001)
    {
		x=-0.8*cos(i) -0.90;
		y=-0.8*sin(i) -0.50 ;
		glVertex3f(x,y,0);
	}
	//cuerva pequeña en la parte inferior de izq a derecha
	for (i=4.6;i<=6.4; i+=0.001)
    {
		x=-0.2*cos(i) -0.90;
		y=-0.2*sin(i) -0.49 ;
		glVertex3f(x,y,0);
	}
	//	curva pequeña pegada a la semicircunferencia 
	for (i=4.6;i<=6.1; i+=0.001)
    {
		x=-0.2*cos(i) +0.45;
		y=-0.2*sin(i) -0.49 ;
		glVertex3f(x,y,0);
	}
	//curva pequeña pegada a la semicircunferencia 
	for (i=4.6;i<=6.1; i+=0.001)
    {
		x=0.2*cos(i) -0.45;
		y=-0.2*sin(i) -0.49 ;
		glVertex3f(x,y,0);
	}
	//semicircunferencia en la parte inferior
	for (i=3.70;i<=5.7; i+=0.001)
    {
		x=0.30*cos(i) +0;
		y=0.30*sin(i) -0.29 ;
		glVertex3f(x,y,0);
	}
	//curva pequeña con que finaliza el tramo de abajo
	for (i=4.6;i<=5.8; i+=0.001)
    {
		x=0.2*cos(i) +1.32;
		y=-0.2*sin(i) -0.49 ;
		glVertex3f(x,y,0);
	}
	//curva pequeña con que finaliza el tramo de arriba
	for (i=4.6;i<=5.8; i+=0.001)
    {
		x=0.2*cos(i) +1.32;
		y=0.2*sin(i) +0.5 ;
		glVertex3f(x,y,0);
	}
	glEnd();
	//buscando la la semicircunferencia en la parte inferior
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.70f,-0.50f,0.0f);
		glVertex3f(-1.70f,-0.70f,0.0f);
		glVertex3f(-1.1f,-0.70f,0.0f);
		glVertex3f(-1.1f,-0.5f,0.0f);
    glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-0.9f,-0.30f,0.0f);
		glVertex3f(-0.4f,-0.30f,0.0f);
    glEnd();
   
    //lineas rectas en vertical y horizontal de la parte final 
    	glBegin(GL_LINE_STRIP);
		glVertex3f(1.50f,-0.40f,0.0f);
		glVertex3f(1.70f,-0.40f,0.0f);
		glVertex3f(1.7f,0.40f,0.0f);
		glVertex3f(1.5f,0.4f,0.0f);
    glEnd();
    //linea horizontal a la par de la semicircunferencia buscando la parte final
    glBegin(GL_LINE_STRIP);
		glVertex3f(1.30f,-0.30f,0.0f);
		glVertex3f(0.4f,-0.30f,0.0f);
    glEnd();
    //linea horizontal pegada a la curva  superior derecha buscando la parte final
    glBegin(GL_LINE_STRIP);
		glVertex3f(1.30f,0.30f,0.0f);
		glVertex3f(0.8f,0.30f,0.0f);
    glEnd();
	glFlush ();
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-3.0, 3.0, -3.0, 3.0, 3.0, -3.0);
   
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (420,140);
    glutCreateWindow ("Primer Laboratorio");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
