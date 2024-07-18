#include<iostream>

int main66() {
	using namespace std;

	struct CandyBar {
		char brand[20];
		float weight;
		unsigned int calorie;
	};

	CandyBar snack[3] = {
		{
			"Mocha Munch",
			2.3,
			350
		},
		{
			"Hershey Bar",
			4.2,
			550
		},
		{
			"Musketeers",
			2.6,
			430
		}
	};

	cout << "My 1st CandyBar is " << snack[0].brand << ".\n";
	cout << "And its weight is " << snack[0].weight << ", calorie is " << snack[0].calorie << ".\n" << endl;

	cout << "My 2nd CandyBar is " << snack[1].brand << ".\n";
	cout << "And its weight is " << snack[1].weight << ", calorie is " << snack[1].calorie << ".\n" << endl;

	cout << "My 3rd CandyBar is " << snack[2].brand << ".\n";
	cout << "And its weight is " << snack[2].weight << ", calorie is " << snack[2].calorie << ".\n" << endl;

	return 0;
}
