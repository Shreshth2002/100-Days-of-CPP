// we will take a number from user and till that wew will print the sum
//for eg, till 5, therefore 1+2+3+4+5=15 should be the sum

#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;

    cout<<"Enter the number, till you want the sum"<<endl;
    cin>>n;
    
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }

    cout<<"sum is : "<<sum;

    return 0;
}