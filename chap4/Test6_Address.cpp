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

    return 0;
}
