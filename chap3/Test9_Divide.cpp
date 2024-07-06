#include<iostream>

int main9() {
	using namespace std;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Float-point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: le7/9.0 = " << 1.e7 / 9.0 << endl;
	cout << "float constants: le7f/9.0f = " << 1.e7f / 9.0f   << endl;

	float tree = 3;
	int guess(333.9831);
	int debt = 7.2e12;
	
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	return 0;

}