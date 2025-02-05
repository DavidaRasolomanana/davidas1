#include<stdio.h>

int main()
{
float a,b,c,d;
printf("entrer a=");
scanf("%f",&a);

printf("entrer b=");
scanf("%f",&b);

printf("entrer c=");
scanf("%f",&c);


	d=b;
	b=c;
	c=a;
	a=d;

	printf("a=%f , b=%f et c=%f\n",a,b,c);

return(0);
}
