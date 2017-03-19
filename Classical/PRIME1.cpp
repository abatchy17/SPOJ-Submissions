#include <iostream>

#pragma warning(disable:4996)
using namespace std;
int a, b;

bool isprime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i*i <= x; i++)
	{
		if (x%i == 0 && x != i)
			return false;
	}
	return true;
}
int main() {

	// your code here
	int size;
	cin >> size;
	while (size--)
	{
		cin >> a >> b;
		for (int x = a; x <= b; x++)
		{
			if (isprime(x))
			{
				cout << x << "\n";
			}
		}
		cout << "\n";
	}
	return 0;
}