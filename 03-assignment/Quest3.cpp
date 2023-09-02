/* Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss. */

#include <iostream>

using namespace std;

int main()
{
    float costPrice, sellPrice, profit, loss;

    cout << "Enter CostPrice :" << endl;
    cin >> costPrice;

    cout << "Enter SellingPrice :" << endl;
    cin >> sellPrice;

    if(costPrice<sellPrice)
    {
        profit = sellPrice - costPrice;

        cout << "There is a profit of : " << profit << " Rs." << endl;
    }
    else{
        loss = costPrice - sellPrice;

        cout << "There is a loss of : " << loss << " Rs." << endl;
    }

    return 0;
}