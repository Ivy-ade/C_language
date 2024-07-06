#include<iostream>
int main3() {
	using namespace std;

	int D10 = 44;
	int D8 = 044;
	int D16 = 0x44;

	cout << "D10 = " << D10 << endl;
	cout << "D8 = " << D8 << endl;
	cout << "D16 = " << D16 << endl;

	int D = 42;
	cout << hex << "D = " << D << endl;
	cout << oct << "D = " << D << endl;
	cout << dec << "D = " << D << endl;


	return 0;
}