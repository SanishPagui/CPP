#include<iostream>
using namespace std;

void swap(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

int main(){
    int a,b;
    cout<<"Enter any two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The numbers before swapping:"<<endl;
    cout<<"N1= "<<a<<"N1= "<<b<<endl;
    swap(a,b);
    cout<<"The numbers after swapping:"<<endl;
    cout<<"N1=  "<<a<<"N1= "<<b;
}