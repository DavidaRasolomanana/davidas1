#include<stdio.h>

int main()
{
int i,nbnb,n,max;

printf("Veuillez entrer le nombre n1️⃣️ =");
scanf("%d",&max);

printf("veuillez entrer le nombre de nombre =");
scanf("%d",&nbnb);

	for(i=2;i<=nbnb;i++)
	{
	printf("veuillez entrer le nombre n⚪️%d=",i);
	scanf("%d",&n);
	
		if(max<n)
		{
		max=n;
		}
	}	
		printf("le nombre maximum est %d\n",max);

return(0);
}
