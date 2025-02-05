#include<stdio.h>

int main()
{
int i,n;
int s,d;

printf("entrer le nombre n=");
scanf("%d",&n);

s=1;
d=1;

for(i=1;i<=n;i++)
	{
	d=d*10;
	s=s+(d);
	}
	printf("somme des 10^n=%d\n",s);
return(0);
}
