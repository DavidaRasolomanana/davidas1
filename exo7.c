#include<stdio.h>

int main()
{
float a,b,c,temp;

printf("entrer le nombre a=");
scanf("%f",&a);

printf("entrer le nombre b=");
scanf("%f",&b);

printf("entrer le nombre c=");
scanf("%f",&c);

if(a>b)
	{
	temp=a;
	}
	else
		{
		temp=b;
		}

		if(temp>c)
			{
			printf("la valeur maximum est %f\n",temp);
			}
			else
				{
				printf("la valeur maximum est %f\n",c);
				}

return(0);
}
