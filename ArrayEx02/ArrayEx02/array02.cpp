#include <stdio.h>

int main(void)
{
	int a[4][4], i, j;

	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(i==0)
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	