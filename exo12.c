#include<stdio.h>

int main()
{
int i,n,s;

printf("entrer le nombre n=");
scanf("%d",&n);

s=0;
for(i=0;i<=n;i++)
	{
	s=s+i;
	}
	printf("somme=%d\n",s);
return(0);
}
