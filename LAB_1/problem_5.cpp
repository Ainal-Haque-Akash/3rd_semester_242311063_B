// Write a program in Cpp to find the sum of all elements of the array.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements separated by spaces: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
