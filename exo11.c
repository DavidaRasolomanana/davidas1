#include<stdio.h>

int main()
{
int n,i,fact;
fact=1;

printf("entrer n =");
scanf("%d",&n);

if(n==0)
	{
	printf("0!=1");
	}
	else
		{
		for(i=1;i<=n;i++)
			{
			fact=fact*i;
			}
			printf("%d!=%d\n",n,fact);
		}
return(0);
}
