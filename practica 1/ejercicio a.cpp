#include<stdio.h>
#include<math.h>
#define pi 3.1415
float a,r;
int main()
{

	
	   printf("ingrese el valor de el radio de la esfera de la que quiere saber el volumen\n");
	    scanf("%f",&r);
	   r=r*r*r;
	   a=(0.75)*(pi)*(r);
	   printf("el valor de el volumen de la esfera es \n%f ",a);
	   return 0;
}
	   


