#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	unsigned long long c;
	cin>>c;
	while(c != 0 && c % 2 == 0)
		c = c / 2;
	if(c <= 2)
		cout << "TAK";
	else
		cout<<"NIE";
}