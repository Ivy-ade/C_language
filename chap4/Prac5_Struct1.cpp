#include<iostream>

int main55() {
    using namespace std;

	struct CandyBar {
		char brand[20];
		float weight;
		unsigned int calorie;
	}snack;
	
	snack = {
		"Mocha Munch",
		2.3,
		350
	};

	cout << "My favourite CandyBar is " << snack.brand << ".\n";
	cout << "And its weight is " << snack.weight << ", calorie is " << snack.calorie << ".\n" << endl;


    return 0;
}
