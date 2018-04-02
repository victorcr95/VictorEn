#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

   
void display(void)
{
	glClearColor(1.0f,0.8,1.0,0.90);//color de la ventana
    glClear(GL_COLOR_BUFFER_BIT);
      
  	glColor3f(0.0f,0.0f,0.0f);//color de las linea
    glLineWidth(1.2);
    glBegin(GL_LINES);
  
	//primer base horizontal inferior del arco
		glVertex3f(-9.3f,0.0f,0.0f);     
		glVertex3f(9.3f,0.0f,0.0f);
		glVertex3f(-9.3f,0.0f,0.0f);
		glVertex3f(-9.3f,0.50f,0.0f);
		glVertex3f(9.3f,0.0f,0.0f);
		glVertex3f(9.3f,0.50f,0.0f);
		
	//Segunda base horizontal superior del arco 
		glVertex3f(-9.60f,0.5f,0.0f);       
		glVertex3f(9.60f,0.5f,0.0f);    
		glVertex3f(-9.60f,0.5f,0.0f); 
		glVertex3f(-9.60f,0.75f,0.0f);
		glVertex3f(9.60f,0.5f,0.0f);
		glVertex3f(9.60f,0.75f,0.0f);		
		glVertex3f(-9.60f,0.75f,0.0f);
		glVertex3f(9.60f,0.75f,0.0f);
		
    //Base vertical lado derecho 
		glVertex3f(8.0f,0.0f,0.0f);
		glVertex3f(8.0f,-4.6f,0.0f);
		glVertex3f(8.2f,0.0f,0.0f);
		glVertex3f(8.2f,-5.0f,0.0f);
		glVertex3f(7.6f,0.0f,0.0f);
		glVertex3f(8.0f,-0.60f,0.0f);
		glVertex3f(8.6f,0.0f,0.0f);
		glVertex3f(8.2f,-0.60f,0.0f);
		glVertex3f(7.3f,0.0f,0.0f);
		glVertex3f(8.0f,-1.0f,0.0f);
		glVertex3f(8.9f,0.0f,0.0f);
		glVertex3f(8.2f,-1.0f,0.0f);
		
	//linea vertical que toca el arco en la parte inferior derecha
		glVertex3f(6.5f,0.0f,0.0f);
		glVertex3f(6.5f,-0.550f,0.0f);	
		glVertex3f(6.67f,0.0f,0.0f);
		glVertex3f(6.67f,-0.85f,0.0f);
	
	 //Base vertical lado izquierdo 
		glVertex3f(-8.0f,0.0f,0.0f);
		glVertex3f(-8.0f,-4.75f,0.0f);
		glVertex3f(-8.2f,0.0f,0.0f);
		glVertex3f(-8.2f,-5.0f,0.0f);
		glVertex3f(-8.2f,-5.0f,0.0f);
		glVertex3f(-7.9f,-5.f,0.0f);
		glVertex3f(8.2f,-5.0f,0.0f);
		glVertex3f(7.9f,-5.f,0.0f);
		glVertex3f(-7.6f,0.0f,0.0f);
		glVertex3f(-8.0f,-0.60f,0.0f);
		glVertex3f(-8.6f,0.0f,0.0f);
		glVertex3f(-8.2f,-0.60f,0.0f);	
		glVertex3f(-7.3f,0.0f,0.0f);
		glVertex3f(-8.0f,-1.0f,0.0f);
		glVertex3f(-8.9f,0.0f,0.0f);
		glVertex3f(-8.2f,-1.0f,0.0f);
		
	//linea vertical que toca el arco en la parte inferior izquierda
		glVertex3f(-6.5f,0.0f,0.0f);
		glVertex3f(-6.5f,-0.550f,0.0f);
		glVertex3f(-6.67f,0.0f,0.0f);
		glVertex3f(-6.67f,-0.85f,0.0f);
		
		//lineas verticales que sostiene el arco en en el centro
		// centro
		glVertex3f(0.05f,0.74f,0.0f);
		glVertex3f(0.05f,3.950f,0.0f);	
		glVertex3f(-0.1f,0.74f,0.0f);
		glVertex3f(-0.1f,3.950f,0.0f);
		
		//centro + 1.5 a la derecha
		glVertex3f(1.5f,0.75f,0.0f);
		glVertex3f(1.5f,3.7f,0.0f);	
		glVertex3f(1.65f,0.75f,0.0f);
		glVertex3f(1.65f,3.67f,0.0f);
		
		//centro + 1.5 a la izquierda
		glVertex3f(-1.5f,0.75f,0.0f);
		glVertex3f(-1.5f,3.7f,0.0f);
		glVertex3f(-1.65f,0.75f,0.0f);
		glVertex3f(-1.65f,3.67f,0.0f);	
		//centro + 3 a la derecha
		glVertex3f(3.0f,0.75f,0.0f);
		glVertex3f(3.0f,3.07f,0.0f);
		glVertex3f(3.15f,0.75f,0.0f);
		glVertex3f(3.15f,3.04f,0.0f);

		//centro - 3 a la derecha
		glVertex3f(-3.0f,0.75f,0.0f);
		glVertex3f(-3.0f,3.07f,0.0f);
		glVertex3f(-3.15f,0.75f,0.0f);
		glVertex3f(-3.15f,3.04f,0.0f);
		
		//centro + 4.5 a la derecha
		glVertex3f(4.5f,0.75f,0.0f);
		glVertex3f(4.5f,1.83f,0.0f);	
		glVertex3f(4.65f,0.75f,0.0f);
		glVertex3f(4.65f,1.73f,0.0f);
		
		//centro - 4.5 a la derecha
		glVertex3f(-4.5f,0.75f,0.0f);
		glVertex3f(-4.5f,1.83f,0.0f);
		glVertex3f(-4.65f,0.75f,0.0f);
		glVertex3f(-4.65f,1.73f,0.0f);
			
    glEnd();
  
 
    double i, x, y;   //Declaracion de Variables
    glPointSize(1.0); //Tamaño de los puntos
	glBegin(GL_POINTS);//Definimos la clase de primitiva
	//Dibujamos el primer arco
    for (i=0.37;i<=2.77; i+=0.0001)
    {
		x=8.72*cos(i) +0.0;
		y=14.44*sin(i) -10.20;	
		glVertex2f(x,y); 		
	}
	//Dibujamos el segundo arco
    for (i=0.37;i<=2.77; i+=0.0001)
    {
		x=8.52*cos(i) +0.0;
		y=14.05*sin(i) -10.05;
		glVertex2f(x,y); 		
	}

	glEnd();
	glFlush ();
}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
   
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
