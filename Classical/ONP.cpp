#include <iostream>
#include <string>
#include <stack>
#pragma warning(disable:4996)
using namespace std;
stack<char> S;

void print(string exp)
{
	for (int i = 0; i < exp.size(); i++)
	{
		if (exp[i] == '(')
			S.push('(');
		else if (exp[i] == ')')
		{
			while (true)
			{
				char x = S.top();
				S.pop();
				if (x == '(')
					break;
				cout << x;
			}
		}
		else if (isalpha(exp[i]))
		{
			cout << exp[i];
		}
		else if (exp[i] == '^')
		{
			if (!S.empty())
			{
				char x = S.top();
				if (x == '^')
				{
					S.pop();
					cout << x;
				}
			}
			S.push(exp[i]);
		}
		else if (exp[i] == '*' || exp[i] == '/')
		{
			if (!S.empty())
			{
				char x = S.top();
				if (x == '*' || x == '/')
				{
					S.pop();
					cout << x;
				}
			}
			S.push(exp[i]);
		}
		else if (exp[i] == '+' || exp[i] == '-')
		{
			if (!S.empty())
			{
				char x = S.top();
				if (x == '+' || x == '-')
				{
					S.pop();
					cout << x;
				}
			}
			S.push(exp[i]);
		}
	}
}

int main() {

	// your code here
	int size;
	cin >> size;
	while (size--)
	{
		string exp;
		cin >> exp;
		print(exp);
		while (!S.empty())
		{
			char x = S.top();
			S.pop();
			cout << x;
		}
		cout << endl;
	}
	return 0;
}