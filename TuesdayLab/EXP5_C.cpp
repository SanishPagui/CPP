#include<iostream>
using namespace std;
class Base{
    protected:
        int x;
    public:
        Base(int a){
        x=a;
            cout<<"Base value= "<<x<<endl;
        }
};
class Derived:public Base{
    public:
        Derived(int a,int b):Base(a){
            x=b;
            cout<<"Derived value= "<<x<<endl;
        }
};
int main(){
    Derived d(20,10);
}