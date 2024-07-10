#include<iostream>

int main44() {
	using namespace std;

	const int DaytoHour = 24;
	const int HourtoMinute = 60;
	const int MinutetoSecond = 60;

	long long secondInput;
	int days, hours, mintues, seconds;
	cout << "Enter the number of seconds: ";
	cin >> secondInput;

	days = secondInput / MinutetoSecond / HourtoMinute / DaytoHour;
	hours = secondInput / MinutetoSecond / HourtoMinute % DaytoHour;
	mintues = secondInput / MinutetoSecond % HourtoMinute;
	seconds = secondInput % MinutetoSecond;

	cout << secondInput << " seconds = " << days << " days, " << hours << " hours, " << mintues << " minutes, " << seconds << " seconds." << endl;

	return 0;
}