#include<iostream>

int main4() {
	using namespace std;

	char ch;

	cout << "enter a character: ";
	cin >> ch;
	cout << "ch: " << ch << endl;

	char cha = 'M';
	int i = cha;
	cout << "The ASCII code for " << cha << " is " << i << endl;

	cout << "add 1 to the character code: " << endl;
	cha += 1;
	i = cha;
	cout<< "The ASCII code for " << cha << " is " << i << endl;

	cout << "Displaying char cha us ing cout.put(cha):";
	cout.put(cha);
	cout.put('!');

	cout << endl << "DONE!" << endl;

	return 0;

}