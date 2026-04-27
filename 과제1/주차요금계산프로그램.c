//주차요금계산프로그램

#include <stdio.h>
int main(void)
{
	#define regularfee 2000
	#define feeper10m 500
	int parkingtime, overtime, compactcar, extrafee;
	float finalfee;
	printf("Enter parking time in minutes: \n");
        printf("Enter compact car status (0 or 1): \n");
	scanf("%d %d", &parkingtime, &compactcar);
	overtime = (parkingtime - 30) * (parkingtime > 30);	   	    extrafee = ((overtime + 9) / 10) * feeper10m;
	finalfee = (regularfee + extrafee) * (1 - (compactcar * 0.5));
	printf("Parking fee: %.0f\n", finalfee);
	return 0;
}


