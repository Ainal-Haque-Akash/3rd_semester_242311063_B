// Write a C/C++ program that find the largest number among the three numbers.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array size: ";
    cin>> n;
    int arr[n];

    cout<<"Enter "<<n<<" numbers: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout <<"The largest number is"<<largest<<endl;
    return 0;
}
