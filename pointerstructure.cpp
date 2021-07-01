#include<iostream>
#include<string>

using namespace std;

struct student
{
    char* name;
    int roll_no;
    float marks;
};

int main()
{
    student one;
    student* ptr;

    char name[25] = "Prajwala";
    one.name = name;
    one.roll_no = 10;
    one.marks = 56.78;

    ptr = &one;

    cout << "Name = " << ptr->name << endl;
    cout << "Roll no. = " << ptr->roll_no<< endl;
    cout << "Marks = " << ptr->marks << endl;

    return 0;
}



