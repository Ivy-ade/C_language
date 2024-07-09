//1 foot = 0.0254m
//1 inch = 0.3048m = 12foot

#include<iostream>

int main() {
	using namespace std;

	const int IntoInch = 12;

	int height;

	cout << "Enter the height_";
	cin >> height;
	cout << "Your height is: " << height / IntoInch << " foot and " << height % IntoInch << " inch" << endl;
	
	return 0;
}