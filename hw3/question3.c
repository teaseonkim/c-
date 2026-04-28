#include<stdio.h>
int abs_compare(int a, int b);

int main(void)
{
	int i, j;
	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &i, &j);
	printf("절댓값이 더 큰 수는 %d 입니다.", abs_compare(i, j));
	return 0;

}

int abs_compare(int a, int b)
{
	if(a<0)
		a=-a;
	if(b<0)
		b=-b;
	if(a>b)
		return a;
	if(b>a)
		return b;
}
