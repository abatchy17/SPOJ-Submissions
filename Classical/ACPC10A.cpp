#include <iostream>
#include <string>
#include <stack>
#pragma warning(disable:4996)
using namespace std;

int arr[101];
int main() {

	// your code here
	int a, b, c;
	while (cin >> a >> b >> c && a | b | c != 0)
	{
		if (b - a == c - b)
		{
			cout << "AP " << c * 2 - b << endl;
		}
		else
		{
			cout << "GP " << c*c / b << endl;
		}
	}
	return 0;
}