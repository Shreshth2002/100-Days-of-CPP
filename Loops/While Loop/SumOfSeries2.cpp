//find the number and sum of all integer between 100 and 200 which are divisible by 9.

#include<iostream>
using namespace std;

int main()
{

int x,y,sum=0;

cout<<"Enter the numbers between which you want the result of the serires"<<endl;
cin>>x>>y;

int i=x;
while(i<=y)
{
    if(i%9==0)
    {
        cout <<" "<<i;
        sum=sum+i;
    }
    i++;
}

cout<<"\n The sum is "<<sum;

return 0;

}

