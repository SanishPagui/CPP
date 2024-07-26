#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the order of the materix:";
    cin>>n;
    int a[n][n],b[n][n];
    cout<<"Enter the elements of the "<<n<<"x"<<n<<" array:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"The matrix before interchanging the diagonals is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<setw(3)<<left<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"The matrix afetr interchanging the diagonals is"<<endl;
    for(int i=0;i<n;i++){
        int k=n;
        for(int j=0;j<n;j++){
            if(i==j || k==i+1){
                b[i][j]=a[i][k-1];
            }
            else 
                b[i][j]=a[i][j];
            cout<<setw(3)<<left<<b[i][j]<<"  ";
            k--;
        }
        cout<<endl;
    }
}