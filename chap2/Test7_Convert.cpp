// 1 stone = 14pounds

#include<iostream>

int trans(int);

int main7() {
	using namespace std;

	int s;//stone
	int p;//pounds
	cout << "stone: ";
	cin >> s;
	
	p = trans(s);

	cout << "pounds: " << p << endl;

	return 0;
}


int trans(int stone) {
	return 14 * stone;
}