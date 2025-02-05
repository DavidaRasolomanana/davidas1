#include<stdio.h>

int main()
{
float a,b;
printf("inserer le reel a =");
scanf("%f",&a);
printf("inserer le reel b =");
scanf("%f",&b);

if(a<0 && b<0||a>0 && b>0)
	{
	printf("le produits de a et b est positif\n");
	}
	else
		{
		printf("le produits de a et b est negatif\n");
		}
return(0);
}

