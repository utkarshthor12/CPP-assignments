// Q6 - Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>

using namespace std;

int main()
{
    int num1, num2, temp;

    cout<<"Enter First Number :";
    cin >> num1;
    cout<<"Enter Second Number :";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "The numbers are :" <<endl <<"Num1 :" << num1 <<" " <<"Num2 :"  <<num2;

    return 0;
}