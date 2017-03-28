#include <iostream>

#pragma warning(disable:4996)
using namespace std;

int main()
{
	int x;
	int res = 0;
	cin >> x;
	for (int i = 1; i*i <= x; i++)
		res += x / i - i + 1;
	cout << res << endl;
	return 0;
}