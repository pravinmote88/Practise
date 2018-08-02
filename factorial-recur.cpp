
//Program to print factorial of given number in recurssive way

#include <iostream>

using namespace std;

int factorial(int n);
int main()
{
	int n, fact =1;
	cout << "Enter a number : ";
	cin >> n;
	
	fact = factorial(n);
	
	cout << endl << "factorial is : "<< fact << endl;
	return 0;
}

int factorial(int n)
{
	if(n<2)
	  return 1;
	return n * factorial(n-1);
	
}
