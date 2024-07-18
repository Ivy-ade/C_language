#include<iostream>
#include<array>

int main10() {
    using namespace std;

    array<float, 3> record_list;

    float average;
    cout << "Please input 3 record of 40 miles.\n";
    cout << "1: ";
    cin >> record_list[0];
    cout << "2: ";
    cin >> record_list[1];
    cout << "3: ";
    cin >> record_list[2];

    cout << "1." << record_list[0] << "\n2." << record_list[1] << "\n3." << record_list[2] << endl;
    
    average = (record_list[0] + record_list[1] + record_list[2]) / 3;
    cout << "Average = " << average << endl;


    return 0;
}
