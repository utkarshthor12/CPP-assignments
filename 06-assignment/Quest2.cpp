/* Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle. */

void areaNcircumference(float r);

#include<iostream>

using namespace std;

int main()
{
    float radius;

    cout << "Enter the radius of the circle : ";
    cin >> radius;

    areaNcircumference(radius);

    return 0;
}

void areaNcircumference(float r)
{
    float area = 3.14 * r * r;
    float circum = 2 * 3.14 * r;

    cout << "The area is : " << area << " and the circumference is : " << circum;
}