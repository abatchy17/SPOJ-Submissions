#include <iostream>
using namespace std;
int arr2[]={ 2,4,8,6 };
int arr3[]={ 3,9,7,1 };
int arr4[]={ 4,6 };
int arr7[]={ 7,9,3,1 };
int arr8[]={ 8,4,2,6 };
int arr9[]={ 9,1 };
int main(){
	int size,a,b;
	cin>>size;
	while (size--)
	{
		cin>>a>>b;
		if (b==0)
		{
			if(a==0)
				cout<<a<<endl;
			else
				cout<<1<<endl;
			continue;
		}
		a %= 10;
		b--;
		if (a==0 || a==1 || a==5 || a==6)
			cout<<a;
		else if (a==2)
			cout<<arr2[b % 4];
		else if (a==3)
			cout<<arr3[b % 4];
		else if (a==4)
			cout<<arr4[b % 2];
		else if (a==7)
			cout<<arr7[b % 4];
		else if (a==8)
			cout<<arr8[b % 4];
		else if (a==9)
			cout<<arr9[b % 2];
		cout<<endl;
	}
}