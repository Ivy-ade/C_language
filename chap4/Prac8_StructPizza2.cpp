#include<iostream>

struct Pizza {
    char company[20];
    float diameter;
    float weight;
};

int main88() {
    using namespace std;

    Pizza* pizza = new Pizza;
    
    cout << "Enter the company: ";
    cin.getline(pizza->company, 40);
    cout << "Enter the diameter: ";
    cin >> pizza->diameter;
    cout << "Enter the weight: ";
    cin >> pizza->weight;

    cout << "Company: " << pizza->company << ":  diameter = " << pizza->diameter << "; weight  = " << pizza->weight << endl;


    delete pizza;

    return 0;
}
