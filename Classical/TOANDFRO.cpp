#include <iostream>
#include <string>

#pragma warning(disable:4996)
using namespace std;

char arr[20][20];
int main() {

	// your code here
	int size;
	while (cin>>size && size != 0)
	{
		string s;
		cin >> s;
		for (int i = 0; i < s.length()/size; i ++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[i][j] = s[i*size + j];
			}
		}
		for (int j = 0; j < size; j++)
		{
			for (int i = 0; i < s.length()/size; i++)
			{
				if (i % 2 == 0)
					cout << arr[i][j];
				else
					cout << arr[i][size-j-1];
			}
		}
		cout << endl;
	}
	return 0;
}