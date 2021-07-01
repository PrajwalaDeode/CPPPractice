#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c[10] = {1,2,3,4,5,6,7,8,9,10};

    int* ptr_a;
    int* ptr_b;
    int* ptr_c;
    int* ptr_d;

    ptr_a =&a;
    ptr_b = &b;
    ptr_c = &c[0];
    ptr_d = &c[1];

    cout << ptr_a << endl;
    cout << ptr_b << endl;
    cout << ptr_c << endl;
    cout << ptr_d << endl;



    return 0;




}
