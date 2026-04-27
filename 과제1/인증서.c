//인증서

#include <stdio.h>
int main(void)
{
	int startMonth, endMonth, startDay, endDay;
	float score, converted;
	printf("Enter program start month and day: ");
	scanf("%d", &startMonth);
	scanf("%d", &endMonth);
	printf("Enter program end month and day: ");
	scanf("%d", &startDay);
	scanf("%d", &endDay);
	printf("Enter your score (0~300): ");
	scanf("%f", &score);
	

	converted = score/300*100;
	
	printf("============ Score Certificate ============\n");
	printf("Institution	: Dongguk Programming Center\n");
	printf("Start Date	: %02d / %02d\n", startMonth, startDay);
	printf("End Date	: %02d / %02d\n", endMonth, endDay);
	printf("Original Score	: %.1f\n", score);
	printf("converted Score : %.2f%%\n" , converted);

	return 0;
}



	
