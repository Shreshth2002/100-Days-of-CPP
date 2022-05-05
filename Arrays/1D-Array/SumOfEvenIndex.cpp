#include<iostream>
using namespace std;

int main()
{
int sum=0;
int a[6]={4,5,6,7,8,9};

for(int i=0; i<6; i+=2)
{
    sum+=a[i];    
}
cout<<sum;

return 0;
}
