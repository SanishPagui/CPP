#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,flag=0,count=1;
    cout<<"Enter the number:";
    cin>>n;
    if(n%2==0)
        flag=1;
    else    
        flag=0;
    for(int i=2;i<n;i++){
        if(n==2)
            break;
        if(n%i==0)
            count++;
    }    
    if(count>1 && flag==1)
        cout<<n<<" is even and not prime";
    else if(count==1 && flag==1)
        cout<<n<<" is even and prime";
    else if(count==1 && flag==0)
        cout<<n<<" is odd and prime";
    else
        cout<<n<<" is odd and not prime";
}