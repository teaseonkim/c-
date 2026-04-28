#include<stdio.h>

int is_leap_year(int year)
{
	if(year % 4 == 0 && year % 100 != 0)
		return 1;
	if(year % 400 == 0)
		return 1;
	else
		return 0;
}

int main(void)
{	int year, result;
	printf("연도를 입력하세요: ");
	scanf("%d", &year);
	result = is_leap_year(year);
	if(result == 1)
	printf("%d년은 윤년입니다.", year);
	if(result == 0)
	printf("%d년은 윤년이 아닙니다.", year);
}
