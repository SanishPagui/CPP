#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"Base constuctor\n";
    }
};
class Cat:public Animal{
    public:
    Cat(){
        cout<<"Derived constuctor";
    }
};
int main(){
    Cat c;
}