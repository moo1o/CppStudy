#include <stdio.h>
#define NUM 10

int main(void)
{
	int a[NUM], i, n;

	printf("***배열 안의 수 찾기***\n");

	for(i=0 ; i<NUM ; i++)
	{
		printf("%d번째 숫자 입력", i+1);
		scanf("%d", &a[i]);
	}

	printf("\n");

	printf("찾고싶은 숫자를 입력 : ");
	scanf("%d", &n);

	for(i=0 ; i<NUM ; i++)
	{
		if(n == a[i])
		{
			printf("%d는 a[%d]에 있습니다.\n", n, i);
			return 0;
		}
	}
	
	printf("%d는 a배열에 없습니다.\n", n);

	return 0;
}