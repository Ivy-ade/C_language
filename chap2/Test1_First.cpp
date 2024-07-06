//C++ really cares about upper case and lower case
//dont never ever lose the terminator;
#include <iostream>//yes ofc io=input & output
int main1(void) {

	//using namespace std; lazying way, all name will available
	using std::cout; //a using directive
	using std::endl;
	using std::cin;
	
	//endl, means new a line 
	cout << "now just a simple test about showing messages!" << endl;
	cout << endl;

	cout << "you won't regret it!\n" << endl << endl;

	
	cin.get();// or system("pause"); but if type this maybe it will show: press any key to continue

	return 0; //this sentence doesn't need actually,cuz here it is main function, so if we don't add it, then the compiler will add it automatic;; btw the name of it is return function

}

//the result:
/*
now just a simple test about showing messages!

you won't regret it!

*/