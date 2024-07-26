#include<iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}

double add(double a,double b){
    return a+b;
}

int main(){
    int sum1=add(4,6);
    int sum2=add(4,6,10);
    float sum3=add(4.5,6.7);
    cout<<"Sum of 4 and 6 is "<<sum1<<endl;
    cout<<"Sum of 4,6 and 10 is "<<sum2<<endl;
    cout<<"Sum of 4.5 and 6.7 is "<<sum3;
}