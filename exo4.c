
#include<stdio.h>

int main()
{
float n1,n2,somme,moyenne;


printf("entrer la note 1 =");
scanf("%f",&n1);

printf("entrer la note 2 =");
scanf("%f",&n2);
if(n1>=20 && n2>=20)
	{
	printf("la note doit etre inferieur a 20");
	}
	else
	{
	somme=n1+n2;
	moyenne=somme/2;

	printf("la somme des notes est %.2f et la moyenne est %.2f\n",somme,moyenne);
	}
return(0);
}
