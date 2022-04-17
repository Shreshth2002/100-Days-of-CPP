//like we enter 1234, therefore their sum should be 1+2+3+4=10

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