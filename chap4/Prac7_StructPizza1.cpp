#include<iostream>

struct pizza {
    char company[20];
    float diameter;
    float weight;
};

int main77() {
    using namespace std;

    pizza pizza;
    cout << "Enter the company: ";
    cin.getline(pizza.company, 20);
    cout << "Enter the diameter: ";
    cin >> pizza.diameter;
    cout << "Enter the weight: ";
    cin >> pizza.weight;

    cout << "Company: " << pizza.company << ":  diameter = " << pizza.diameter << "; weight  = " << pizza.weight << endl;

    return 0;
}
