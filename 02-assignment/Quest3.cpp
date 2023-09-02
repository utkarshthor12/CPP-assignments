// Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
// girls received grades "A" if 17 boys and 80% of the students that received grades "A".


#include<iostream>

using namespace std;

int main()
{
    int totalStu = 45;
    int boysGradeA = 17;
    int totalGradeA = (totalStu * 80) / 100;

    int girlsGradeA = totalGradeA - boysGradeA;

    cout << "Number of girls who received grade A are : " << girlsGradeA << endl;

    return 0;
}
