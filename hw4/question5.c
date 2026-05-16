#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initmatrix(char mat[10][10], int n);
void printmatrix(char mat[10][10], int n);
void rotate90(char mat[10][10], int n);
void rotate180(char mat[10][10], int n);
void rotate270(char mat[10][10], int n);
char mat[10][10];
char matresult[10][10];

int main(void)
{
	int n;
	printf("행렬의 크기 N을 입력하세요 (1~10): ");
	scanf("%d", &n);
	printf("[Original Matrix]\n");
	initmatrix(mat, n);
	printf("[90 Degree Rotation]\n");
	rotate90(mat, n);
	printf("[180 Degree Rotation]\n");
	rotate180(mat,n);
	printf("[270 Degree Rotation]\n");
	rotate270(mat, n);
	return 0;
}



void initmatrix(char mat[10][10], int n)
{
	
	srand((unsigned)time(NULL));
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			mat[i][j] = 'A' + (rand() % 26);
			printf(" %c ", mat[i][j]);
		}
		printf("\n");
	}
}

void rotate90(char mat[10][10], int n)
{
	int i, j;
	for(j=0; j<n; j++)
	{
		for(i=n-1; i>=0; i--)
		{
			printf(" %c ", mat[i][j]);
		}
		printf("\n");
	}
	
}

void rotate180(char mat[10][10], int n)
{
	int i, j;

	for(i=n-1; i>=0; i--)
	{
		for(j=n-1; j>=0; j--)
		{
			printf(" %c ", mat[i][j]);
		}
		printf("\n");
	}
}

void rotate270(char mat[10][10], int n)
{
	int i, j;

	for(j=n-1; j>=0; j--)
	{
		for(i=0; i<n; i++)
		{
			printf(" %c ", mat[i][j]);
		}
		printf("\n");
	}
}

