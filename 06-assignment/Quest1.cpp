/* Q1 - Write a function to print squares of the first 5 natural numbers. */

void printSquare(int n);

#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter the number upto which squares you want to be calculated : ";
    cin >> num;

    printSquare(num);

    return 0;
}

void printSquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "Square of " << i << " is : " << i * i << endl;
    }
}