/* Find Second Largest Element
Problem:
Find the second largest element in the array. Assume at least two unique elements.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest, second_largest;
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    cout << "Second largest element is: " << second_largest << endl;



return 0;
}
