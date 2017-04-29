#include <iostream>
#include <string>
using namespace std;

long long int arr[5005];
long long int res;

string s;

int main()
{
	while (cin>>s && s != "0")
	{
		// memset didn't work properly, using loop instead
		for (int i = 0; i < 5005; i++) arr[i] = 1;

		// arr[i] = arr[i+1] + ifvalid(arr[i+2])
		for (int i = s.size() - 1; i >= 0; i--)
		{
			arr[i] = (s[i] == '0')? 0 : arr[i+1];
			if (i + 1 < s.size() && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')))
				arr[i] += arr[i + 2];
		}
		cout << arr[0] << endl;
	}
	return 0;
}
