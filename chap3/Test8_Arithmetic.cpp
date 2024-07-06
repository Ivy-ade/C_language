#include<iostream>

int main8() {

	using namespace std;

	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number:";
	cin >> hats;
	cout << "Enter another number:";
	cin >> heads;

	cout << "hats = " << hats << "\t";
	cout << "heads = " << heads;

	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;

	const int StonePer = 14;
	int lbs;

	cout << "Enter the weight in pounds: ";
	cin >> lbs;
	int stone = lbs / StonePer;
	int pounds = lbs % StonePer;
	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s)." << endl;
	return 0;

}