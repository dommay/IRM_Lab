// lab00, lab procesure, task 4



//This solution also contains the prelab Bonus exercise 5

#include "functions.h"


int main(int argc, char *argv[])
{

	while(1)
	{
		uint16_t num1;
		uint16_t num2;


		printf("write first hexadecimal number");
		scanf("%x",& num1);

		printf("write second hexadecimal number");
		scanf("%x",& num2);

		if (num1 == 0 && num2 == 0){
			break;
		}
		uint16_t sum=num1+num2;

		uint32_t merge=bit_merge(num1,num2);
		printf("merging 0x%x and 0x%x results in 0x%x\n",num1,num2,merge);

		printf("the sum is ");
		print_bits(sum);
		printf("\n \n");

}
	return 0;
}
