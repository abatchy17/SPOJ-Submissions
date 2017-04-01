#include <iostream>
#include <string>
using namespace std;

string s;

bool isAll9(string s)
{
	bool res = true;
	for (int i = 0; i <s.size(); i++)
		res = res && (s[i] == '9');

	if (res)
		cout << 1 << string(s.size() - 1, '0') << 1 << endl;
	return res;
}

int main()
{
	int size;
	cin >> size;
	while (size--)
	{
		cin >> s;

		// Handle numbers containing 9s only
		if (isAll9(s))
			continue;
		
		bool incMid = true;
		bool isOdd = s.size() % 2;
		int midIndex = s.size() / 2 - !isOdd;

		// Check if left hand side is bigger than right hand side, if yes, we can replace the RHS by LHS reversed
		for (int i = midIndex; i >= 0; i--)
		{
			if (s[i] > s[s.size() - i - 1])
			{
				incMid = false;
				break;
			}
			else if (s[i] < s[s.size() - i - 1])
				break;
		}

		// If incMid, increment middle number (if odd) or middle numbers (if even) and make sure carry is handled properly
		if (incMid)
		{
			for (int i = midIndex; i >= 0; i--)
			{
				if (s[i] == '9')
					s[i] = '0';
				else
				{
					s[i]++;
					break;
				}
			}
		}

		// Adjust mid index and copy LHS to RHS reversed
		if (isOdd)
			midIndex--;
		for (int i = midIndex; i >= 0; i--)
			s[s.size() - i - 1] = s[i];

		cout << s << endl;
	}
	return 0;
}