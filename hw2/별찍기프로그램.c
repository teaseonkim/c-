//별찍기프로그램

#include<stdio.h>
int main(void)
{
	int n, b=1, s;
	printf("Insert the number of lines: ");
	scanf("%d", &n);
	printf("[START]\n");
	while(n>=b)
	{
		s = 1;
		while(s<=n-b)
		{
			printf(" ");
			s++;
		}
		while(s<=n)
		{
			printf("*");
			s++;
		}
	printf("\n");
	b++;
	}
	
	printf("[CHANGE]\n");
	b = 1;	
	while(n>=b)
	{
		s = 1;
		while(s<=n-b)
		{
			printf(" ");
			s++;
		}
		s = 1;
		while(s<=((2*b)-1))
		{
			printf("*");
			s++;
		}
	printf("\n");
	b++;
	}
	printf("[END]");		
		
	return 0;
}	
