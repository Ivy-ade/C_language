#include<iostream>
#include<string>

int main44() {
    using namespace std;

    string firstName, lastName, fullName;

    cout << "Enter the first name: ";
    getline(cin, firstName);
    cout << "Enter the last name: ";
    getline(cin, lastName);
    fullName = lastName + ", " + firstName;
    cout << "Here's the information in a single string: " << fullName << endl;

    return 0;
}
