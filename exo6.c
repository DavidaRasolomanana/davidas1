#include<stdio.h>

int main ()
{

float n1,n2,moyenne;
int c1,c2;

printf("entrer la note 1=");
scanf("%f",&n1);


printf("entrer la note 2=");
scanf("%f",&n2);

printf("entrer le coefficient 1=");
scanf("%d",&c1);

printf("entrer le coefficient 2=");
scanf("%d",&c2);

if(n1>20 && n2>20)
	{
	printf("error\n");
	}
	moyenne = ((c1*n1)+(c2*n2))/(c1+c2);

	printf("moyenne =%.2f\n",moyenne);

return(0);
}
