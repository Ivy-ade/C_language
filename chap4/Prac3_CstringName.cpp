#include<iostream>
#include<cstring>

int main33() {
    using namespace std;

    const int Size = 20;

    char firstName[Size], lastName[Size], fullName[Size * 2];

    cout << "Enter the first name: ";
    cin.getline(firstName, Size);
    cout << "Enter the last name: ";
    cin.getline(lastName, Size);
    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    cout << "Here's the information in a single string: " << fullName << endl;

        
    return 0;
}
