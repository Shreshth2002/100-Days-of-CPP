//Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. 
#include<math.h>
#include<iostream>
using namespace std;

int main()
{
    float a, value, sum=0, i;

    cout<<"Enter the Enter the number, till which you want the sum of series"<<endl;
    cin>>a;

    for(i=1; i<=a; i++)
    {
        value = 1/pow(i,i);
        cout<<"value of 1/"<<i<<"^"<<i<<" is "<<value<<endl;

        sum = sum + value;
    }

    cout<<"Sum is "<<sum;

    return 0;
}