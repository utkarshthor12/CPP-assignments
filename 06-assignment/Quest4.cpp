/* Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers
between them. */

void printOdds(int n1, int n2);

#include<iostream>

using namespace std;

int main()
{
    int r1, r2;

    cout << "Enter the range of numbers : ";
    cin >> r1 >> r2;

    printOdds(r1, r2);

    return 0;
}

void printOdds(int n1, int n2)
{
    for (int i = n1; i <= n2; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }

        cout << i << " ";
    }
}