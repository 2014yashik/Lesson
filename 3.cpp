#include <iostream>
using namespace std;

  int main (){
   int n;
   cout<< "Input number ";
   cin>>n;
   int s=n;
   int A [n][n];
    for (int i = 0; i<n; i++){
      for (int j = i; j < n; j++){
        A[i][j] = s--;
        }
    s=n;
    }
   int d=1;
    for (int i = n-1; i>0; i--){
      for (int j = 0; j<i; j++){
        A[i][j] = d++;
      }
    d=n+1-i;
    }
    cout<<"Array:  "<< endl;
    for (int i = 0; i < n; i++){
        cout<<endl<<endl;
        for (int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
    }
   return 0;
}
