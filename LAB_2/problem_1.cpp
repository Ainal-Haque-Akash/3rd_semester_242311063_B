/* Count Even and Odd Numbers
Problem:
Traverse the array and count how many even and odd numbers are present.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array SIZE: ";
    cin>> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    int even_count=0, odd_count=0;
    for( int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    cout<<"EVEN NUMBERS: "<<even_count<<endl;
    cout<<"ODD NUMBERS: "<<odd_count<<endl;

    return 0;
}
