#include<stdio.h>

int get_median(int a, int b, int c, int med);

int main(void)
{
	int a, b, c, med;
	printf("세 개의 정수를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);
	med = get_median(a, b, c, med);
	printf("%d", med);
	return 0;
}
int get_median(int a, int b, int c, int med)
{
	if(a>b && a<c || a>c && a<b)
		return a;
	if(b>a && b<c || b>c && b<a)
		return b;
	if(c>a && c<b || c>b && c<a)
		return c;
}
