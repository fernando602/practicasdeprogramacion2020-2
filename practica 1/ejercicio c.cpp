#include<stdio.h>
#include<math.h>

int main()
{
	float e,p,es,imc;
	char name;
	printf("introdusca su nombre\n");
	  scanf("%s",&name);
	
	printf("introdusca su edad\n");
	  scanf("%f",&e);
	
	printf("introdusca su peso\n");
	  scanf("%f", &p);
	
	printf("introdusca su estatura\n");
	  scanf("%f", &es);
	  
	imc=p/(es*es);
	printf("nombre \n%c \nedad \n%f \nestatura \n%f \npeso \n%f \nindise de masa corporal \n%f", name,e,es,p,imc);	
	return 0;
}
