#include <iostream>

class Base
{
  public:
  virtual void foo() {std::cout << "Base foo";}
};

class Derived : public Base
{
  int x;
  public:
  void foo(){Base::foo();}
};

int main()
{
	/*Base* b = new Derived;
	b->foo();
	
	int i = 10;
	int *const ptr = &i;
	
	int *const & const p = ptr;	

	/*const int size = 10;
	int *ptr = const_cast<int*>(&size);
	int *p = 5;
	std::cout << size;*/
	
	int a =10;
	int *p = &a;
	delete p;	

	return 0;
}
