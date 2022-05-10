#include <iostream>
#define SIZE 3
using namespace std;
 
int main()
{
  int matrix[SIZE][SIZE];
  int sum_left =0;
  cout << "Enter elements into the matrix \n";

  //Taking input into the Matrix and 
  //Adding if they are diagonal elements
  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];
    }
  }

  cout << "Sum of Left Diagonal: "<< sum_left << endl;

  return 0;
}