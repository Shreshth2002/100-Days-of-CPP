#include<iostream>
using namespace std;

int main()

{
    int year,salary,bonus;

    cout<<"Enter the number of years that an employee is with the company";
    cin>>year;

    if(year>5)
    {
        cout<<"Enter the salary of the employee";
        cin>>salary;
        
        bonus=0.05*salary;
        cout<<"Your net bonus is"<<bonus;
    }

    else
    {
        cout<<"Salary remains unchanged";
    }

    return 0;

}
