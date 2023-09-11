/* Q5 - Given two numbers a and b, write a program to print all the prime numbers present between
a and b. */

void printPrimes(int n1, int n2);

#include<iostream>

using namespace std;

int main()
{
    int r1, r2;

    cout << "Enter the range of numbers : ";
    cin >> r1 >> r2;

    printPrimes(r1, r2);

    return 0;
}


void printPrimes(int n1, int n2)
{
    

    for (int i = n1; i <= n2; i++)
    {
        int count = 0;
        
        for (int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                count += 1;
            }
        }

        if(count == 0)
        {
            cout << i << " ";
        }
    }
}