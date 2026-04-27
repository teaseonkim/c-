//비트연산.c

#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter a positive integer (in hexadecimal): ");
	scanf("%x", &num);
	
	int quotient = num>>2;
	int remainder = num&3;
	int multiplied = num<<3;

	printf("After divided by 4, the quotient is: %d\n", quotient);
	printf("and the remainder is: %d\n", remainder);
	printf("After multiplied by 8 (in octal): %o\n", multiplied);

	return 0;
}

