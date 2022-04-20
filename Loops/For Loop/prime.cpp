#include<iostream>
using namespace std;

int main()
{
    int number,factors=0;

    cout<<"Enter the number that you want to check"<<endl;
    cin>>number;

    for(int i=1; i<=number; i++)
    {

        if(number%i==0)
        {
        factors++;
        }
        
    }

    if(factors==2)
    {
        cout<<"Entered number is a prime number";
    }

    else
    {
        cout<<"Entered number is not a prime number";
    }

    return 0;
}