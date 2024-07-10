#include<iostream>

int main22() {
	using namespace std;

	const float IntoP = 2.2f;
	const int IntoInch = 12;
	const float IntoMeter = 0.0254f;

	int inch, foot;
	float pound, height, weight, BMI;


	cout << "Enter the inch: ";
	cin >> inch;
	cout << "Enter the foot: ";
	cin >> foot;
	cout << "Enter the weight(in pounds): ";
	cin >> pound;

	height = (IntoInch * foot + inch)/IntoMeter;
	weight = pound / IntoP;
	BMI = weight / (height * height);

	cout << "Your BMI is " << fixed << BMI << endl;

	return 0;
}