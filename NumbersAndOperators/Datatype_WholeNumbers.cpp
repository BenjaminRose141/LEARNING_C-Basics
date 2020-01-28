#include <iostream>
#include <climits>

using namespace std;

int main()
{
	cout << "char: " << sizeof(char) << " Byte, ";
	cout << "from " << CHAR_MIN << " to " << CHAR_MAX << endl;
	
	cout << "unsigned char: " << sizeof(unsigned char) << " Byte, ";
	cout << "from 0 to " << UCHAR_MAX << endl;
	
	cout << "short: " << sizeof(short) << " Byte, ";
	cout << "from " << SHRT_MIN << " to " << SHRT_MAX << endl;
	
	cout << "unsigned short: " << sizeof(unsigned short) << " Byte, ";
	cout << "from 0 to " << USHRT_MAX << endl;
	
	cout << "int: " << sizeof(int) << " Byte, ";
	cout << "from " << INT_MIN << " to " << INT_MAX << endl;
	
	cout << "unsigned int: " << sizeof(unsigned int) << " Byte, ";
	cout << "from 0 to " << UINT_MAX << endl;
	
	cout << "long: " << sizeof(long) << " Byte, ";
	cout << "from " << LONG_MIN << " to " << LONG_MAX << endl;
	
	cout << "unsignedlong: " << sizeof(unsigned long) << " Byte, ";
	cout << "from 0 to " << ULONG_MAX << endl;
}
