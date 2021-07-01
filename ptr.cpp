#include<iostream>
using namespace std;
 int main()
 {
     int a=10;
     int b=20;

     int *ptr_a;
     int *ptr_b;

     ptr_a = &a;
     ptr_b =  &b;

     cout << "ptr_a " << ptr_a << endl;
     cout << "ptr_b " << ptr_b << endl;


     return 0;
 }
