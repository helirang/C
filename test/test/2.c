#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> 

int main(void)
{
	int n=0;
	printf(" 0 <= number < 10");
	scanf("%d", &n);

	int H = 0, J = 5, K = 3;
	int dipla[10][15] =
	{
	{ 1,1,1,
	  1,0,1,
	  1,0,1,
	  1,0,1,
	  1,1,1 },
	{ 0,1,0,
	  1,1,0,
	  0,1,0,
	  0,1,0,
	  1,1,1 },
	{ 1,1,1,
	  0,0,1,
	  1,1,1,
	  1,0,0,
	  1,1,1 },
	{ 1,1,1,
	  0,0,1,
	  1,1,1,
	  0,0,1,
	  1,1,1,},
	{ 1,0,1,
	  1,1,1,
	  0,0,1,
	  0,0,1 },
	{ 1,1,1,
	  1,0,0,
	  1,1,1,
	  0,0,1,
	  1,1,1 },
	{ 1,1,1,
	  1,0,0,
	  1,1,1,
	  1,0,1,
	  1,1,1 },
	{ 1,1,1,
	  1,0,1,
	  0,0,1,
	  0,0,1,
	  0,0,1 },
	{ 1,1,1,
	  1,0,1,
	  1,1,1,
	  1,0,1,
	  1,1,1 },
	{ 1,1,1,
	  1,0,1,
	  1,1,1,
	  0,0,1,
	  0,0,1 }
	};

	if (n < 10)
	{
		for (int b = 0; b < J; ++b)
		{
			for (int c = 0; c < K; ++c)
			{
				printf("%d ", dipla[n][H]);
				//printf("%d \t", H );
				++H;
			}
			printf("\n");
		}
	}

	else
	{
		printf(" out of number ");
	}
}
