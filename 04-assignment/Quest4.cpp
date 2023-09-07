/* Q4 - Write a program to reverse a given integer number. */

#include<iostream>

using namespace std;

int main()
{
    int num, temp, rev = 0;

    cout << "Enter the number which you want to be reversed :";
    cin >> num;

    while(num!=0)
    {
        temp = num % 10;
        rev = (rev * 10) + temp;
        num /= 10;
    }

    cout << "Reversed number is : " << rev;

    return 0;
}