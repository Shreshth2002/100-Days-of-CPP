#include<iostream>
using namespace std;

int main()

{

    float a,b,sum,sub,mul,div;

    cout<<"enter the value of a\t";
    cin>>a;

    cout<<"enter the value of b\t";
    cin>>b;

    sum = a+b;
    cout<<"Sum is\t"<<sum<<endl;

    sub = a-b;
    cout<<"Subtraction is\t"<<sub<<endl;

    mul = a*b;
    cout<<"Multiplication is\t"<<mul<<endl;

    div = a/b;
    cout<<"Division is\t"<<div<<endl;

    return 0;
    
}