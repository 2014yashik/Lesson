#include <iostream>
using namespace std;

int main (){
   int n,w;
   cout<< "Number of lines and columns= ";
   cin>>n>>w;
   int s=0;
   int k,d;
   int p [n][w];
   int A [n][w];

  cout<<"Enter the elements of your array:  "<< endl;
  for (int i = 0; i < n; i++){
        for (int j = 0; j < w; j++){
            cin>>A [i][j];

    }
  }
  cout<<"Array:  "<< endl;
  for (int i = 0; i < n; i++){
      cout<<endl<<endl;
      for (int j = 0; j < w; j++){
          cout<<A[i][j]<<" ";
            }
         }

  for (int i = 0; i < n; i++){
        for (int j = 0; j < w; j++){
            if (i==0&&j==0) p[i][j]=0;
            else{
            k=3*(i+j);
            if (k==A[i][j]) p[i][j]=1;
            s=0;

    }
   }
  }
  cout<<endl<<endl<<"New Array:"<<endl;
  for (int i = 0; i < n; i++){
    cout<<endl<<endl;
    for (int j = 0; j < w; j++){
        if (p[i][j]==1) cout << A[i][j] << " ";
        if (p[i][j]==0) cout<<"Err ";
    }
  }
  return 0;
}
