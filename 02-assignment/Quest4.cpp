/* Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number. */


#include<iostream>

using namespace std;

int main()
{
    int num, first, second, third, fourth, fifth, sum;

    cout << "Enter a valid five digit number :";
    cin >> num;

    fifth = num % 10;
    num /= 10;

    fourth = num % 10;
    num /= 10;

    third = num % 10;
    num /= 10;

    second = num % 10;
    num /= 10;

    first = num % 10;
    num /= 10;

    sum = first + fourth;

    cout << "Sum of first and second last digit of the number is : " << sum << endl;

    return 0;
}