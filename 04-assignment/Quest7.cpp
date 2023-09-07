/*

Q7- Write a program to print + pattern given below :
  *
  *
*****
  *
  *

*/

#include<iostream>

using namespace std;

int main()
{
    
    int size;

    cout << "Enter the number of rows/columns (in odd number only) : ";
    cin >> size;

    for(int i = 1; i <= size; i++)
    {
    for(int j = 1; j <= size; j++)
    {
        if((i==(size/2) + 1) || (j==(size/2) + 1))
        {
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << "\n";
    }

        return 0;
}