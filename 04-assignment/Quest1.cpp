/* Q1 - Write a program to calculate the factorial of a number. */

#include<iostream>

using namespace std;

int main()
{
    int num, fact = 1;

    cout << "Enter the number :";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "The factorial of " << num << " is equal to : " << fact;

    return 0;
}