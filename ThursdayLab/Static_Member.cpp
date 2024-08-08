#include<iostream>
using namespace std;
class Counter{
    static int count;
    public:
    friend void increment(Counter &c);
    Counter(){
        increment(*this);
    }
    void display(){
        cout<<count;
    }
    ~Counter(){
    }
};
int Counter::count = 0;
void increment(Counter &c){
    c.count++;
}
int main(){
    Counter c1;
    cout<<"The value of count using object c1: ";
    c1.display();
    Counter c2,c3;
    cout<<"\nThe value of count using object c3: ";
    c3.display();
    cout<<"\nThe value of count using object c1: ";
    c1.display();
    {
        Counter c4;
        cout<<"\nThe value of count using object c4: ";
        c4.display();   
    }
    cout<<"\nThe value of count even after destroying object c4 using object c2: ";
    c2.display();
}
