#include<iostream>

int main11() {
    using namespace std;

    char firstName[20], lastName[20];
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(firstName, 20);
    cout << "What is your last name?";
    cin.getline(lastName, 20);
    cout << "What letter grade do you deserve?";
    cin >> grade;
    cout << "What is your age?";
    cin >> age;

    cout << "Name: " << lastName << "." << firstName << endl;
    cout << "Grade: " << char(grade + 1) << endl;
    cout << "Age: " << age << endl;


    return 0;
}
