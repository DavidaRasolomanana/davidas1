#include<stdio.h>
#include<math.h>

int main()
{
	float a , b , c , delta , x1 , x2 , reel1 , reel2 , im1 , im2;
	
	printf("entrer a =");
	scanf("%f",&a);
	
	printf("entrer b =");
	scanf("%f",&b);
	
	printf("entrer c =");
	scanf("%f",&c);
	
	delta = (b*b)-(4*a*c);
	
	if(delta>0)
	{
		x1=((-b-sqrt(delta))/2*a);
		x2=((-b+sqrt(delta))/2*a);
		printf("x1=%f\nx2=%f\n",x1,x2);	
	}
		else if(delta==0)
		{
			x1=(-b)/2*a;
			printf("x1=x2=%f\n",x1);
		}
			else
			{
				reel1=-b/2*a;
				im1=(-sqrt(-delta))/2*a;
				
				reel2=-b/2*a;
				im2=(+sqrt(-delta))/2*a;
				
				printf("x1=%f%fi\n",reel1,im1);
				printf("x2=%f+%fi\n",reel2,im2);
			}
				
	return(0);

}
;
