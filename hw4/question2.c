#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand((unsigned)time(NULL));
	int random[20] = {0};
	int i, j, k, l;

	printf("---생성된 난수 20개---\n");
	for(i=0; i<20; i++)
	{
		random[i] = (rand() % 9 + 1);
		printf(" %d ", random[i]);
	}
	printf("\n\n");
	printf("---숫자 출현 빈도(Histogram)---\n");

	for(l=0; l<=9; l++)
	{
		k = 0;
		for(i=0; i<20; i++)
		{
			if(random[i] == l)
			{
				k = k+1;
			}
		}
		printf("%d : %d\n", l, k);
	}
	return 0;
}
