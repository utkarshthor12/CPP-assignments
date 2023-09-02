// Q3- Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>

using namespace std;

int main () 
{
    int length, breadth, area;

    cout << "Enter the length and the breadth of rectangle :";
    cin >> length;
    cin >> breadth;

    area = length * breadth;

    cout << "The area of rectangle will be :" << area <<" sq. meters";

    return 0;
}