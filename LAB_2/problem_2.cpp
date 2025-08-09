/* Reverse the Array
Problem:
Reverse the elements of the array in-place. */
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";45
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int LB = 0, UB = n - 1;
    while (LB < UB)
    {
        int temp = arr[LB];
        arr[LB] = arr[UB];
        arr[UB] = temp;

        LB++;

        UB--;
    }

    cout << "REVERSED ARRAY: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

