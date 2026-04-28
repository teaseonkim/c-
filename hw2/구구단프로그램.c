//구구단프로그램

#include<stdio.h>
int main(void)
{
	int a=1;
	int b=1;
	int c=1;
	printf("Insert Start Number: ");
	scanf("%d", &a);
	printf("Insert End Number: ");
	scanf("%d", &b);

	while(a<=b)
	{
		c = 1;
		while(c<=9)
		{
			printf("%d x %d: %d	", a, c, a*c);
			c++;
		}
		a++;
	}
	return 0;
}

