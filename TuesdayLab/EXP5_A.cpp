#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(){
            a=10;
        }
        void displayA(){
            cout<<"This is class A and the value of a is "<<a;
        }
};
class B:public A{
    int b;
    public:
        B(){
            b=20;
        }
        void displayB(){
            cout<<"This is class B and the value of b is "<<b;
        }
};
class C:public A{
    int c;
    public:
        C(){
            c=30;
        }
        void displayC(){
            cout<<"This is class C and the value of c is "<<c;
        }
};
int main(){
    A a(10);
    B b;
    C c;
    cout<<"C class used:\n";
    c.displayA();
    cout<<"\nC class used:\n";
    c.displayC();
    cout<<"\nB class used:\n";
    b.displayA();
    cout<<"\nB class used:\n";
    b.displayB();
    cout<<"\nA class used:\n";
    c.displayA();
}