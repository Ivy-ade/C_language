#include<iostream>

int main77() {
    using namespace std;

    const float HKMtoMiles = 62.14f;
    const float GallontoL = 3.875;
    
    float usConsume, euConsume;
    
    cout << "Enter the fuel consume in EU(1L/100km): ";
    cin >> euConsume;
    
    usConsume = HKMtoMiles / (euConsume / GallontoL);

    cout << "The EU consume = " << euConsume << " (L/km)." << endl;
    cout << "The US consume = " << usConsume << " (miles/gallon)." << endl;

    return 0;
}
