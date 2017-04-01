#include <iostream>
#include <algorithm>
using namespace std;

long long int arr[] = { 192, 442, 692, 942 };

int main()
{
	long long int size, k;
	cin >> size;
	while (size--)
	{
		cin >> k;
		k--;
		if (k / 4 > 0)
			cout << k / 4;
		cout << arr[k % 4] << endl;
	}
	return 0;
}