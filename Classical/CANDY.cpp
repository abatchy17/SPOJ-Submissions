#include <iostream>
#include <string>
#include <stack>
#pragma warning(disable:4996)
using namespace std;

int arr[10005];
int main() {

	// your code here
	int size;
	
	while (cin >> size && size != -1)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		if (sum%size == 0)
		{
			int diff = 0;
			for (int i = 0; i < size; i++)
			{
				if (arr[i] > sum / size)
				{
					diff += arr[i] - sum / size;
				}
			}
			cout << diff << endl;
		}
		else
			cout << "-1" << endl;
	}
	return 0;
}