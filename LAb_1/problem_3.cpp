/* Write a Program to create a pyramid pattern using C/C++.
     *
    ***
   *****
  *******
 *********    */
 #include<iostream>
 using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows: :";
    cin>>rows;
    for(int i = 1; i <= rows; ++i)
    {
        for(int space = 1; space <= rows -i; ++space)
        {
            cout<<" ";
        }
        for(int stars = 1; stars <= (2*i -1); ++stars)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
