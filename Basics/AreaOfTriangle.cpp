#include<iostream>
using namespace std;

int main ()
{
    int area,height,base;

    cout<<"enter the height of the triangle";
    cin>>height;

    cout<<"enter the base of the triangle";
    cin>>base;

    area = (height*base)/2;

    cout<<"The area of triangle is"<<area;

    return 0;
}