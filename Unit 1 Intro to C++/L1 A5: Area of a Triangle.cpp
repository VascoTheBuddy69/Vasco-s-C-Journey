#include <iostream>
using namespace std;

int main()
{
    int base;
    cout<<"Enter base: ";
    cin>>base;

    int height;
    cout<<"Enter height: ";
    cin>> height;

    float area = 0.5 * base * height;

    cout<< "Area of triangle = "<< area <<" square units.";
    return 0;
}