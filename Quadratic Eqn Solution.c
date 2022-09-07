#include<stdio.h>
#include<math.h>

int main()
{
	int a, b,c, delta;
	float root1, root2, rootz, rooti;
	char i= 'i';

	printf("Enter coefficient of X^2: ");
	scanf("%d",&a);
	printf("Enter coefficient of X: ");
	scanf("%d",&b);
	printf("Enter value of constant: ");
	scanf("%d",&c);

	delta = ((b*b)- (4*a*c));

	rootz = ((-b)/(2*a));

	rooti = ((sqrt(-delta))/(2*a));

	switch(delta > 0)
	{
		case 1:
			printf("Roots are real and distinct\n");
			root1 = ((-b+sqrt(delta))/(2*a));
			root2 = ((-b-sqrt(delta))/(2*a));
			printf("Distinct real roots are %.2f and %.2f",root1,root2);
			break;
		case 0:
			switch(delta < 0)
			{
				case 1:
					printf("Roots are distinct complex roots\n");
					printf("Distinct complex roots are:\n");
					printf("%.2f + %c * %.2f\n",rootz, i, rooti);
					printf("AND\n");
					printf("%.2f - %c * %.2f\n",rootz, i, rooti);

					break;
				default:
					printf("Only one real root\n");
					printf("Only One real root is %.2f",rootz);
					break;
			}
	}
}
