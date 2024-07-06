#include<iostream>
#include<climits>

#define ZERO 0

int main2() {
	using namespace std;

	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited;" << endl;
	cout << "add $1 to each account" << endl;
	sam += 1;
	sue += 1;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited; \nPoor sam!!!\n" << endl;


	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited;" << endl;
	cout << "take $1 from each account" << endl;
	sam -= 1;
	sue -= 1;
	cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited; \nLucky sue!!!" << endl;

	return 0;
}