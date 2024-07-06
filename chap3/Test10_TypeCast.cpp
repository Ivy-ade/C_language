#include<iostream>

int main() {
	using namespace std;

	int auks, bats, coots;

	auks = 19.99 + 11.99;//both into double then into int

	bats = (int)19.99 + (int)11.99;//in c
	coots = int(19.99) + int(11.99);//in c++
	cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is " << int(ch) << endl;
	cout << "Yes,   the code is " << static_cast<int>(ch) << endl;

	return 0;

}