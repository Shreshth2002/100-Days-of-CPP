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