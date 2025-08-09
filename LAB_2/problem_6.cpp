/* Running Sum
Problem:
Create a new array where each element at index i is the sum of elements from 0 to i in the
original array. */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n], runningSum[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    runningSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        runningSum[i] = runningSum[i - 1] + arr[i];
    }
    cout << "Running sum array: ";
    for (int i = 0; i < n; i++)
    {
        cout << runningSum[i] << " ";
    }
    cout << endl;

    return 0;
}
