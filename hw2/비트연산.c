//비트연산

#include<stdio.h>
int main(void)
{
	int num1, bit, num2, oldnum, newnum, i=0;
        //num1 = 임의의 정수, bit = 비트 위치 정수, num2 = 새로 출력되는정수
	//oldnum = 입력한 임의의 정수의 비트 1의 개수
	//newnum = 새로 출력되는 정수의 비트 1의 개수
	int count1 = 0, count2 = 0;

	printf("Insert number and location: ");
	scanf("%d %d", &num1, &bit);

	num2 = num1 | (1 << bit);
	printf("OLD: %d\t NEW: %d\n", num1, num2);

	while(i<32)
	{
		count1 = (num1 & (1<<i)) ? count1 + 1 : count1;
		count2 = (num2 & (1<<i)) ? count2 + 1 : count2;
		i++;
	}
	printf("NEW COUNT: %d\t OLD COUNT: %d", count1, count2);

	return 0;
}


