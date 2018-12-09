#include<stdio.h>
#include<stdlib.h>

int binarySearch(const int b[], int t, int low, int high)
{
	if (t % 2 == 1)
	{
		return -1;
	}
	int  middle;
	middle = (low + high) / 2;
	if (t == b[middle])
	{
		return middle;
	}
	if (t < b[middle])
	{
		return binarySearch(b, t, low, middle - 1);
	}
    if (t > b[middle])
	{
		return binarySearch(b, t, middle - 1,high);
	}
	
}

int main(void)
{
	int target, result,deck[9];
	for (int i = 0; i < 9; i++)
	{
		deck[i] = 2 * i;
	}
	//0 2 4 6 8 10 12 14 16 
	printf("Enter a number between 0 to 16\n");
	scanf_s("%d", &target);

	

	result = binarySearch(deck,target,0,8);

	if (result != -1)
	{
		printf("\n%d found the target in array[%d]\n", target, result);
	}
	else
	{
		printf("\n%d not found\n",target);
	}
	system("pause");
	return 0;
}

