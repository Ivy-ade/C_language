#include<iostream>

void Cal(int a, int b) {
	std::cout << "a + b =" << a + b << std::endl;
	std::cout << "a - b =" << a - b << std::endl;
	std::cout << "a * b =" << a * b << std::endl;
	std::cout << "a / b =" << a / b << std::endl;
}

int main6() {
	using namespace std;

	int num1, num2;

	cout << "input num1:";
	cin >> num1;

	cout << "input num2:";
	cin >> num2;

	Cal(num1,num2);

	return 0;
}