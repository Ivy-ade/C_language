#include<iostream>

int main3() {
    using namespace std;

    //this one is not that good, just for test
    cout << "1-------------------" << endl;
    
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin >> name;
    cout << "Enter your favorite dessert: \n";
    cin >> dessert;
    cout << "Hi " << name << ", I have some delicious " << dessert << " for you.\n";

    
    cin.ignore();  // clear buffer

    //change a little bit, using line input, getline(name,size)
    cout << "2-------------------" << endl;
    cout << "Enter your name: \n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite dessert: \n";
    cin.getline(dessert, ArSize);
    cout << "Hi " << name << ", I have some delicious " << dessert << " for you.\n";

    cin.ignore();  // clear buffer

    //using get()
    cout << "3-------------------" << endl;
    cout << "Enter your name: \n";
    cin.get(name, ArSize).get();
    cout << "Enter your favorite dessert: \n";
    cin.get(dessert, ArSize).get();
    cout << "Hi " << name << ", I have some delicious " << dessert << " for you.\n";


    return 0;
}
