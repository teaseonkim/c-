#include<stdio.h>

int reverse_number(int num);
int is_palindrome(int num);

int main(void)
{
	int a, b;
	printf("세 자리 정수를 입력하세요: ");
	scanf("%d", &a);

	b = reverse_number(a);
	printf("뒤집은 수는 %d입니다.", b);
	
}

int reverse_number(int num)
{
	int reverse=0, remain;
	while(num != 0)
	{
		remain = num % 10;
		reverse = reverse * 10 + remain;
		num = num / 10;
		//num = 123, reverse = 321, remain = 3
		//reverse * 10 = 3210+3 = 3213
	}
	return reverse;
}

int is_palindrome(int num)
{
	int reverse, remain;
	while(num != 0)
	{
		remain = num % 10;
		reverse = reverse * 10 + remain;
		num = num / 10;
	}
	if(num == reverse)
		printf("회문입니다.");
	else
		printf("회문이 아닙니다.");

	if(num / 100 <= 1)
		printf("세 자리 정수가 아닙니다.");
	return num;
}
	
