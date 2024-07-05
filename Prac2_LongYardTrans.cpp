//trans: input distance and trans it into yard
//1 long= 220yard
#include<iostream>

int main22() {
	using namespace std;

	double distance;

	cout << "input distance: ";
	cin >> distance;
	cout << endl;

	cout << distance << " long distance = " << 220 * distance << " yard" << endl;

	return 0;
}