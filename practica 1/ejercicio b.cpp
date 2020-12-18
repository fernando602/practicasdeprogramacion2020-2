#include<stdio.h>
#include<math.h>

int main()
{
	float w,m,g;
	g=9.81;
	printf("acontinuacion te dare  la tu fuerza de atraccion \n cuanto pesas?\n");
	  scanf("%f", &m);
	   w=g*m;
	   printf("tu fuerza de atraccion gravitatoria es de:\n %.3f Newtons", w);
	   return 0;
}
