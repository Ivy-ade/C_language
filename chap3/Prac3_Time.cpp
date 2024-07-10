#include<iostream>

int main33() {
	using namespace std;

	const int DegreeIntoMinute = 60;
	const int MinuteIntoSecond = 60;

	int degree, minute, second;
	float degreeResult;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Second, enter the minutes of arc: ";
	cin >> minute;
	cout << "Finally, enter the seconds of arc: ";
	cin >> second;
	
	degreeResult = degree + float(minute) / DegreeIntoMinute + float(second) / MinuteIntoSecond / DegreeIntoMinute;

	cout << degree << " degrees, " << minute << " minutes, " << second << "seconds = " << degreeResult << " degrees." << endl;

	return 0;
}