/* Q3 - Write a program to find the sum of n natural numbers. */

#include<iostream>

using namespace std;

int main()
{
    int num, sum = 0;

    cout << "Enter the number upto which you want sum :";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    cout << "The sum of " << num << " Natural numbers is : " << sum;

    return 0;
}