#include "mystring.h"
#include <string.h>

MyString::MyString()
{
	length= 0;
	str = nullptr;
}


MyString::MyString(char const * chars, int len)
{
	str = new char(len);
	length = len;
	strcpy(str, chars);
	str[len] = '\0';
}

MyString::MyString( const MyString& other)
{
	this->length = other.length;

	delete this->str;

	str = new char(this->length);

	strcpy(this->str, other.str);

}

