#include<stdio.h>

int is_valid_date(int year, int month, int day);
int is_leap_year(int year);

int main(void)
{
	int year, month, day;
	printf("연도를 입력하세요: ");
	scanf("%d", &year);
	printf("월을 입력하세요: ");
	scanf("%d", &month);
	printf("일을 입력하세요: ");
	scanf("%d", &day);

	if(is_valid_date(year, month, day) == 1 && is_leap_year(year) == 1)
		printf("유효한 날짜입니다.");
	else
		printf("유효하지 않은 날짜입니다.");

	return 0;	
}

int is_valid_date(int year, int month, int day)
{
	if(year<2027 && month<13)
	{
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			if(day<=31)
				return 1;
		else if(month == 4 || month == 6 || month == 9 || month == 11)
			if(day<=30)
				return 1;
		else if(month == 2)
			if(day<=29)
				return 1;	
		else
			return 0;

	}
}

int is_leap_year(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

