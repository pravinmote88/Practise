// Program to reverse a string in optimized way

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cout<<"Enter a string : ";
	cin >>s;
	int len;

	for(int i=0; s[i] != '\0'; ++i)
	{
		len++;
	}
	//cout << len << endl;
	char a;
	for(int i=0, j=len-1; i<=(len-1)/2; i++, j--)
	{
		char a = s[i];
		s[i] = s[j];
		s[j] = a;
	}
	cout << endl << s << endl;

	return 0;
}
