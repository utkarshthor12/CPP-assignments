//Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers :";
    cin >> num1 >> num2;

    cout << (num1 == num2) ? 1 : 0;

    return 0;
}