// Write a program to reverse an Array.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " elements: " << endl;

    for(int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    for(int i = 0; i < n / 2; ++i)
    {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }

    return 0;
}


