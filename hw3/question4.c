#include<stdio.h>
int main(void)
{
	int a;

	printf("점수를 입력하세요: ");
	scanf("%d", &a);

	if(a>=90)
		printf("당신의 학점은 A 입니다");
	else if(a>=80 && a<=89)
		printf("당신의 학점은 B 입니다");
	else if(a>=70 && a<=79)
		printf("당신의 학점은 C 입니다");
	else if(a>=60 && a<=69)
		printf("당신의 학점은 D 입니다");
	else
		printf("당신의 학점은 F 입니다");

	return 0;
}
