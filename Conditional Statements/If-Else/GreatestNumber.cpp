#include<iostream>
using namespace std;

int main ()
{
    int x,y,z;

    cout<<"Enter 3 numbers";
    cin>>x>>y>>z;

    if(x>y&&x>z)
    {
        cout<<"the greatest number is"<<x;
    }

    else if(y>x&&y>z)
    {
        cout<<"the greatest number is"<<y;
    }

    else
    {
        cout<<"the greatest number is"<<z;
    }

    return 0;

}