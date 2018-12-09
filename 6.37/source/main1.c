#include <stdio.h>
#include <stdlib.h>


int reverse(const int a[], int i, int m)
{
	if (i == 7)
	{
		return m;
	}
	if (m < a[i + 1])
	{
		m = a[i + 1];
	}
	return reverse(a, i + 1, m);
}

int main()
{
	int i = 0, array[8] = { 10 , 2 , 5 ,4 , 6 ,8 ,11 };
	int max = array[1];
	max = reverse(array, i, max);
	printf("max = %d", max);
	system("pause");
	return 0;
}