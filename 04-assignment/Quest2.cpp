/* Q2 - Write a program to print all Armstrong numbers between 100 to 500. */

#include<iostream>

using namespace std;

int main()
{
    int str, end, r, q;

    cout << "Enter the range of numbers to be checked for armstrong :";
    cin >> str >> end;

    for (int i = str; i <= end; i++)
    {
        int sum = 0;
        q = i;
        while(q!=0)
        {
            r = q % 10;
            sum = sum + (r * r * r);
            q = q / 10;
        }

        if(sum==i)
        {
            cout << i << endl;
        }
    }

        return 0;
}