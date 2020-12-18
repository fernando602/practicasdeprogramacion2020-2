#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
void menu();
void mol (void);
void nul (void);
void mo2 (void);
void nu2 (void);

int main(void)
{
	menu ();
	return 0;
}

void menu ()
{
	int op;
	do{
		system ("cls");
		printf ("M E N U  P R I N C I P A L\n");
		printf ("1\n");
		printf ("2\n");
		printf ("3\n");
		printf ("4\n");
		
	
			
		switch (op)
		{
			case 1:
				mol ();
				break;
			case 2:
				nul ();
				break;
			case 3:
				mo2 ();
				break;
			case 4:
				nu2 ();
				break;
		}
	}while (op!=4);
}

void mol()
{
	float f1,f3,xi,xii,e,i=0;
		xi=0.3;
			printf("i\t xi\t error absoluto");
		do{	
		i=i+1;

    f1=2*(pow (xi,3))-11*(pow (xi,2))+17.7*xi-5;
	f3=6*(pow (xi,2))-22*xi+17.7;
	xii=xi-(f1/f3);
	e=abs(xii-xi);
	printf(" %.3f \t  %.3f \t %.3f \t %.3f \t %.3f\n", i,xi,xii,f3,e);

	xi=xii;
	
		}while(e<=0.000);


}
void nul()
{

		float f1,f3,xi,xii,e,i=0;
		xi=0;
			printf("i\t xi\t error absoluto");
		do{	
		i=i+1;
	double a= -1*xi;
	f1=8*sin(xi)*a-1;
	f3=-8*a*(sin(xi)-cos(xi));
	xii=xi-(f1/f3);
	e=abs(xii-xi);
	printf(" %.3f \t  %.3f \t %.3f \t %.3f \t %.3f\n", i,xi,xii,f3,e);
	xi=xii;
	
		}while(e<=0.000);


}
void mo2 ()
{
			float f1,f3,x1,x0,xi,e,i=0;
		x1=0.5;
		x0=-0.3;
			printf("i\t xi\t error absoluto");
		do{	
		i=i+1;
	double a= -1*x1;
	double b= -1*x0;
	f1=8*sin(x1)*a-1;
	f3=8*sin(x0)*b-1;
	xi=x1-((x1-x0)/(f1-f3))*f1;
	e=abs(xi-x1);
	printf(" %.3f \t  %.3f \t %.3f\n", i,xi,e);

	x0=x1;
	x1=xi;
	
		}while(e<=0.000);
	
}
void nu2()
{
		float f1,f3,x1,x0,xi,e,i=0;
		x1=0-4;
		x0=3;
			printf("i\t xi\t error absoluto");
		do{	
		i=i+1;
	double a= -1*x1;
	double b= -1*x0;
	f1=2*(pow (x1,3))-11*(pow (x1,2))+17.7*x1-5;
	f3=2*(pow (x0,3))-11*(pow (x0,2))+17.7*x0-5;
	xi=x1-((x1-x0)/(f1-f3))*f1;
	e=abs(xi-x1);
	printf(" %.3f \t  %.3f \t %.3f\n", i,xi,e);

	x0=x1;
	x1=xi;
	
		}while(e<=0.000);
}

