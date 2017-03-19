#include <iostream>

#pragma warning(disable:4996)
using namespace std;

int main() {

	// your code here
	int size;
	cin >> size;
	while (size--)
	{
		int num;
		cin >> num;

		int res = 0;
		int x = 5;
		while (num >= x)
		{
			res += num / x;
			x *= 5;
		}
		cout << res << endl;
	}
	return 0;
}