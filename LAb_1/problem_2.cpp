// Write a Program in C/C++ to Swap the values of two variables without using any extra variable.
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the the two values: ";
    cin>>a >>b;
    cout<<"Before the swap the values of a and b are: "<<a<<" "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After the swap the values of a and b are: "<<a<<" "<<b;
    return 0;
}

