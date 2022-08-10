#include <stdio.h>

int Statment()
{
	withSwitch();

	return 0;
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
