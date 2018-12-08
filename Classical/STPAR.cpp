#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int n;
	while(cin>>n && n)
	{
		vector<int> S(n);
		for(int i = 0; i < n; i++)
			cin>>S[i];

		stack<int> Stack;
		int curr = 1;
		int index = 0;
		bool res = true;

		while(index < n && curr < n)
		{
			if (Stack.empty() == false && Stack.top() == curr)
			{
				Stack.pop();
				curr++;
			}

			else if(S[index] == curr)
			{
				index++;
				curr++;
			}
			else if (S[index] > curr)
			{
				Stack.push(S[index]);
				index++;
			}
			else
			{
				if(Stack.top() != curr)
				{
					res = false;
					break;
				}
				else
				{
					Stack.pop();
					curr++;
				}
			}
		}

		if(res)
		{
			while(Stack.empty() == false && Stack.top() == curr)
			{
				Stack.pop();
				curr++;
			}
		}

		if(Stack.empty())
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}