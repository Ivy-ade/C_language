#include<iostream>

struct good{
    char name[20];
    int shortage;
    float price;
};
int main5() {
    using namespace std;

    good can{
        "apple can",
        200,
        4.5
    };
    good juice{
        "apple juice",
        194,
        2.99
    };

    cout << "The good list: " << can.name << "; " << juice.name << endl;
    cout << "The price of " << can.name << " is " << can.price << ", and the price of " << juice.name << " is " << juice.price << endl;
    cout << "Total = " << can.shortage + juice.shortage << endl;

    return 0;
}
