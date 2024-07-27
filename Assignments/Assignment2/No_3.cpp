#include<iostream>
using namespace std;

int main(){
    int n,j,k=1;
    float sum=0,x,fact;
    double prod;
    cout<<"Enter the number of terms to evaluate Macluarin's series for sin(x): ";
    cin>>n;
    cout<<"Enter the value of x: ";
    cin>>x;
    for(int i=1;i<(n*2);i=i+2){
        int j=1;
        fact=1;
        while(j<=i){
            fact*=k*(x/j);
            j++;
        }
        sum+=fact;
        k*=(-1);
    }
    cout<<"sin(x)= "<<sum<<endl;
    sum=0;
    cout<<"\nEnter the number of terms to evaluate: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        j=1;
        prod=1;
        while(j<=i){
           prod*=1.0/i;
           j++;
        }
        sum+=prod;
    }
    cout<<"Sum= "<<sum<<endl;
}