#include<iostream>

//F=1.8*C=32.0

int main55() {
	using namespace std;

	double Celsius;

	cout << "Please enter a Celsius value:";
	cin >> Celsius;
	cout << endl;

	cout << Celsius << " degrees Celsius is " << 1.8 * Celsius + 32.0 << "degrees Fahrenheit" << endl;

	return 0;
}