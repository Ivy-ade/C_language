#include<iostream>
#include<cmath>
int main5() {
	using namespace std;

	int value = rand();//just dont be sad, here will be the same number all the time, but we will learn it later so yea just think about it for a min we will have the details later

	int guess;

	while (true){

		cout << "please input the value u guess: ";
		cin >> guess;


		if (guess > value) {
			cout << "this number is too big!";
		}
		else if (guess < value) {
			cout << "this number is too small!";
		}
		else {
			cout << "yes you are right! the value is " << value;
			break;
		}
		cout << endl;
	}

	return 0;
}