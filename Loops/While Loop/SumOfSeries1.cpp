//Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].

#include<iostream>
using namespace std;                   

int main()
{
    long int n, i=1, t=9, sum=0;

    cout<<"Enter the number till you want the series"<<endl;
    cin>>n;

    while(i<=n)
    {
        sum+=t;
        cout<<t<<" ";
        t=t*10+9;

        i++;
    }

    cout<<"\nSum of the series is "<<sum<<endl;

    return 0;

}