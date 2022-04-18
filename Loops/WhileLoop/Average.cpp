#include<iostream>
using namespace std;

int main()
{
    float n,avg,i=1,sum=0;

    cout<<"Enter the number,till which you want to sum and get average"<<endl;
    cin>>n;

    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    avg=sum/n;
    cout<<"average is "<<avg;

    return 0;

}