#include <iostream>

class MyString
{
	public:
        char *str;
        int length;
	
	MyString();
	~MyString()
	{
		delete str;
		length =0;
	}	
	MyString(char const *chars, int len);
	MyString( const MyString& other);
};       

