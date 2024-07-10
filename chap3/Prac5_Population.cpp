#include<iostream>

int main55() {
    using namespace std;

    long long world;
    long long china;
    double percent;

    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the China's population: ";
    cin >> china;
    
    percent = double(world) / double(china);

    cout << "The population of the China is " << percent << "% of the world population." << endl;


    return 0;
}
