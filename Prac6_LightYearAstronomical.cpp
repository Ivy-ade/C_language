#include<iostream>
using namespace std;
//1 light year = 63240 astronomical units
double astronomical(double);

int main66() {
	double year;

	cout << "Enter the number of light years: ";
	cin >> year;
	cout << year << " light years = " << astronomical(year) << " astronomical units";

	return 0;
}



double astronomical(double light){
	int astro = 63240 * light;
	return astro;
}