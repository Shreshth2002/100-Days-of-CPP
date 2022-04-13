#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"Enter thr number"<<endl;
    cin>>number;

    switch(number%2)
    {
        case 0:                   //0 is indicated here as remainder
        cout<<"Numer is even";
        break;

        case 1:
        cout<<"Number is odd";    //1 is here defined as remainder
        break;
    }

    return 0;
}