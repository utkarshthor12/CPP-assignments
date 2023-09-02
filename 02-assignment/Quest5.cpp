/* Q5 - Write a program to calculate the sum of digits of a 3 digit number. */

#include<iostream>

using namespace std;

int main()
{
    int num, first, second, third, sum;

    cout << "Enter a valid three digit number :";
    cin >> num;

    first = num % 10;
    num /= 10;

    second = num % 10;
    num /= 10;

    third = num % 10;
    num /= 10;

    sum = first + second + third;

    cout << "The sum of digits is : " << sum;

    return 0;
}