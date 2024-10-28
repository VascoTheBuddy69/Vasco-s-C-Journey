#include <iostream>
using namespace std;

int main()
{
    string fullname;
    cout<<"Enter your full name: ";
    cin>>fullname;

    int YOB;
    int cur_year = 2024;
    cout<<"Enter your birthyear: ";
    cin>>YOB;

    int age = cur_year - YOB;

    cout<<fullname<<" is "<<age<<" years old.";

    return 0;
}