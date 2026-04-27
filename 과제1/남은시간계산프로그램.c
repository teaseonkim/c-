//남은시간계산프로그램.c

#include <stdio.h>
int main(void)
{
	const int secperh = 3600;
	const int secperm = 60;
	int hourNow, minNow, secNow, hourArrive, minArrive, secArrive;
	int totalNow, totalArrive, remainh, remainm, remains, diff;
	printf("Enter current time (hour min sec): ");
	scanf("%d %d %d", &hourNow, &minNow, &secNow);
	printf("Enter arrival time (hour min sec): ");
	scanf("%d %d %d", &hourArrive, &minArrive, &secArrive);
	totalNow = hourNow*secperh + minNow*secperm + secNow*1;
	totalArrive = hourArrive*secperh + minArrive*secperm + secArrive*1;
	diff = totalArrive - totalNow;
	remainh = diff / secperh;
	remainm = (diff % secperh) / secperm;
	remains = diff % secperm;

	printf("remaining time: %d hour %d min %d sec", remainh, remainm, remains);	
	return 0;
}

