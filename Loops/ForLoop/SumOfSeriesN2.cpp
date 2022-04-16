//Calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

#include<iostream>
using namespace std;

int main()

{
    int a,sum=0;

    cout<<"Enter the number, till which you want the sum of series"<<endl;
    cin>>a;

    for(int i=a; i>=0; i--)
    {
        sum = sum + i*i;
    } 

    cout<<"Sum is "<<sum;

    return 0;
}