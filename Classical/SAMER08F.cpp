#include <iostream>
#include <string>
#include <stack>
#pragma warning(disable:4996)
using namespace std;

int arr[101];
int main() {

	// your code here
	int size;
	for (int i = 1; i <= 100; i++)
	{
		arr[i] = arr[i - 1] + i*i;
	}
	int x;
	while (cin>>x && x != 0)
	{
		cout << arr[x] << endl;
	}
	return 0;
}