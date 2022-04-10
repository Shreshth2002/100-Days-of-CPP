#include<iostream>
using namespace std;

int main ()
{
    int a,b,c;

    cout<<"enter the value of A\t";
    cin>>a;

    cout<<"enter the value of B\t";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"after swapping the value of A is "<<a<<endl;
    cout<<"after swapping the value of B is "<<b<<endl;

    return 0;
}
