#include <stdio.h>
#include <math.h>

int main ()

{
float matriz[3][4]={10,2,-1,27,-3,-6,2,-61.5,1,1,5,-21.5};
int i,j,k, op;	
float xf1=0,xf2=0,xf3=0,x1=0,x2=0,x3=0,error=0.1,er1=0,er2=0,er3=0;
float xa1=0,xa2=0,xa3=0,ecu1=0,ecu2=0,ecu3=0,det=0,detx=0,dety=0,detz=0;
int x,y,z;

printf("practica 11 metodo de jacobi y regla de cramer : \n\n\n");
printf("Escoge un metodo: \n");
printf("Escoge 1 para el metodo de jacobi \n");
printf("Escoge 2 para el metodo de Gaus-seidel\n");
scanf("%d", &op);

switch(op)
{

	case 1:
		    printf ("el sistema de ecuaciones lineales que usaremos para resolver el metodo de jacobi es el siguiente: \n");
			printf(" 10x + 2x - x =27\n");
          	printf(" -3x - 6x - 2x =-61.5\n");
	        printf(" x + x - 5x =-21.5 \n\n");
	        
	        printf  ("la matriz de las ecuaciones es la siguiente: \n"); 
	        printf  ("--------------------\n");
		for (i=0; i<3; i++)
         {
            for (j=0;j<4;j++)
              {
                  printf ("%.1f ",matriz[i][j]);
              }
                 printf (" \n");
         }
            printf  ("--------------------\n");
         
         
         	x1=(matriz[0][3]-(matriz[0][1]*xf2)-(matriz[0][2]*xf3))/matriz[0][0];
         	
         	x2=(matriz[1][3]-(matriz[1][0]*xf1)-(matriz[1][2]*xf3))/matriz[1][1]; 
         	x3=(matriz[2][3]-(matriz[2][0]*xf1)-(matriz[2][1]*xf2))/matriz[2][2];
            er1=fabs((x1-xa1)/x1)*100;
	            er2=fabs((x2-xa2)/x2)*100;
	            er3=fabs((x3-xa3)/x3)*100;
	        printf ("la tabla con valores queda de la siguiente forma: \n");
	        printf ("iteracion  \t  x1 \t       x2 \t      x3 \t    error x1 \t error x2 \t error x3 \t\n\n");
	         printf("\n %d\t       %.5f\t    %.5f\t   %.5f\t   %.3f%%\t %.3f%%\t %.3f%%\t\t\n", k, x1, x2, x3, er1,er2,er3);
	        do
			{
				
			 k=k+1;
			 xa1=x1+0;
			 xa2=x2+0;
			 xa3=x3+0;
	            x1=(matriz[0][3]-(matriz[0][1]*x2)-(matriz[0][2]*x3))/matriz[0][0];
         	    x2=(matriz[1][3]-(matriz[1][0]*x1)-(matriz[1][2]*x3))/matriz[1][1]; 
         	    x3=(matriz[2][3]-(matriz[2][0]*x1)-(matriz[2][1]*x2))/matriz[2][2];
         	    
	            er1=fabs((x1-xa1)/x1)*100;
	            er2=fabs((x2-xa2)/x2)*100;
	            er3=fabs((x3-xa3)/x3)*100;
	            printf("\n %d\t       %.5f\t    %.5f\t   %.5f\t   %.3f%%\t  %.3f%%\t  %.3f%%\t \t\n\n", k, x1, x2, x3, er1,er2,er3);
	        }
	        while (er1>=error,er2>=error,er3>=error);
	        
	        printf  ("el valor de aproximado de x1 es: ");
	        printf  ("%.5f \n",x1);
	        printf  ("el valor de aproximado de x2 es: ");
	        printf  ("%.5f \n",x2);
	        printf  ("el valor de aproximado de x3 es: ");
	        printf  ("%.5f \n \n",x3);
	        
	        ecu1=((10*x1)+(2*x2)+(-1*x3));
            ecu2=((-3*x1)+(-6*x2)+(2*x3));
            ecu3=(x1+x2+(5*x3));

            printf  ("la comprobacion de los valores de x1,x2,x3 en las ecuaciones es la siguiente: \n \n");
            printf  ("comprobacion en la ecuacion 1: ");
            printf  ("%.1f \n",ecu1);
            printf  ("comprobacion en la ecuacion 2: ");
            printf  ("%.1f \n",ecu2);
            printf  ("comprobacion en la ecuacion 3: ");
            printf  ("%.1f \n",ecu3);
             break;


    case 2: 
  printf ("el sistema de ecuaciones lineales que usaremos para resolver el metodo de Gaus-Seidel es el siguiente: \n");
			printf(" 10x + 2x - x =27\n");
          	printf(" -3x - 6x - 2x =-61.5\n");
	        printf(" x + x - 5x =-21.5 \n\n");
	        
	        printf  ("la matriz de las ecuaciones es la siguiente: \n"); 
	        printf  ("--------------------\n");
		for (i=0; i<3; i++)
         {
            for (j=0;j<4;j++)
              {
                  printf ("%.1f ",matriz[i][j]);
              }
                 printf (" \n");
         }
            printf  ("--------------------\n");
         
         
         	x1=(matriz[0][3]-(matriz[0][1]*xf2)-(matriz[0][2]*xf3))/matriz[0][0];
         	xf1=x1;
         	x2=(matriz[1][3]-(matriz[1][0]*xf1)-(matriz[1][2]*xf3))/matriz[1][1]; 
         	xf2=x2;
         	x3=(matriz[2][3]-(matriz[2][0]*xf1)-(matriz[2][1]*xf2))/matriz[2][2];
         	xf3=x3;
            er1=fabs((x1-xa1)/x1)*100;
	            er2=fabs((x2-xa2)/x2)*100;
	            er3=fabs((x3-xa3)/x3)*100;
	        printf ("la tabla con valores queda de la siguiente forma: \n");
	        printf ("iteracion  \t  x1 \t       x2 \t      x3 \t    error x1 \t error x2 \t error x3 \t\n\n");
	         printf("\n %d\t       %.5f\t    %.5f\t   %.5f\t   %.3f%%\t %.3f%%\t %.3f%%\t\t\n", k, x1, x2, x3, er1,er2,er3);
	        do
			{
				
			 k=k+1;
			 xa1=x1+0;
			 xa2=x2+0;
			 xa3=x3+0;
	            x1=(matriz[0][3]-(matriz[0][1]*x2)-(matriz[0][2]*x3))/matriz[0][0];
         	    x2=(matriz[1][3]-(matriz[1][0]*x1)-(matriz[1][2]*x3))/matriz[1][1]; 
         	    x3=(matriz[2][3]-(matriz[2][0]*x1)-(matriz[2][1]*x2))/matriz[2][2];
         	    
	            er1=fabs((x1-xa1)/x1)*100;
	            er2=fabs((x2-xa2)/x2)*100;
	            er3=fabs((x3-xa3)/x3)*100;
	            printf("\n %d\t       %.5f\t    %.5f\t   %.5f\t   %.3f%%\t  %.3f%%\t  %.3f%%\t \t\n\n", k, x1, x2, x3, er1,er2,er3);
	        }
	        while (er1>=error,er2>=error,er3>=error);
	        
	        printf  ("el valor de aproximado de x1 es: ");
	        printf  ("%.5f \n",x1);
	        printf  ("el valor de aproximado de x2 es: ");
	        printf  ("%.5f \n",x2);
	        printf  ("el valor de aproximado de x3 es: ");
	        printf  ("%.5f \n \n",x3);
	        
	        ecu1=((10*x1)+(2*x2)+(-1*x3));
            ecu2=((-3*x1)+(-6*x2)+(2*x3));
            ecu3=(x1+x2+(5*x3));

            printf  ("la comprobacion de los valores de x1,x2,x3 en las ecuaciones es la siguiente: \n \n");
            printf  ("comprobacion en la ecuacion 1: ");
            printf  ("%.1f \n",ecu1);
            printf  ("comprobacion en la ecuacion 2: ");
            printf  ("%.1f \n",ecu2);
            printf  ("comprobacion en la ecuacion 3: ");
            printf  ("%.1f \n",ecu3);
             break;

}
}
