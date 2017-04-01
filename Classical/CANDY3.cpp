#include <iostream>
#include <algorithm>
using namespace std;

long long unsigned Size, Count, sum, tmp;

int main()
{
	cin >> Size;
	while (Size--)
	{
		sum = 0;
		cin >> Count;
		for (long long unsigned i = 0; i < Count; i++)
		{
			cin >> tmp;
			tmp %= Count;
			sum += tmp;
			sum %= Count;
		}
		if (sum%Count)
			cout << "NO\n";
		else
			cout << "YES\n";
	}
	return 0;
}