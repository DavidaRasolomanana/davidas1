#include<stdio.h>

int main ()
{

int a;
int b;
int r;
int temp;

printf("veuillez entrer la valeur de a =");
scanf("%d",&a);
printf("veuillez entrer la valeur de b =");
scanf("%d",&b);

	if(a<b)
	{
	temp=a;
	a=b;
	b=temp;
	}
		r=a%b;
		
		while(r!=0)
		{
		r = a%b;
		a=b;
		b=r;
			if(r==0)
			{
			printf("le pgcd de a et b est %d\n",a);	
			}
		}
return (0);		
}		
