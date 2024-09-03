#include <iostream>
using namespace std;
class Base{
  public:
    virtual void show(){
      cout<<"Base class show function called"<< endl;
    }
    void display(){
        cout<<"Base class display function called"<< endl;
    }
};
class Derived:public Base {
  public:
    void show(){
        cout<<"Derived class show function called"<<endl;
    }
    void display(){
        cout<<"Derived class display function called"<<endl;
    }
};

int main(){
    Base *bptr;
    Derived d;
    bptr->show();
    bptr->display();
    bptr=&d;
    bptr->show();
    bptr->display();
}
