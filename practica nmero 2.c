#include <stdio.h>
#include <math.h>

void formulageneral (void);
void calimpuestos (void);
void mayoromenor (void);
void menu ();
void paroimpar (void);
void imc (void);

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
	printf ("1.- para saber si un numero es Par o Impar\n");
	printf ("2.- para saber si es mayor o menor de Edad\n");
	printf ("3.- para resolver un ejercicio con Formula General de la forma ax^2+bx+c\n");
	printf ("4.-para sacar el cálculo de impuestos que debe de pagar una persona\nde acuerdo con el estado civil y situación socioeconomica:l\n");
	printf ("5.-para saber el indice de masa corporal\n");
	scanf ("%d", &op);
	switch (op)
	{
		case 1:
			paroimpar ();
			break;
		case 2:
			mayoromenor ();
			break;
		case 3:
			formulageneral ();
			break;
		case 4:
			calimpuestos ();
			break;
		case 5:
			imc ();
			break;
		case 6:
			printf ("Hasta luego\n");
			getch ();
			break;
	}
	}while (op!=6);
}
void paroimpar ()
{
	int num;
	printf ("Ingresa el numero\n");
	scanf ("%d", &num);
	if (num%2==0)
	{
		printf ("El numero que ingresaste es par\n");
		getch ();
	}
	else
	{
		printf ("El numero que ingrsaste es impar\n");
		getch ();
	}
}
void mayoromenor ()
{
	int ed;
	printf ("Ingresa tu edad\n");
	scanf ("%d", &ed);
	if (ed<18)
	{
		printf ("eres menor de edad\n");
		getch ();
	}
	else
	{
		printf ("ya eres mayor de edad\n");
		getch ();
	}
}
void formulageneral ()
{
	float x1,x2,a,b,c,exp;
	printf("Ingrese el valor de a. \n");
	scanf ("%f",&a);
	printf("Ingrese el valor de b. \n");
	scanf ("%f",&b);
	printf("Ingrese el valor de c. \n");
	scanf ("%f",&c);
	exp=(pow(b,2)-(4*a*c));
	if (exp>=0)
	{
		x1=(-b+sqrt(exp))/(2*a);
		x2=(-b-sqrt(exp))/(2*a); 
		printf ("El valor de x1 es %.2f \n",x1);
		printf ("El valor de x2 es %.2f \n",x2);
		getch ();
	}
	else
	{
		printf ("la  raiz salio negativa y no se puede resolver. \n");
		getch ();
	}
}
void calimpuestos ()
{

float ig,pa,an;
printf ("Seleccione su estado civil: 1.- Soltero \t 2.- Casado\n");
scanf ("%d", &an);
printf ("Escriba sus ingresos mensuales (en pesos)\n");
scanf ("%f", &ig);
if (an==1 && ig<32000)
{
pa=(ig*0.2);
	printf ("Usted debe de pagar: %f",pa);
	getch ();
	}
else if (an==1 && ig>32000)
{
pa=(ig*0.25);
printf ("Usted debe de pagar: %f",pa);
getch ();
}
else if (an==1 && ig<64000)
{
pa=(ig*0.1);
printf ("Usted debe de pagar: %f",pa);
getch ();
}
else if (an==2 && ig>64000)
{
pa=(ig*0.25);
printf ("Usted debe de pagar: %f",pa);
getch ();
}
}
void imc ()
{float al, pe,imc;
printf ("Ingresa tu peso\n");
scanf ("%f", pe);
printf ("Ingresa tu altura\n");
scanf ("%f", al);
imc=pe/al;
if (imc<18.5)
{
	printf ("Peso bajo\n");
	getch ();
}
else if (imc>=18.5 && imc<=24.9)
{
	printf ("Peso normal\n");
	getch ();
}
else if (imc>=25.0 && imc<30)
{
	printf ("Sobrepeso\n");
	getch ();
}
else if (imc>=30 && imc<35)
{
	printf ("Obesidad tipo 1\n");
	getch ();
}
else if (imc>=35 && imc<40)
{
	printf ("Obesidad tipo 2\n");
	getch ();
}
else if (imc>=40)
{
	printf ("Hiper obesidad\n");
	getch ();
}
}
