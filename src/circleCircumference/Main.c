#include <stdio.h>

int circleCircumference () {
	const double PI = 3.14159;
	double radius;
	double circumference;
	double area;

	printf("\nEntre the radius of a circle\n");
	scanf("%lf", &radius);

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("circumference is: %.3lf\n", circumference);
	printf("area is: %.3lf\n", area);


	return 0;
}
