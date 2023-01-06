#include<stdio.h>
void main()
{
	float l,b,area,peri;
	printf("enter the value of length");
	scanf("%f",&l);
	printf("enter the value of bredth");
	scanf("%f",&b);
	area=l*b;
	peri=2*l+2*b;
	printf("area of the circle=%f\n",area);
	printf("perimeter of the circle=%f\n",peri);

}