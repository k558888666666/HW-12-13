#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int target[14] = {0};
	int a, b, c;
	srand(time(0));
	
	for (int j = 1; j <= 36000; j++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		c = a + b;
		target[c]++;
	}

	for (int i = 2; i <= 12; i++)
	{
		printf("骰到兩骰子和=%d共 %d 次 \n" , i , target[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}