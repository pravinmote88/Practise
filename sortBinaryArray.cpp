#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	cout << "Enter 5 binary elemet " << endl;
	int arr[5] = {1,1,0,1,0};
	//gets(arr);
	
	int len = sizeof(arr)/sizeof(arr[0]);
	//int len =5;
	int j =-1;
	for(int i =0; i <len; ++i)
	{
		if(arr[i] == 0)
		{
			j++;
			swap(arr[i], arr[j]);
		}
	}

	for(int i=0; i<len; ++i)
	{
		cout<<arr[i] ;
	}
	return 0;
}
