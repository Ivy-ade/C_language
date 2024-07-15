#include<iostream>

int main6() {
    using namespace std;

    int data1 = 7;
    double data2 = 3.4;

    cout << "data1 = " << data1 << ", and its address = " << &data1 << endl;
    cout << "data2 = " << data2 << ", and its address = " << &data2 << endl;

    int home = 1;
    int* pHome;
    pHome = &home;

    cout << "Value: home = " << home << " *pHome = " << *pHome << endl;
    cout << "Address: &home = " << &home << " pHome = " << pHome << endl;

    int nights = 1001;
    int* pt = new int;
    *pt = 1001;
    double* pd = new double;
    *pd = 1001001.001;

    cout << "nights = " << nights << " : " << &nights << endl;
    cout << "pt = " << *pt << " : " << pt << endl;
    cout << "pd = " << *pd << " : " << pd << endl;
    cout << "the location of pd : " << &pd << endl;
    cout << "size of pt = " << sizeof(pt) << " size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << " size of *pd = " << sizeof(*pd) << endl;

    delete pt;
    delete pd;

    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] = " << p3[1] << endl;
    p3 += 1;
    cout << "NEW NEW p3[0] = " << p3[0] << endl << "NEW NEW p3[1] = " << p3[1] << endl;
    p3 -= 1;

    delete[]p3;

    double wages[3] = { 10000.0,20000.0,30000.0 };
    short stacks[3]{ 3,2,1 };
    
    double* pw = wages;
    short* ps = &stacks[1];

    cout << "pw = " << pw << " *pw = " << *pw << endl;
    pw += 1;
    cout << "ADD 1: pw = " << pw << " *pw = " << *pw << endl << endl;

    cout << "ps = " << ps << " *ps = " << *ps << endl;
    ps += 1;
    cout << "ADD 1: ps = " << ps << " *ps = " << *ps << endl << endl;

    cout << "access 2 elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << " stacks[1] = " << stacks[1] << endl;
    cout << "access 2 elements with pointer notation\n";
    cout << "*stacks = " << *stacks << " *(stacks+1) = " << *(stacks + 1) << endl << endl;

    cout << "size of wages array = " << sizeof(wages) << endl;
    cout << "size of pw pointer = " << sizeof(pw) << endl << endl;


    return 0;
}
