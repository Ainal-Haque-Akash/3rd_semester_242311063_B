/* Search for an Element
Problem:
Check if a given number exists in the array. Return its index if found, else return -1. */
#include<iostream>
using namespace std;
int main()
{
    int n, target;
    cout<<"Enter array size: ";
    cin>>n;
    int mukta[n];

    cout<<"Enter "<<n<<" elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>mukta[i];
    }
    cout<<"Enter the number you want to search: ";
    cin>>target;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (mukta[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found (-1)" << endl;


    return 0;
}
