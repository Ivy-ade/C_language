#include<iostream>
#include<string>
#include<cstring>

int main4() {
    using namespace std;

    char charr1[20];
    char charr2[20] = "already";

    string str1;
    string str2 = "willbesoon";

    cout << "Enter something: ";
    cin >> charr1;
    cout << "Enter again: ";
    cin >> str1;
    cout << "result: " << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    cout << "The 3rd letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The 3rd letter in " << str2 << " is " << str2[2] << endl;

    cout << "------------" << endl;

    string s1 = "okfine";
    string s2, s3;
    cout << "Let s2 = s1: ";
    s2 = s1;
    cout << "s1: " << s1 << " s2: " << s2 << endl;
    cout << "Let s3 = s1 + s2: ";
    s3 = s1 + s2;
    cout << "s1: " << s1 << " s2: " << s2 << " s3: " << s3 << endl;
    cout << "Let s3 = s1 + s2: ";
    s3 += s2;
    cout << " s1: " << s1 << " s2: " << s2 << " s3: " << s3 << endl;


    cout << "------------" << endl;

    str1 = str2;
    strcat(charr1, charr2);

    str1 += " paste";
    strcat(charr1, " juice");

    int len1 = str1.size();
    int len2 = strlen(charr1);

    cout << "The string " << str1 << " contains " << len1 << " characters" << endl;
    cout << "The string " << charr1 << " contains " << len2 << " characters" << endl;

    cout << "------------" << endl;
    cin.ignore();

    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;

    return 0;
}