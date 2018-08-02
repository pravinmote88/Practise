#include <iostream>

using namespace std;

int main()
{
	int a;
	cout<<"enter a number :";
	cin>>a;
	cout<<endl;
	int next, first=0, second=1;
//	cout<<first<<" ";

	for(int i=0; i<a; ++i)
	{
		cout<<first<<" ";
		next = second + first;
		first = second;
		second = next;
	}
	out<<endl;
}
