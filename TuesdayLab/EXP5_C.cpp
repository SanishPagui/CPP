#include<iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base constructor called"<<endl;
        }
};
class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived constructor called"<<endl;
        }
};
int main(){
    Derived d;
}