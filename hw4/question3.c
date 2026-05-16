#include<stdio.h>
int isLeapYear(int year);
int getMonthDays(int year, int month);

int main(void)
{
	unsigned int date=1, year, month, day, leap;
	char dayNames[7][3] = {{'S','u','n'}, {'M','o','n'}, {'T','u','e'}, {'W','e','d'}, {'T','h','u'}, {'F','r','i'}, {'S','a','t'}};
	int calendar[6][7];
	printf("연도와 월을 입력하세요: ");
	scanf("%d %d", &year, &month);
	int totaldays=0, startmonth=0, startday;
	printf(" --- %d - %d --- \n", year, month);
	for(int i=0; i<7; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%c", dayNames[i][j]);
		}
		printf(" ");
	}
	printf("\n");
	day = getMonthDays(year, month);
	leap = isLeapYear(year);


	for(int startyear=2000; startyear<year; startyear++)
	{
		if(isLeapYear(startyear) == 1)
			totaldays = totaldays + 366;
		else	
			totaldays = totaldays + 365;
	}

	for(startmonth=1; startmonth<month; startmonth++)
	{
		totaldays = totaldays + getMonthDays(year, startmonth);
	}

	startday = (totaldays + 6)%7;

	for(int i=0; i<6; i++)
	{
		for(int j=0; j<7; j++)
		{
			calendar[i][j] = 0;
		}
	}
	
	date = 1;
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<7; j++)
		{
			if(i==0 && j<startday)
				continue;
			if(date<=day)
			{
				calendar[i][j] = date;
				date++;
			}
		}
	}

	for(int i=0; i<6; i++)
	{
		for(int j=0; j<7; j++)
		{
			if(calendar[i][j]==0)
				printf("    ");
			else
				printf("%3d", calendar[i][j]);
		}
		printf("\n");
	}

	return 0;
}

int isLeapYear(int year)
{
	if(year % 4 == 0 && year % 100 != 0)
		return 1;
	else if(year % 400 == 0)
		return 1;
	else
		return 0;
}

int getMonthDays(int year, int month)
{
	int day = 0;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		day = 31;
	else if(month==4 || month==6 || month==9 || month==11)
		day = 30;
	else if(month==2)
		if(isLeapYear(year)==1)
			day = 29;
		else		
			day = 28;
	return day;
}


