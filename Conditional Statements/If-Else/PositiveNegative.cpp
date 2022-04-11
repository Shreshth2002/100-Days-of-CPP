#include<iostream>
using namespace std;

int main()

{
    int n;

    cout<<"enter a number";
    cin>>n;

    if(n<0)
    {
        cout<<"the number "<<n<<" is negative";
    }

    else 
    {
        cout<<"the number "<<n<<" is positive";
    }

    return 0;
}