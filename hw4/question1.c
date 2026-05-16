#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int lotto[6] = {0};
	int i, j, k;
	srand((unsigned)time(NULL));
	printf("Before Sorting : ");
	for(i=0; i<6; i++)
	{
		do
		{
			lotto[i] = (rand() % 45 + 1);
			k = 0;
			for(j=0; j<i; j++)
			{
				if(lotto[i] == lotto[j])
					k=1;
			}
		} while(k == 1);
	printf(" %d ", lotto[i]);
	}	
	
	printf("Lotto Numbers: ");	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if(lotto[i]>lotto[j])
			{
				int temp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = temp;
			}
		}
	}
	for(i=0; i<6; i++)
	{
		printf(" %d ", lotto[i]);
	}
	
	return 0;
}
