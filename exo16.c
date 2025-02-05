#include<stdio.h>

int main()
{
int i,n;
int fact,sfact;

printf("entrer le nombre n=");
scanf("%d",&n);

fact=1;
sfact=0;

for(i=1;i<=n;i++)
	{
	fact=fact*i;
	sfact=sfact+fact;
	}
	printf("somme des factoriels=%d\n",sfact);
return(0);
}
