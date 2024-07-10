#include<iostream>

int main66() {
    using namespace std;

    float mile, km, consume, gallon, L;

    
    //us
    cout << "(US)Enter the distance of mile:";
    cin >> mile;
    cout << "Enter the fuel consume of gallon:";
    cin >> gallon;

    consume = mile / gallon;

    cout << "The consume = " << consume << " (miles/gallon)." << endl;
    
    //eu
    cout << "(EU)Enter the distance of km:";
    cin >> km;
    cout << "Enter the fuel consume of L:";
    cin >> L;
    
    consume = L / km;

    cout << "The consume = " << consume << " (L/km)." << endl;

    return 0;
}
