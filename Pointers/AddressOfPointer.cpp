#include<iostream>
using namespace std;

int main()
{
    int a; //a variable

    int *aptr; //Pointer varaible

    aptr=&a; //assign memory address of age to the pointer variable

    cout<<"Enter an integer value: ";
    cin>>a; 

    cout<<"The pointer to the variable a is: "<<&*aptr;//Print the pointer

    return 0;
}