#include<iostream>
using namespace std;

int main()
{
int sum=0;
int a[6]={4,8,6,7,8,9};

for(int i=0; i<6; i++)
{
    if(a[i]%2==1)
    {
        sum += a[i];
    }    
}
cout<<sum;

return 0;
}
