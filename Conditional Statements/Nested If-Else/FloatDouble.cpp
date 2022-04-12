#include<iostream>
using namespace std;

int main()
{
    float f=75.0f;
    double d=75.0;
    int i=75;

    if(f==d)
    {
        if(f==i)
        {
            cout<<"f,d and i are equal";
        }

        else
        {
            cout<<"f,d are equal but i is not equal";
        }
    }

    else
    {
        cout<<"f and d are not equal";
    }

    return 0;
        
}