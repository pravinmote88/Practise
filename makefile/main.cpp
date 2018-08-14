#include "mystring.h"
#include <string.h>
int main()
{
	char const * p = "Pravin";
	auto l =  strlen(p);
	MyString S1(p,7);
	std::cout << S1.length <<std::endl;

	return 0;

}
