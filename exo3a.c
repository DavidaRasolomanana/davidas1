#include<stdio.h>

int main()
{
float a,b,c;
printf("entrer a=");
scanf("%f",&a);

printf("entrer b=");
scanf("%f",&b);


	c=a;
	a=b;
	b=c;

	printf("a=%f , b=%f\n",a,b);

return(0);
}
