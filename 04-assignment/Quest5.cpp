/* 

Q5 - Write a program to print the cross pattern given below (in the shape of X):
*   *
 * *
  *
 * *
*   *

*/

#include<iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size(no. of rows and columns) in odd number only : ";
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if((i==j) || (i+j==size+1))
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        
        cout << endl;
    }

        return 0;
}