#include <iostream>

#pragma warning(disable:4996)
using namespace std;

int a, b, sum;

int reverse(int x)
{
	int res = 0;
	while (x != 0)
	{
		int tmp = x % 10;
		res = res * 10 + tmp;
		x /= 10;
	}
	return res;
}

int main() {

	// your code here
	int size;
	cin >> size;
	while (size--)
	{
		cin >> a >> b;
		a = reverse(a);
		b = reverse(b);
		sum = reverse(a + b);
		cout << sum << "\n";
	}
	return 0;
}