
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void reshape(int w, int h)
{
    glViewport(0, 0, w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glOrtho(-28,28,-15, 30, -28, 28);
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
     
   glPointSize(3);
	glColor3f(0,0,0);
	// primera planta
	glBegin(GL_LINE_STRIP);
		glVertex3f(0,0,0);
		glVertex3f(0,11,0);
		glVertex3f(2,11,-5.5);
		glVertex3f(2,1,-5.5); 
		glVertex3f(5,1,-5.5);
		glVertex3f(5,11,-5.5);
		glVertex3f(2,11,-5.5);
    glEnd();
    
    glBegin(GL_LINE_STRIP);
		glVertex3f(5,11,-5.5);
		glVertex3f(10,11,-12);
		glVertex3f(10,3,-12);
		glVertex3f(5,1,-5.5);   
    glEnd();
    
   //segunda planta                                     
	glBegin(GL_LINE_STRIP);
		glVertex3f(10,11,-12);
		glVertex3f(10,19,-12);
		glVertex3f(6.5,22.0,-10.5);
		glVertex3f(5,19,-5.5);
		glVertex3f(5,11,-5.5);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(5,19,-5.5);
		glVertex3f(2,19,-5.5);
		glVertex3f(2,11,-5.5); 
		glVertex3f(0,11,0); 
		glVertex3f(0,19,0); 
		glVertex3f(2,19,-5.5);
    glEnd();    
	glBegin(GL_LINE_STRIP);
		glVertex3f(0,0,0);
		glVertex3f(0,11,0);
		glVertex3f(-14,11,4);
		glVertex3f(-14,19,4);
		glVertex3f(-14.4,19,4.4);
		glVertex3f(-7,30,2);
		glVertex3f(0,19,0);
     glEnd();
     
    //Detalles de techo derecho
	glBegin(GL_LINE_STRIP);
		glVertex3f(10,19,-12);
		glVertex3f(10,19.3,-12);
		glVertex3f(6.4,22.3,-10.5);
		glVertex3f(4.9,19.3,-5.5);
		glVertex3f(1.9,19.3,-5.5);
		glVertex3f(0,19.3,0);
		glVertex3f(0,19,0) ;
		glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.1,32.20,-0.20);
		glVertex3f(4.40,31.40,-5.80);
		glVertex3f(5.40,25.10,-6.80);
	glEnd(); 
    glBegin(GL_LINE_STRIP);     
		glVertex3f(-14.4,19,4.4);
		glVertex3f(-14.4,19.4,4.4);
		glVertex3f(-7,30.4,2);
		glVertex3f(0,19.4,0);
		glVertex3f(0,19,0);
		glVertex3f(-7,30,2);
		glVertex3f(-7,29.9,2);
		glVertex3f(-14.2,19,4.2);
    glEnd();    
    glBegin(GL_LINE_STRIP);
		glVertex3f(6.4,22.4,-10.5);
		glVertex3f(0.70,25.0,-7.5);
		glVertex3f(1.9,19.3,-5.5);
	glEnd();	
	glBegin(GL_LINE_STRIP);
		glVertex3f(-7,30.4,2.0);
		glVertex3f(-2.40,31.5,0.20);
	glEnd();
		glBegin(GL_LINE_STRIP);
		glVertex3f(0.1,32.20,-0.20);
		glVertex3f(4.40,31.40,-5.80);
		glVertex3f(5.40,25.10,-6.80);
	glEnd(); 
    //chimenea
    glBegin(GL_LINE_STRIP);
		glVertex3f(-2.50,31.5,0.20);
		glVertex3f(-1.0,30.6,0.0);	
		glVertex3f(-1.0,32.0,0.0);
		glVertex3f(-0.150,32.0,-1.0);
		glVertex3f(-0.150,30.4,-1.0);
		glVertex3f(-1,30.6,0.0);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1,32.0,0.0);
		glVertex3f(-2.80,32.30,0.60);
		glVertex3f(-2.80,31.5,0.60);
		glVertex3f(-2.80,32.3,0.60);
		glVertex3f(-1.20,32.3,-0.750);
		glVertex3f(-0.150,32.0,-1.0);
	glEnd();

	//detalles de la esquina izq 
	glBegin(GL_LINE_STRIP);
		glVertex3f(-14,11,4);
		glVertex3f(-14,8.6,4);	
	glEnd(); 
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.6,0,1.5);
		glVertex3f(-1.8,0,1.7);
		glVertex3f(-1.8,0.5,1.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.6,8,1.5);
		glVertex3f(-1.8,8,1.7);
		glVertex3f(-1.8,7.6,1.7);
	glEnd(); 
	
	//cochera
	//marcos y bases de la cochera
	glBegin(GL_LINE_STRIP);
		glVertex3f(0,0,0);
		glVertex3f(-1.6,0,0.3);
		glVertex3f(-1.6,0.20,0.3);
		glVertex3f(-1.6,0,0.3);
		glVertex3f(-1.6,0,1.5);
		glVertex3f(-1.6,0.70,1.5);
	glEnd();	  
	glBegin(GL_LINE_STRIP);	
		glVertex3f(-1.6,5.40,0.3);
		glVertex3f(-1.6,9.50,0.3);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.6,6.80,1.5);
		glVertex3f(-1.6,8,1.5);
		glVertex3f(-4.5,8.0,7.5);
		glVertex3f(-4.5,0,7.5);
		glVertex3f(-4.70,0,8.5);	 
		glVertex3f(-4.70,9.5,8.7);
		glVertex3f(-14,9.5,11.7);
		glVertex3f(-14,1,11.7);
		glVertex3f(-4.70,0,8.5);
	glEnd();     
    glBegin(GL_LINE_STRIP);	
		glVertex3f(-1.6,9.5,0.3);
		glVertex3f(-3.150,10.5,3.7);
		glVertex3f(-4.70,9.5,8.7);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.6,9.5,0.3);
		glVertex3f(-14,8.55,3.7);
		glVertex3f(-14,11,7.9);
		glVertex3f(-14,9.5,11.7);
		glVertex3f(-14,11,7.9);
		glVertex3f(-3.1,10.5,3.7);
	glEnd();
     
	glBegin(GL_LINE_STRIP);
		glVertex3f(-1.6,9.1,0.3);
		glVertex3f(-3.15,10.1,3.7);
		glVertex3f(-4.7,9.10,8.70);
		glVertex3f(-4.7,9.20,8.90);
		glVertex3f(-14,9.1,11.7);
	glEnd();
	
     //puerta cochera
	glBegin(GL_LINE_STRIP);
		glVertex3f(0,1.5,0);
		glVertex3f(-1.9,7.90,1.7);
		glVertex3f(-5.2,6.6,5.5);
		glVertex3f(-3.9,-0.5,4);
		glVertex3f(0,1.5,0);
	glEnd();
	
	//ventana cochera
	glBegin(GL_LINE_STRIP);
		glVertex3f(-8.2,7.5,9);
		glVertex3f(-8.2,3,9);
		glVertex3f(-10.2,2.6,9);
		glVertex3f(-10.2,7,9);
		glVertex3f(-8.2,7.5,9);
    glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-8.3,7.35,9.15);
		glVertex3f(-8.3,3.27,9.15);
		glVertex3f(-10.0,2.970,9.1);
		glVertex3f(-10.0,6.95,9.1);
		glVertex3f(-8.3,7.35,9.15);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-8.3,3.60,9.20);
		glVertex3f(-9.80,3.30,9.20);
		glVertex3f(-9.8,6.95,9.1);
	glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-8.3,3.85,9.20);
		glVertex3f(-9.60,3.55,9.20);
		glVertex3f(-9.6,6.95,9.1);
    glEnd();
    
    //ventana lado izq
    //Marco principal
    glBegin(GL_LINE_STRIP);
		glVertex3f(-10.2,17.8,9);
		glVertex3f(-10.2,22.80,9);
		glVertex3f(-6.2,23.35,8.55);
		glVertex3f(-6.2,18.29,8.55);	
		glVertex3f(-10.2,17.8,9);
     glEnd();
     
	//marcos mas pequeños
    glBegin(GL_LINE_STRIP);
		glVertex3f(-8.3,23.0,9.1);
		glVertex3f(-8.3,18.75,9.1);
		glVertex3f(-10.0,18.4,9.1);
		glVertex3f(-10.0,22.70,9.1);
    glEnd();    
	glBegin(GL_LINE_STRIP);
		glVertex3f(-6.2,23.4,8.95);
		glVertex3f(-6.2,19.1,8.95);
		glVertex3f(-8.10,18.70,8.95);
		glVertex3f(-8.10,23.0,8.95);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-6.2,23.4,8.95);
		glVertex3f(-10.0,22.70,9.1);
    glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-8.20,23.0,8.95);
		glVertex3f(-8.20,18.470,8.95);	
		glVertex3f(-6.4,18.470,8.35);
		glVertex3f(-8.20,18.470,8.95);
		glVertex3f(-10.3,17.5,8.10);
    glEnd();
	glBegin(GL_LINE_STRIP);
      	glVertex3f(-6.45,18.37,8.45);
		glVertex3f(-10.35,17.37,8.17);
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-6.2,19.1,8.95);
		glVertex3f(-6.2,18.7,8.95);	
	glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(-10.0,18.4,9.1);
		glVertex3f(-10.0,18.0,9.1);
	glEnd();
	
	//ventana lado derecho de izq a der
	//cuadro pricipal de la ventana
	glBegin(GL_LINE_STRIP);
		glVertex3f(-5.2,16.4,5);
		glVertex3f(-5.2,21.30,5);
		glVertex3f(-1.5,21.7,4.5);
		glVertex3f(-1.5,16.8,4.50);	
		glVertex3f(-5.2,16.4,5);
    glEnd();
     //contornos de la ventana por lineas
	glBegin(GL_LINE_STRIP);
		glVertex3f(-4.35,22.580,7.1);
		glVertex3f(-1.05,22.60,6.1);
	glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-4.35,22.580,7.1);
		glVertex3f(-4.35,17.90,7.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-1.05,22.60,6.1);
		glVertex3f(-1.05,17.90,6.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-2.4,18.70,7.1);
		glVertex3f(-0.90,18.70,6.6);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-2.6,18.70,7.1);
		glVertex3f(-4.10,18.70,7.65);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-0.90,18.550,6.6);
		glVertex3f(-4.10,18.55,7.65);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-0.90,18.4,6.6);
		glVertex3f(-4.10,18.4,7.65);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-2.5,22.90,7.1);
		glVertex3f(-2.5,18.550,7.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-2.4,22.9,7.1);
		glVertex3f(-2.4,18.70,7.1);
    glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(-2.6,22.90,7.1);
		glVertex3f(-2.6,18.70,7.1);
    glEnd();
     
       //ventana centro
    glBegin(GL_LINE_STRIP);
		glVertex3f(0.3,13.4,-3);
		glVertex3f(0.3,18.20,-3);
		glVertex3f(1.2,18.2,-5.3);
		glVertex3f(1.2,13.4,-5.3);	
		glVertex3f(0.3,13.4,-3);
    glEnd();
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.5,13.7,-3.0);
		glVertex3f(0.5,18.1,-3.0);
		glVertex3f(1.18,18.1,-5.10);
		glVertex3f(1.18,13.7,-5.10);	
		glVertex3f(0.5,13.7,-3.10);
	glEnd();
    glBegin(GL_LINE_STRIP);
		glVertex3f(0.5,13.9,-3.1);
		glVertex3f(0.5,18.1,-3.1);
		glVertex3f(1.1,18.1,-4.90);
		glVertex3f(1.1,13.94,-4.90);	
		glVertex3f(0.5,13.99,-3.10);
     glEnd();
     glBegin(GL_LINE_STRIP);
		glVertex3f(0.5,14.1,-3.1);
		glVertex3f(0.5,18.1,-3.1);
		glVertex3f(1.0,18.1,-4.80);
		glVertex3f(1.0,14.14,-4.80);	
		glVertex3f(0.5,14.17,-3.10);
     glEnd();
     
    //vetana lado der arriba
    glBegin(GL_LINE_STRIP);
		glVertex3f(5.5,12.5,-8.2);
		glVertex3f(5.5,17.1,-8.2);
		glVertex3f(8.50,17.1,-12.80);
		glVertex3f(8.50,12.5,-12.80);	
		glVertex3f(5.5,12.5,-8.20);
	glEnd();
		
	//primera linea
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,16.9,-8.20);	
		glVertex3f(5.60,12.8,-8.20);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.50,16.9,-9.60);	
		glVertex3f(6.50,12.9,-9.60);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.40,16.9,-9.50);	
		glVertex3f(6.40,12.9,-9.50);
	glEnd();
	//segunda linea
	glBegin(GL_LINE_STRIP);		
		glVertex3f(7.50,16.9,-11.40);	
		glVertex3f(7.50,12.9,-11.40);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(7.40,16.9,-11.30);	
		glVertex3f(7.40,12.9,-11.30);
	glEnd();
	//tercera linea
	glBegin(GL_LINE_STRIP);		
		glVertex3f(8.35,16.9,-12.40);	
		glVertex3f(8.35,12.9,-12.40);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(8.45,16.9,-12.60);	
		glVertex3f(8.45,12.8,-12.60);
	glEnd();
		
	//union entre ventana
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,16.9,-8.20);	
		glVertex3f(8.45,16.9,-12.60);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,12.8,-8.20);	
		glVertex3f(8.45,12.8,-12.60);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,12.9,-8.20);	
		glVertex3f(6.40,12.9,-9.50);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.50,12.9,-9.60);
		glVertex3f(7.40,12.9,-11.20);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(7.50,12.9,-11.350);
		glVertex3f(8.35,12.9,-12.40);
	glEnd();
	
    //vetana de abajo
    glBegin(GL_LINE_STRIP);
		glVertex3f(5.5,3.5,-7.5);
		glVertex3f(5.5,7.8,-7.5);
		glVertex3f(8.50,7.8,-12.80);
		glVertex3f(8.50,3.5,-12.80);	
		glVertex3f(5.5,3.5,-7.50);
	glEnd();
		
	//primera linea
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,7.5,-7.8);	
		glVertex3f(5.60,3.55,-7.8);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.50,7.4,-9.70);	
		glVertex3f(6.50,3.6,-9.70);
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.40,7.4,-9.50);	
		glVertex3f(6.40,3.6,-9.50);
	glEnd();
		
	//segunda linea
	glBegin(GL_LINE_STRIP);		
		glVertex3f(7.50,7.4,-11.40);	
		glVertex3f(7.50,3.6,-11.40);
	glEnd();
		glBegin(GL_LINE_STRIP);		
		glVertex3f(7.40,7.4,-11.30);	
		glVertex3f(7.40,3.6,-11.30);
	glEnd();
	//tercera linea
	glBegin(GL_LINE_STRIP);		
		glVertex3f(8.2,7.4,-12.70);	
		glVertex3f(8.2,3.6,-12.70);
		glEnd();
		glBegin(GL_LINE_STRIP);		
		glVertex3f(8.4,7.5,-12.80);	
		glVertex3f(8.4,3.5,-12.80);
	glEnd();
	
	//union entre ventana
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,7.5,-7.8);			
		glVertex3f(8.4,7.5,-12.80);;
		glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(5.60,3.7,-7.8);	
		glVertex3f(6.40,3.6,-9.60);
		glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.50,3.6,-9.70);	
		glVertex3f(7.40,3.6,-11.30);
		glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(6.50,3.6,-9.70);
		glVertex3f(8.2,3.6,-12.70);
		glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(8.29,7.4,-12.70);	
		glVertex3f(8.29,3.5,-12.70);
		glVertex3f(5.60,3.55,-7.8);		
	glEnd();
	
		//Puerta
		//cuadro principal de la puerta
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.1,6.60,-2.60);
		glVertex3f(0.1,-0.50,-2.60);		
		glVertex3f(1.5,-0.50,-3.0);
		glVertex3f(1.5,0.0,-3.0);
		glVertex3f(0.00,-0.30,-3.0);
		glVertex3f(0.90,-0.3,-5.80);
		glVertex3f(2.1,-0.3,-6.2);
		glVertex3f(2.1,-0.50,-6.20);
		glVertex3f(1.5,-0.50,-3.0);
		glVertex3f(1.5,-0.0,-3.0);
		glVertex3f(2.1,-0.3,-6.20);
		glVertex3f(0.90,-0.3,-5.80);
		glVertex3f(0.90,5.8,-5.80);			
	glEnd();
	
    // triangulo de la puerta
    glBegin(GL_LINE_STRIP);	    	
		glVertex3f(0.03,9,-1.9);	
		glVertex3f(1.2,9,-4.9);
		glVertex3f(2.0,7.4,-5.1);
		glVertex3f(1.2,7.4,-1.570);
		glVertex3f(0.03,9.0,-1.9);
	glEnd();	
	glBegin(GL_LINE_STRIP);	
		glVertex3f(0.03,9,-1.9);
		glVertex3f(0.03,7.0,-1.9);	
		glVertex3f(1.2,7.4,-1.570);
	glEnd();
	glBegin(GL_LINE_STRIP);	
		glVertex3f(0.03,8.8,-1.9);		
		glVertex3f(1.0,7.4,-1.570);
	glEnd();
		
	//efectos de puerta
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.0,-0.1,-2.80);
		glVertex3f(0.7,-0.3,-5.90);
		glVertex3f(0.7,5.75,-5.90);	
	glEnd();
	
	// cuadros de abajo de la puerta
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.3,1.3,-2.80);
		glVertex3f(0.3,2.8,-2.80);
		glVertex3f(0.6,2.8,-3.5);
		glVertex3f(0.6,1.3,-3.5);
		glVertex3f(0.3,1.3,-2.80);	
	glEnd();
	glBegin(GL_LINE_STRIP);		
		glVertex3f(0.8,1.4,-3.50);
		glVertex3f(0.8,2.8,-3.60);
		glVertex3f(1.2,2.8,-4.10);
		glVertex3f(1.2,1.4,-4.10);
		glVertex3f(0.8,1.4,-3.50);	
	glEnd();
	
	//orillas de los cuadros da abajo
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.8,1.48,-3.50);
		glVertex3f(1.15,1.48,-3.950);
		glVertex3f(1.15,2.8,-3.950);		
	glEnd();
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.3,1.35,-2.90);
		glVertex3f(0.55,1.35,-3.30);
		glVertex3f(0.55,2.8,-3.30);			
	glEnd();
	
	//cuadro de en medio
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.5,3.7,-2.80);
		glVertex3f(0.5,4.2,-2.80);
		glVertex3f(0.9,4.2,-3.5);
		glVertex3f(0.9,3.7,-3.5);
		glVertex3f(0.5,3.7,-2.80);	
	glEnd();
	
	// cuadros de arriba de la puerta
 		glBegin(GL_LINE_STRIP);		
		glVertex3f(0.3,4.8,-2.80);
		glVertex3f(0.3,6.5,-2.80);
		glVertex3f(0.6,6.2,-3.5);
		glVertex3f(0.6,4.8,-3.5);
		glVertex3f(0.3,4.8,-2.80);	
	glEnd();
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.8,4.9,-3.50);
		glVertex3f(0.8,6.4,-3.60);
		glVertex3f(1.2,6.6,-4.10);
		glVertex3f(1.2,4.9,-4.10);
		glVertex3f(0.8,4.9,-3.50);	
	glEnd();
	
	//orillas de los cuadros de arriba
	glBegin(GL_LINE_STRIP);			
		glVertex3f(0.8,4.98,-3.50);
		glVertex3f(1.15,4.98,-3.950);
		glVertex3f(1.15,6.6,-3.950);	
	glEnd();	
	glBegin(GL_LINE_STRIP);	
		glVertex3f(0.3,4.85,-2.90);
		glVertex3f(0.55,4.85,-3.30);
		glVertex3f(0.55,6.4,-3.30);
	glEnd();
	
	//pequeñas uniones de la puerta a las paredes
	glBegin(GL_LINE_STRIP);	
		glVertex3f(0.1,-0.5,-2.9);	
		glVertex3f(0,0,0);		
	glEnd();
	glBegin(GL_LINE_STRIP);	
		glVertex3f(0.90,-0.3,-5.80);	
		glVertex3f(2,1,-5.5); 
	glEnd();
		 
    glFlush();
    glutSwapBuffers();

}

void init()
{
    glClearColor(1,1,1,1);
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);
 }



int main(int argc, char* argv[])
{

    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);

    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800,600 );
    glutInitWindowPosition (370,110);
    // Crear ventana
    glutCreateWindow("Primer Laboratorio ");
	init();
    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);


    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
