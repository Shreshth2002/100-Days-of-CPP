#include<iostream>
using namespace std;

int main()
{
    int length,breadth;

    cout<<"Enter the length of a rectangle";
    cin>>length;

    cout<<"Enter the breadth of the rectangle";
    cin>>breadth;

    if(length==breadth)
    {
        cout<<"As length and breadth entered are equal, therefore it a square.";
    }

    else
    {
        cout<<"As length and breaadth are not equal, therefore it is a rectangle.";
    }

    return 0;
}