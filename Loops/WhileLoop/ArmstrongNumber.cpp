/*Armstrong number is a number that is equal to the sum of cubes of its digits. 
371 = (3*3*3)+(7*7*7)+(1*1*1)    
where:    
(3*3*3)=27    
(7*7*7)=343    
(1*1*1)=1    
So:    
27+343+1=371*/

#include<iostream>
using namespace std;

int main()
{
    int number,a,sum=0,temp;

    cout<<"Enter the number that you want to check as an armstrong number"<<endl;
    cin>>number;
    temp=number;

    while(number>0)
    {
        a=number%10;
        sum=sum+(a*a*a);
        number=number/10;
    }

    if(sum==temp)
    {
        cout<<"Entered number is an armstrong number";
    }

    else
    {
        cout<<"Entered number is not an armstrong number";
    }

    return 0;

}