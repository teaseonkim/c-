//배수의개수

#include<stdio.h>
int main(void)
{
	int a, i=1;
	printf("Insert number: ");
	scanf("%d", &a);
	printf("Multiple of %d: ", a );

	while(i<=100)
	{
		if(i % a ==0)
	                printf(" %d ", i);
			i++;
	}
	printf("\nThe number of multiple of %d: %d", a, 100/a);	
	return 0;
}
