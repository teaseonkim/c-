#include<stdio.h>
//int is_triangle(void);
//int triangle_type(void);

int main(void)
{
	int a, b, c;
	printf("세 변의 길이를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a+b<c || a+c<b || b+c<a)
		printf("삼각형을 만들 수 없습니다.");
	else
	{
		if(a==b && b==c && a==c)
			printf("삼각형 가능: 정삼각형");
		if(a==b && a!=c)
			printf("삼각형 가능: 이등변 삼각형");
		if(a==c && a!=b)
			printf("삼각형 가능: 이등변 삼각형");
		if(b==c && b!=a)
			printf("삼각형 가능: 이등변 삼각형");
		if(a!=b && b!=c && c!=a)
			printf("삼각형 가능: 삼각형");
	}
	return 0;
}
