/* Q10- Write a C++ program to print a rectangle out of * */

#include<iostream>

using namespace std;

int main()
{
    int rows, columns;

    cout << "Enter the no. of rows and columns : ";
    cin >> rows >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
    {
        cout << "*";
    }

    cout << endl;
    }

        return 0;
}