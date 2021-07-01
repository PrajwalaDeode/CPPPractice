#include<iostream>
using namespace std;

typedef void (*func_ptr)(int,int);

void add(int x, int y)
{
    cout << x+y << endl;
}

void sub(int x, int y)
{
    cout << x-y << endl;
}

int main()
{
    func_ptr fptr;

    fptr = &add;
    fptr(10,20);

    fptr = &sub;
    fptr(20,10);

    return 0;
}
