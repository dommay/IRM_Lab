// lab00, lap procedure, task 2

// source file for the program sum_numbers

/*
 * This file is used to generate an executable program that prints the 
 * sum of the two numbers in binary and hexadecimal format.
*/

// Since we will be using our own functions, we need to add the header
// file where the functions are declared.
// Keep in mind that the header file already includes standard libraries
// so they do not to be included here.
#include "functions.h"
 
 // main function
int main()
{
	uint16_t num1;
	uint16_t num2;
	uint16_t sum;
	
	printf("write first hexadecimal number");
	scanf("%x",& num1);
	
	printf("write second hexadecimal number");
	scanf("%x",& num2);
	
	sum = num1 + num2;
	
	print_bits(sum);

	return 0;
}
