#include<iostream>
using namespace std;

int main()
{
    int n1, n2, lcm, gcd, dividend, divisor, rem;

    cout<<"Enter two numbers that you want to check for LCM and GCD"<<endl;
    cin>>n1>>n2;

    if(n1>n2)
    {
        dividend=n1;
        divisor=n2;
    }

    else
    {
        dividend=n2;
        divisor=n1;
    }

    while(1)
    {
        rem=dividend%divisor;
        if(rem==0)
        {
            gcd=divisor;
            break;
        }

        dividend=divisor;
        divisor=rem;
    }

    lcm=(n1*n2)/gcd;

    cout<<"\n Greatest common divisor is "<<gcd;
    cout<<"\n Least common multiple is "<<lcm;

    return 0;


}