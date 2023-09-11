/* Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not. */

void ifVote(int a);

#include<iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age : ";
    cin >> age;

    ifVote(age);

    return 0;
}

void ifVote(int a)
{
    if(a>=18)
    {
        cout << "Can Vote !";
    }
    else{
        cout << "Can't Vote !!";
    }
}