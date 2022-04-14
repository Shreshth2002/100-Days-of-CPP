#include<iostream>
using namespace std;

int main()
{
    int number,rem,sum=0;

    cout<<"Enter a Number"<<endl;
    cin>>number;

    for(sum=0;number>0;number=number/10)
    {
        rem = number%10;
        sum = sum + rem ;
    }

    cout<<"Sum of the entered number is "<<sum;

    return 0;

}