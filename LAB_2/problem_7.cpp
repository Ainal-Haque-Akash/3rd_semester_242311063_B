/* Count Frequency of Each Element
Problem:
Count the number of times each element appears in the array. Output as a dictionary/map. */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool visited[n] = {false};

    cout << "Element frequencies:\n";

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << "-----" << count << "\n";
    }

    return 0;
}

