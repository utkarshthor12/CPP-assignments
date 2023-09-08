/*
Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.

Note: Don’t count the preceding zeros.
For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.

*/

#include<iostream>

using namespace std;

int main()
{
    int num, r, result = 0, power = 1;

    cout << "Enter the natural number : ";
    cin >> num;

    while(num>0)
    {
        r = num % 2;
        result += r * power;
        power *= 10;
        num /= 2;
    }

    // Count non-preceding zeros
    int count = 0;

    while (result > 0)
    {
        int lastDigit = result % 10;
        if (lastDigit == 0)
        {
            count++;
        }
        result /= 10;  // result becomes 0 in the case of just immediate preceding 0.
    }

    cout << "Number of non-preceding zeros: " << count << endl;

    return 0;
}