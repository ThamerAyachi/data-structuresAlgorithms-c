#include <stdio.h>
#include <ctype.h>

void Statment()
{
	return;
}

void Calculator()
{
	char operator;
	double num1;
	double num2;
	double result;

	printf("Enter an operator (+ or - or * or /):\t");
	scanf("%c", &operator);

	printf("Enter the first number:\t");
	scanf("%lf", &num1);

	printf("Enter the second number:");
	scanf("%lf", &num2);

	switch (operator)
	{
		case('+'):
			result = num1 + num2;
			break;
		case('-'):
			result = num1 - num2;
			break;
		case('*'):
			result = num1 * num2;
			break;
		case('/'):
			if (num2 != 0){
				result = num1 / num2;
			}
			else {
				printf("Can not devise on 0");
				return;
			}
			break;
		default:
			printf("%c is not valid .", operator);
			return;
	}

	printf("Result: %.1lf", result);

	return;
}

void temperatureConvertion ()
{
	char unit;
	float temp;

	printf("Is the temperature in (F) or (C)? :\t");
	scanf("%c", &unit);

	unit = toupper(unit);

	if(unit == 'C'){
		printf("Enter the temp in Celsius:\t");
		scanf("%f", &temp);
		temp = ( ( temp - 32 ) * 5 ) / 9;
	}
	else if (unit == 'F'){
		printf("Enter the temp in Farenheit:\t");
		scanf("%f", &temp);
		temp = (temp * 9 / 5) + 32;
	}
	else {
		printf("\nThis programme accept just (F) or (C).");
		return;
	}

	printf("The temperature is %c %.1f", unit, temp);

	return;
}

int withIf()
{
	int age;

	printf("Enter your age\n");
	scanf("%d", &age);

	if(age >= 18){
		printf("You are new signed up!");
	}
	else if (age < 0){
		printf("You haven't born yet!");
	}
	else {
		printf("You are to young to signed up!");
	}

	return 0;
}

int withSwitch()
{
	char grade;

	printf("Enter your grade\n");
	scanf("%c", &grade);

	switch(grade)
	{
		case 'A':
			printf("Perfect\n");
			break;
		case 'B':
			printf("Not bad\n");
			break;
		default:
			printf("So bad bro");
			break;
	}

	return 0;
}
