/* Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format. */

#include<iostream>

using namespace std;

int main()
{
    int num, sum = 0, result = 0, r, power = 1;

    cout << "Enter the number upto which sum you want in binary : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }

    while(sum>0)
    {
        r = sum % 2;
        result += r * power;
        power *= 10;
        sum /= 2;
    }

    cout << "The binary form of sum of " << num << " decimal numbers is : " << result;

    return 0;
}