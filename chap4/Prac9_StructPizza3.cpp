#include<iostream>

struct Pizza {
    char company[20];
    float weight;
    unsigned int calorie;
};

int main99() {
    using namespace std;

    Pizza* pizza = new Pizza[3];

    strcpy(pizza[0].company, "Mocha Munch");
    pizza[0].weight = 2.3;
    pizza[0].calorie = 350;

    strcpy(pizza[1].company, "Hershey Bar");
    (pizza + 1)->weight = 4.2;
    pizza[1].calorie = 550;

    strcpy(pizza[2].company, "Musketeers");
    pizza[2].weight = 2.6;
    pizza[2].calorie = 430;

    cout << "My 1st CandyBar is " << pizza->company << ".\n";
    cout << "And its weight is " << pizza->weight << ", calorie is " << pizza->calorie << ".\n" << endl;

    cout << "My 2nd CandyBar is " << (pizza + 1)->company << ".\n";
    cout << "And its weight is " << (pizza + 1)->weight << ", calorie is " << (pizza + 1)->calorie << ".\n" << endl;

    cout << "My 3rd CandyBar is " << (pizza + 2)->company << ".\n";
    cout << "And its weight is " << (pizza + 2)->weight << ", calorie is " << (pizza + 2)->calorie << ".\n" << endl;

    delete[]pizza; 

    return 0;
}
