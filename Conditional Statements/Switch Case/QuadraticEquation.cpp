#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a, b, c;
    float r1, r2, i;
    float discriminant;

    cout<<"Enter values of a, b, c of quadratic equation (aX^2 + bX + c): "<<endl;
    cin>>a>>b>>c;

    /* Calculate discriminant */
    discriminant = (b * b) - (4 * a * c);


    /* Compute roots of quadratic equation based on the nature of discriminant */
    switch(discriminant > 0)
    {
        case 1:
            /* If discriminant is positive */
            r1 = (-b + sqrt(discriminant)) / (2 * a);
            r2 = (-b - sqrt(discriminant)) / (2 * a);

            cout<<"Two distinct and real roots exists:"<<r1<<" and "<<r2;
            break;

        case 0:
            /* If discriminant is not positive */
            switch(discriminant < 0)
            {
                case 1:
                /* If discriminant is negative */
                    r1 = r2 = -b / (2 * a);
                    i = sqrt(-discriminant) / (2 * a);

                    cout<<"Two distinct complex roots exists:"<<r1<<i<<" and "<<r2<<i; 
                    break;

                case 0:
                    /* If discriminant is zero */
                    r1 = r2 = -b / (2 * a);

                    cout<<"Two equal and real roots exists:"<<r1<<" and "<<r2;
                    break;
            }
    }

    return 0;
}