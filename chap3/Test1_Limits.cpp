#include<iostream>
#include<climits>

int main1() {
	using namespace std;

	int nInt = INT_MAX;
	short nShort = SHRT_MAX;
	long nLong = LONG_MAX;
	long long nLLong = LLONG_MAX;

	/* sizeof
	 * for type: with ()
	 * for variables : optional ()
	 * 
	 */
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof nShort << " bytes." << endl;
	cout << "long is " << sizeof nLong << " bytes." << endl;
	cout << "long long is " << sizeof  nLLong << " bytes." << endl;
	cout << endl;

	cout << "=====MAX=====" << endl;
	cout << "int: " << nInt << endl;
	cout << "short: " << nShort << endl;
	cout << "long: " << nLong << endl;
	cout << "long long: " << nLLong << endl;
	cout << endl;

	cout << "=====MIN=====" << endl;
	cout << "int: " << INT_MIN << endl;
	cout << "short: " << SHRT_MIN << endl;
	cout << "long: " << LONG_MIN << endl;
	cout << "long long: " << LLONG_MIN << endl;
	cout << endl;

	cout << "1B = " << CHAR_BIT << "b"<<endl << endl;

	//init 2 way
	int a(10);
	int b = 3;
	cout << "a = " << a << " b = " << b << endl << endl;




	return 0;
}