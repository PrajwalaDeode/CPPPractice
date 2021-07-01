
#include<iostream>

using namespace std;

int main()
{
    int *ptr;
    int a=10;
    ptr = &a;

    cout << "value of pointer" << *ptr <<endl;
    *ptr = *ptr+a;
    cout << "revised value of a"<< a<< endl;
    return 0;

}
