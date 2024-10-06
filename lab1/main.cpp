#include <iostream>
#include <iomanip>

using namespace std;
// Переменная - именнованная ячейка памяти, которая хранит значение, тип элемента


int main()
{ 
	cout << "Type:              " << "Size: "<< " Min:                 " << "Max:"<< endl;
	cout << "bool               " << sizeof(bool) << "      " << "0" << "                    " << '1' << endl;
	cout << "char               " << sizeof(char) << "      " << SCHAR_MIN <<  "                 " << SCHAR_MAX << endl;
	cout << "unsigned char      " << sizeof(char) << "      " << "0" << "                    " << UCHAR_MAX << endl;
	cout << "short              " << sizeof(short) << "      " << SHRT_MIN <<  "               " << SHRT_MAX << endl;
	cout << "unsigned short     " << sizeof(short) << "      " << "0" << "                    " << USHRT_MAX << endl;
	cout << "int                " << sizeof(int) << "      " << INT_MIN <<  "          " << INT_MAX << endl;
	cout << "unsigned int       " << sizeof(int) << "      " << "0" << "                    " << UINT_MAX << endl;
	cout << "long long          " << sizeof(long long) << "      " << LLONG_MIN <<  " " << LLONG_MAX << endl;
	cout << "unsigned long long " << sizeof(long long) << "      " << "0" << "                    " << ULLONG_MAX << endl;
	cout << "float              " << sizeof(float) << "      " << FLT_MIN <<  "          " << FLT_MAX << endl;
	cout << "double             " << sizeof(double) << "      " << DBL_MIN << "         " << DBL_MAX << endl;

	return 0;
}