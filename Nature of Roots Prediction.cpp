#include<stdio.h>
int main()
{
	int a, b,c, delta;
	float root1, root2;
	
	printf("Enter coefficient of X^2: ");
	scanf("%d",&a);
	printf("Enter coefficient of X: ");
	scanf("%d",&b);
	printf("Enter value of constant: ");
	scanf("%d",&c);
	
	delta = ((b*b) - (4*a*c));
	
	switch(delta > 0)
	{
		case 1:
			printf("Roots are real and distinct");
			break;
		case 0:
			switch(delta < 0)
			{
				case 1:
					printf("Roots are distinct complex roots");
					break;
				default:
					printf("Only one real root");
					break;
			}
	}
	return 0;
}
