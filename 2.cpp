#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Input numbers of array" << endl;
    cin >> n;
    int*A=new int[n];
    for( int i=0; i<n; i++){
        cout << "Input number " << i+1 << "of array" << endl;
        cin >> A[i];
        cout << endl;
        }
    int s=0;
     cout <<"gfdss"<< endl;
    for(int i=0; i < n;i++){
        for(int k=1;  k<=(A[i]) ; k++){
            if(A[i] % k == 0){
                s++;
            }
        }
        if (s==3){
            cout << A[i] << endl;
        }
        s=0;
    }
    delete []A;
    return 0;
}
