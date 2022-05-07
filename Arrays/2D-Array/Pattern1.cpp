  #include <iostream>
using namespace std;

int main(){
    int elemen[100][100], n, i, j, k;
    
    cout <<"input element = ";
    cin >>n;
    
    for(i = 0;i < n;i++){
        for(j = 0;j < n;j++){
            elemen[0][j] = 1;
            elemen[n-1][j] = 1;
            elemen[n-i][n-j] = 1;           
            cout <<elemen[i][j]<<" ";
        }   
        cout<<endl;
    }
    
}