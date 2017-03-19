#include <iostream>
#include <algorithm>

#pragma warning(disable:4996)
using namespace std;

int men[1005];
int women[1005];
int main() {

	// your code here
	int size;
	scanf("%d", &size);
	while (size--)
	{
		int count;
		int total = 0;
		int tmp;
		scanf("%d", &count);
		for (int i = 0; i < count; i++)
			scanf("%d", &men[i]);
		for (int i = 0; i < count; i++)
			scanf("%d", &women[i]);
		sort(men, men + count);
		sort(women, women + count);
		for (int i = 0; i < count; i++)
			total += men[i] * women[i];
		cout << total << endl;
	}
	return 0;
}