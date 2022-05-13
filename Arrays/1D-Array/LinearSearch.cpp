#include<iostream>
using namespace std;

int main()
{
    int A[] = {100,450,69,54,619,7,8,12};
    int x;

    cout<<"Enter the number you want to find: ";
    cin >> x;

    for(int i = 0; i < 8; i++){
        if(x == A[i]){
            cout << "Item Found : " << A[i] << ", at index : " << i << endl;
        }
    }

    return 0;
}