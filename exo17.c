#include<stdio.h>

int main()
{
float i,n;
float fact,sfact;

printf("entrer le nombre n=");
scanf("%f",&n);

fact=1;
sfact=0;

for(i=1;i<=n;i++)
	{
	fact=1/(fact*i);
	sfact=sfact+fact;
	}
	printf("somme des factoriels=%.2f\n",sfact);
return(0);
}
