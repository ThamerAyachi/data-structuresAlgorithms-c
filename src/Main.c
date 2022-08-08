/*
 * Main.c
 *
 *  Created on: Aug 8, 2022
 *      Author: Thamer Ayachi
 */

#include <stdio.h>
#include <stdbool.h>

int main(){
	int num = arithmeticOperators();
	printf("%d", num);

	return 0;
}

int first(){
	printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
	printf("Hello World!\n");
	printf("new \t tab");
	return 0;
}

int variables() {
	int age = 20; // integer
	float gpa = 2.05; 		// floating point number
	char grade = 'C'; 		// single character
	char name[] = "Thamer"; // array of character (string)

	printf("Hello %s\n", name); 						// %s for array of character (string)
	printf("You are %d years old\n", age); 				// %d for integer
	printf("Your average grade grade is %c\n", grade);  // %c for character
	printf("Your gpa is %f\n", gpa);					// %f for float

	return 0;
}

int dataType() {
	double d = 3.141592653589793238;
	bool e = true;
	char f = 100; 					// 1 byte (-128 to +127) %d (print number) or %c (print character)

	printf("%0.15lf \n", d); // for get 64 bit (4 bytes) of data
	printf("%lf \n", d);	 // for get 32 bit (8 bytes) of data
	printf("%d \n", e);		 // for boolean
	printf("print as character \"%c\"\n", f);
	printf("print as integer \"%d\"\n", f);

	return 0;
}

int formatSpecifiers() {
	float item1 = 5.75;
	float item2 = 10.00;
	float item3 = 100.99;

	printf("Item 1: $%.2f\n", item1);		// %.2 for print just last two number
	printf("Item 2: $%8.2f\n", item2);		// %8. for add width
	printf("Item 3: $%-8.2f\n", item3);		// %-8 left align

	return 0;
}

int constant() {
	const float PI = 3.14159;

	printf("%f", PI);

	return 0;
}

int arithmeticOperators() {
	// + (addition)
	// - (subtraction)
	// * (multiplication)
	// / (division)
	// % (modules)
	// ++ (increment)
	// -- (decrement)

	int x = 5;
	int y = 2;

	float z = x / (float) y;

	printf("%.1f\n", z);

	return 0;
}
