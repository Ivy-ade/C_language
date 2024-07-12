#include<iostream>

int main1() {
    using namespace std;

    int meat[3];
    meat[0] = 7;
    meat[1] = 8;
    meat[2] = 6;

    int meatcost[3] = { 20,30,5 };

    cout << "Total meat = " << meat[0] + meat[1] + meat[2] << endl;
    cout << "The package with " << meat[1] << " meat costs " << meatcost[1] << "cents per meat." << endl;


    int total = meat[0] * meatcost[0] + meat[1] * meatcost[1] + meat[2] * meatcost[2];
    
    cout << "The total meat expense is " << total << " cents.\n";

    cout << "Size of meat array = " << sizeof meat << " bytes.\n";
    cout << "Size of one element = " << sizeof meat[0] << " bytes.\n";


    return 0;
}
