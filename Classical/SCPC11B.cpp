#include <iostream>
#include <algorithm>
using namespace std;

int arr[1500];
int arrsize;

int main()
{
	while (cin >> arrsize && arrsize != 0)
	{
		int index = 0;
		int curr = 200;
		for (int i = 0; i < arrsize; i++)
			cin >> arr[i];
		sort(arr, arr + arrsize);
		while (index < arrsize && curr < 1422)
		{
			if (arr[index] <= curr)
			{
				curr = arr[index] + 200;
				index++;
			}
			else
				index++;
		}
		if (curr >= 1422 && arr[arrsize-1] >= 1322)
			cout << "POSSIBLE\n";
		else
			cout << "IMPOSSIBLE\n";
	}
	return 0;
}