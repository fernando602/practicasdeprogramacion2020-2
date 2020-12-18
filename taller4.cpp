#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

void menu ();
void cuatrouno (void);
void cuatrodos (void);
void cuatrotres (void);
void cuatrocuatro(void);
void cuatrocinco (void);
void cuatrosiete (void);
void cuatroocho (void);

int main (void)
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
		printf ("4.1\n");
		printf ("4.2\n");
		printf ("4.3\n");
	   	printf ("4.4\n");
		printf ("4.5\n");
		printf ("4.7\n");
	    printf ("4.8\n");
		
			
		switch (op)
		{
			case 1:
				cuatrouno ();
				break;
			case 2:
				cuatrodos ();
				break;
			case 3:
				cuatrotres ();
				break;
			case 4:
				cuatrocuatro ();
				break;
			case 5:
				cuatrocinco ();
				break;
			case 6:
				cuatrosiete ();
				getch ();
				break;
			case 7:
				cuatroocho();
				break;
		}
	}while (op!=7);
}

void cuatrouno()
{
	int i,c,r;
	float a[i],b[i];
	
	printf("de que tamaño quiere que sean los vectores\n");
	scanf("%d", &c);
	printf("introdusca loa valores de el primer vector\n");
for(i=1;i<=c;i++)
	{
		printf("valor %d", i);
		scanf("\n%d\n",&r);
		a[i]=r;
		
	}
	printf("introdusca loa valores de el segundo  vector\n");
	for(i=1;i<=c;i++)
	{
		printf("valor %d", i);
		scanf("\n%d\n",&r);
		b[i]=r;
	}
    
    printf("desea imprimir los valores de los vectores?");
    scanf("%i",&r);
    if(r=1)
    {
        printf("vector 1 \t vector 2\n");
        for(i=1;i<=c;i++)
        {
            printf("%.2f \t %.2f", a[i],b[i]);
        }
    }
    else
	{
		printf("grcias por no pedir nada jajaja");
	}
	
}
void cuatrodos()
{
	int i,n=100;
	int numero,a[10],b[10],r[10];
	for(i=0;i<=10;i++)
    {
    	a[i]=numero=rand() % (n+1) ;
    	
	}
	for(i=0;i<=10;i++)
	  {
    	b[i]=numero=rand() % (n+1) ;
    	
	}
	
   	for(i=0;i<=10;i++)
    {
    	r[i]=a[i]+b[i];
    
    	
	}
		for(i=0;i<=10;i++)
    {
    	
    	printf("%d\n", r[i]);
    	
	}
}
void cuatrotres()
{
   int i=0,c,r;
   int a[i],b[i],f;
   
   	printf("de que tamaño quiere que sean los vectores\n");
	scanf("%d", &c);
	printf("introdusca loa valores de el arreglo\n");
for(i=0;i<=c;i++)
	{
		printf("valor %d", i);
		scanf("\n%d\n",&r);
		a[i]=r;
	}

   
	for(i=0;i<=15;i++)
    {
    	f=f+a[i];
    
    	
	}
		for(i=0;i<=15;i++)
    {
    	
    	printf("la suma de los elemntos de el arreglo es \n%d\n", f);
    	
	}
	}
	void cuatrocuatro()
{
   int i=0,c,r;
   int a[i],b[i],f;
   
   	printf("de que tamaño quiere que sean los vectores\n");
	scanf("%d", &c);
	printf("introdusca loa valores de el arreglo\n");
for(i=0;i<=c;i++)
	{
		printf("valor %d", i);
		scanf("\n%d\n",&r);
		a[i]=r;
	}

   
	for(i=0;i<=15;i++)
    {
    	f=f+a[i];
    
    	
	}
		for(i=0;i<=15;i++)
    {
    	
    	printf("la suma de los elemntos de el arreglo es \n%d\n", f);
    	
	}
	}
	void cuatrocinco()
{
	int i,c,r;
	float a[i],b[i];
	
	printf("de que tamaño quiere que sean los vectores\n");
	scanf("%d", &c);
	printf("introdusca loa valores de el primer vector\n");
for(i=1;i<=c;i++)
	{
		printf("valor %d", i);
		scanf("\n%d\n",&r);
		a[i]=r;
		
	}
	printf("introdusca loa valores de el segundo  vector\n");
	for(i=1;i<=c;i++)
	{
		printf("valor %d", i);
		scanf("\n%d\n",&r);
		b[i]=r;
	}
    
    printf("desea imprimir los valores de los vectores?");
    scanf("%i",&r);
    if(r=1)
    {
        printf("vector 1 \t vector 2\n");
        for(i=1;i<=c;i++)
        {
            printf("%.2f \t %.2f", a[i],b[i]);
        }
    }
    else
	{
		printf("grcias por no pedir nada jajaja");
	}
	
}
void cuatrosiete()
{
	int j,i,n=100;
	int numero,a[10][10],b[10][10],f[10][10];
	for(i=0;i<=10;i++)
    {
    
    		for(j=0;j<=10;j++)
    {
    	a[i][j]=numero=rand() % (n+1) ;
    	
	}
	}
	for(i=0;i<=10;i++)
	  {
    	
    		for(j=0;j<=10;j++)
	  {
    	b[i][j]=numero=rand() % (n+1) ;
    	
	}
	}
	
	
   
	for(i=1;i<=10;i++)
    {
    	
    	for(j=1;j<=10;j++)
    {
    	f[i][j]=a[i][j]+b[i][j];
    
    	
	}
    	
	}
	printf(" el resultado de sumar las matrices es:");
		for(i=1;i<=10;i++)
    {
    	for(j=1;j<=10;j++)
    	{
    	printf("%d\t", f[i][j]);	
		}
    	
    	printf("\n");
	}
	
	}
	void cuatroocho()
{
	int j,i,n=100;
	int numero,a[10][10],b[10][10],f[10][10];
	for(i=0;i<=10;i++)
    {
    
    		for(j=0;j<=10;j++)
    {
    	a[i][j]=numero=rand() % (n+1) ;
    	
	}
	}
	for(i=0;i<=10;i++)
	  {
    	
    		for(j=0;j<=10;j++)
	  {
    	b[i][j]=numero=rand() % (n+1) ;
    	
	}
	}
	
	
   
	for(i=1;i<=10;i++)
    {
    	
    	for(j=1;j<=10;j++)
    {
    	f[i][j]=a[i][j]*b[i][j];
    
    	
	}
    	
	}
	printf(" el resultado de sumar las matrices es:");
		for(i=1;i<=10;i++)
    {
    	for(j=1;j<=10;j++)
    	{
    	printf("%d\t", f[i][j]);	
		}
    	
    	printf("\n");
	}

	}
