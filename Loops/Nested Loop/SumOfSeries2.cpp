//cos x = 1 - x2/2! + x4/4! - x6/6! -.....

#include<iostream>
using namespace std;

int main()
{

	int i,j,n,fact,sign=-1;
    float x, p,sum=0;

	cout<<"Enter the value of x"<<endl;
    cin>>x;

	cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    for(i=2;i<=n;i+=2)
    {
        p=1;
		fact=1;

		for(j=1;j<=i;j++)
        {
            p=p*x;
            fact=fact*j;
        }

		sum+=sign*p/fact;
        sign=-1*sign;
        }

	cout<<"cos "<<x<<"="<<1+sum;
    return 0;

}
