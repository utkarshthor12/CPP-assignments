/* Q1 - Write a program which takes the values of length and breadth from user and check if it is
a square or not. */

#include<iostream>

using namespace std;

int main()
{
    int len, bth;

    cout << "Enter Length :";
    cin >> len;

    cout << "Enter breadth :";
    cin >> bth;

    if(len==bth)
    {
        cout << "This is a Square.";
    }
    else{
        cout << "This is a Rectangle.";
    }

    return 0;
}