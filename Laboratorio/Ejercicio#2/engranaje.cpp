#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(1);
    
    
		// circunferencia del engranaje negro
		glColor3f(0,0,0);
		double i, x,y,x1,y1;
		glBegin(GL_LINES);
		for (i=0;i<=360; i+=0.001)
		{
			x=2*cos(i) +0;
			y=2*sin(i) +0;
			x1=3*cos(i) +0;
			y1=3*sin(i) +0;
			glVertex2f(x,y); 
			glVertex2f(x1,y1);
			
		}
		//circunferencias del engranaje verde
		glColor3f(0,0.45,0);
			for (i=0;i<=360; i+=0.001)
		{
			x=2*cos(i) -5.3;
			y=2*sin(i) -4.5;
			x1=3*cos(i) -5.3;
			y1=3*sin(i) -4.5;
			glVertex2f(x,y); 
			glVertex2f(x1,y1); 
			
		}
			glColor3f(0.5,0.5,0.5);
			for (i=0;i<=360; i+=0.001)
		{
			x=2*cos(i) +6.0;
			y=2*sin(i) -3.6;
			x1=3*cos(i) +6.0;
			y1=3*sin(i) -3.6;
			glVertex2f(x,y);
			glVertex2f(x1,y1);  
			
		}
		glEnd();
		 //Dientes del engranaje negro
		 int n=0, p1=0,p2=10,p3 =19,p4=26;
		 while(n<=10){
			 glColor3f(0,0,0);
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(p1*M_PI/180.0),3*sin(p1*M_PI/180.0));
			glVertex2f(3.7*cos(p2*M_PI/180.0),3.7*sin(p2*M_PI/180.0)); 
			glVertex2f(3.65*cos(p3*M_PI/180.0),3.7*sin(p3*M_PI/180.0));
			glVertex2f(3*cos(p4*M_PI/180.0),3*sin(p4*M_PI/180.0));
			glEnd();
			n+=1;
			p1+=36;
			p2+=36;
			p3+=36;
			p4+=36;
		}//Dientes del engranaje verde
		int n1=0, p01=0,p02=9,p03 =19,p04=26;
		while(n1<=10){
			glColor3f(0,0.45,0);
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(p01*M_PI/180.0) -5.3,3*sin(p01*M_PI/180.0)-4.5);
			glVertex2f(3.7*cos(p02*M_PI/180.0)-5.3,3.7*sin(p02*M_PI/180.0)-4.5); 
			glVertex2f(3.65*cos(p03*M_PI/180.0)-5.3,3.7*sin(p03*M_PI/180.0)-4.5);
			glVertex2f(3*cos(p04*M_PI/180.0)-5.3,3*sin(p04*M_PI/180.0)-4.5);
			glEnd();
			n1+=1;
			p01+=36;
			p02+=36;
			p03+=36;
			p04+=36;
		}	
			
			
	
	//COLOR GRIS
	// centro
		glColor3f(0.5,0.5,0.5);

		//primer diente
		int n2=0, p001=0,p002=9,p003 =19,p004=26;
		while(n2<=10){
			glBegin(GL_POLYGON);
			glVertex2f(3*cos(p001*M_PI/180.0) +6.0,3*sin(p001*M_PI/180.0)-3.60);
			glVertex2f(3.7*cos(p002*M_PI/180.0)+6.0,3.7*sin(p002*M_PI/180.0)-3.60); 
			glVertex2f(3.65*cos(p003*M_PI/180.0)+6.0,3.7*sin(p003*M_PI/180.0)-3.60);
			glVertex2f(3*cos(p004*M_PI/180.0)+6.0,3*sin(p004*M_PI/180.0)-3.60);
			glEnd();
			n2+=1;
			p001+=36;
			p002+=36;
			p003+=36;
			p004+=36;
		}	
		
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-10, 10, -10.0, 5.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (620, 450);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Primer Laboratorio");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
