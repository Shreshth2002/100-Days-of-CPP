#include<iostream>
using namespace std;

int main()
{
    int number,factorial=1;

    cout<<"Enter the number that you want to find the factorial of"<<endl;
    cin>>number;

    for(int i=1; i<=number; i++)
    {
        factorial= factorial*i;
    }

    cout<<"Factorial of "<<number<<" is "<<factorial;

    return 0;
    
}