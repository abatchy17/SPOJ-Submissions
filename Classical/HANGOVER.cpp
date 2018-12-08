#include <stdio.h>

#define MAXIMUM 276

int main()
{
	double arr[MAXIMUM];
	arr[0] = 0;
	for(int i = 1; i < MAXIMUM; i++)
	{
		arr[i] = arr[i-1] + 1.0f/ (double)(i+1);
	}

	int a, b;
	while(scanf_s("%d.%d\n", &a, &b) && a + b != 0)
	{
		for(int i = 0; i < MAXIMUM; i++)
		{
			if(a * 100 + b <= (int)(arr[i]  * 100))
			{
				printf("%d card(s)\n", i);
				break;
			}
		}
	}
}