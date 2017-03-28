#include <iostream>
#include <map>
#pragma warning(disable:4996)
using namespace std;
map<int, long long> M;
map<int, long long>::iterator it;
long long C(int x)
{
	it = M.find(x);
	if (it != M.end())
		return M[x];

	long long tmp = C(x / 2) + C(x / 3) + C(x / 4);
	if (tmp > x)
		M[x] = tmp;
	else
		M[x] = x;
	return M[x];
}

int main()
{
	M[0] = 0;
	M[1] = 1;
	int x;
	while (cin >> x)
	{
		long long res = C(x);
		cout << res << endl;
	}
	return 0;
}