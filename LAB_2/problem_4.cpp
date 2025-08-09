#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique ELEMENTS: ";

    for (int i = 0; i < n; i++)
    {
        bool is_duplicate = false;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
