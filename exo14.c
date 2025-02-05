#include<stdio.h>

int main()
{
float i,n;
float s;

printf("entrer le nombre n=");
scanf("%f",&n);

s=0;

for(i=1;i<=n;i++)
	{
	s=s+(1/i);
	}
	printf("somme des 1/n=%.2f\n",s);
return(0);
}
