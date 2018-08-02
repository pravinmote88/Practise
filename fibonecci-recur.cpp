#include <iostream>

using namespace std;

int fib(int n)
{
	if(n<2)
          return n;
	return (fib(n-1) + fib(n-2));
}

int main()
{
	int a =5, i=0;
	while(i<a)
	{
		cout << fib(i);
		i++;
	}	
	
	return 0;	
}


