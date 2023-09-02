/* Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%) */

#include<iostream>

using namespace std;

int main()
{
    float num1, num2;

    cout << "Enter two numbers :";
    cin >> num1 >> num2;

    cout << "SUM : " << num1 + num2 << endl;
    cout << "DIFFERENCE : " << num1 - num2 << endl;
    cout << "PRODUCT : " << num1 * num2 << endl;
    cout << "DIVISION : " << num1 / num2 << endl;

    return 0;
}