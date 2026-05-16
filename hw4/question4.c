#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int array[5][5];
void placemines(void);
void calculatemines(void);
void printboard(void);

int main(void)
{
	printf("<<< Mine Sweeper Board >>>\n");
	placemines();
	calculatemines();
	printboard();

	return 0;
}

void placemines(void)
{
	srand((unsigned)time(NULL));
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			array[i][j] = 0;
		}
	}


	for(int count=0; count<5; count++)
	{
		int i = rand() % 5;
		int j = rand() % 5;
		
		if(array[i][j] == -1)
		{
			count--;
		}
		else
			array[i][j] = -1;
	}
}

void calculatemines(void)
{
	int count;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(array[i][j] == 0)
			{
				int count = 0;
				for(int ni=i-1; ni<i+2; ni++)
				{
					for(int nj=j-1; nj<j+2; nj++)
					{
						if(nj<0 || ni<0 || nj>4 || ni>4)
							continue;
						if(array[ni][nj] == -1)
						{
							count++;
						}
					}
					array[i][j] = count;
				}
			}
		}
	}
}

void printboard(void)
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}
