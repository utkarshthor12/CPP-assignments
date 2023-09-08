/* Q3 - Given two binary numbers, return the greatest of these numbers in decimal format. */

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, n1, n2, r1, r2;
    int result1 = 0, power1 = 1;
    int result2 = 0, power2 = 1;

    cout << "Enter the numbers in binary : ";
    cin >> num1 >> num2;

    n1 = num1;
    n2 = num2;

    while(n1>0) // for coverting num1 to decimal
    {
        r1 = n1 % 10;
        result1 += r1 * power1;
        power1 *= 2;
        n1 /= 10;
    }

    while(n2>0)  // for coverting num2 to decimal
    {
        r2 = n2 % 10;
        result2 += r2 * power2;
        power2 *= 2;
        n2 /= 10;
    }

    if(result1 > result2)
    {
        cout << result1 << " in binary -> " << num1 << " is greatest." << endl;
    }
    else{
        cout << result2 << " in binary -> " << num2 << " is greatest." << endl;
    }

    return 0;
}