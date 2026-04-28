#include<stdio.h>
int main(void)
{
	int a, b, c;

	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a<b && a<c)	
	{	if(a % 2 == 1)
			printf("가장 작은 수는 %d이고, 홀수입니다.", a);
		if(a % 2 == 0)
			printf("가장 작은 수는 %d이고, 짝수입니다.", a);
	}
	if(b<a && b<c)
	{
		if(b % 2 == 1)
			printf("가장 작은 수는 %d이고, 홀수입니다.", b);
		if(b % 2 == 0)
			printf("가장 작은 수는 %d이고, 홀수입니다.", b);
	}
	if(c<a && c<b)
	{
		if(c % 2 == 1)
			printf("가장 작은 수는 %d이고, 홀수입니다.", c);
		if(c % 2 == 0)
			printf("가장 작은 수는 %d이고, 홀수입니다.", c);
	}
	return 0;
}
