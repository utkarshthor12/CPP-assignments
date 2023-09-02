/* Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division. */

#include<iostream>

using namespace std;

int main()
{
    char oper;
    float num1, num2;

    cout << "Enter two Numbers :" << endl;
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;

    switch (oper)
    {
    case '+':
        cout << "Sum is : " << num1 + num2;
        break;

    case '-':

        cout << "Difference is : " << num1 - num2;
        break;

    case '*':
        cout << "Product is : " << num1 * num2;
        break;

    case '/':
        cout << "Division is : " << num1 / num2;
        break;
    
    default:
        cout << "Enter the valid Operator.";
        break;
    }

    return 0;
}