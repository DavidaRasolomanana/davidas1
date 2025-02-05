#include<stdio.h>

int main()
{
int i,n,s;

printf("entrer le nombre n=");
scanf("%d",&n);

s=1;

for(i=1;i<=n;i++)
	{
	s=s*i;
	}
	printf("somme des multiplications=%d\n",s);
return(0);
}
