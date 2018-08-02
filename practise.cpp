#include <iostream>

using namespace std;

class Base
{
	public:

	void Display()
	{
	}
};

class Derived : public Base
{
	
};

int main()
{
	Derived d = Derived();
	d.Display();
}
