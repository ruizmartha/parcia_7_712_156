#include<stdio.h>
void main ()
{
	int a,b,c=0;
	printf("introduzca el primer angulo");
	scanf("%d",&a);
	printf("introduzca el segundo angulo");
	scanf("%d",&b);
	printf("introduzca el tercer angulo");
	scanf("%d",&c);
	if(a+b+c==180)
	printf("el triangulo es valido");
	else
	printf("el triangulo no es valido");
}
