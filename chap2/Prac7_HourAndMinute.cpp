#include<iostream>
using namespace std;

void time(int, int);

int main77() {
	int hour;
	int minute;

	cout << "enter hour:";
	cin >> hour;

	cout << "enter minute:";
	cin >> minute;

	time(hour, minute);

	return 0;
}

void time(int a, int b) {
	cout << "Time: " << a << ":" << b;
}