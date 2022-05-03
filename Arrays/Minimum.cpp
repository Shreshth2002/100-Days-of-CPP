#include<iostream>
using namespace std;
int main ()
{
    int arr[10], n, min;

    cout << "Enter the size of the array : ";
    cin >> n;

    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    
    cout << "Smallest element : " << min;
    
    return 0;
}