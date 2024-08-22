#include<iostream>
using namespace std;
class Count{
    int val;
    public:
        Count(){
            val=0;
        }
        Count(int x){
            val=x;
        }
        void operator++(){
            ++val;
        }
        void operator++(int){
            val++;
        }
        void operator--(){
            ++val;
        }
        void operator--(int){
            val--;
        }
    void display(){
        cout<<val;
    }
};
int main(){
    Count c(20);
    cout<<"\nThe initial value: ";
    c.display();
    c++;
    cout<<"\nThe prefix increment value: ";
    c.display();
    ++c;
    cout<<"\nThe postfix increment value: ";
    c.display();
    c--;
    cout<<"\nThe postfix decrement value: ";
    c.display();
    --c;
    cout<<"\nThe prefix decrement value: ";
    c.display();
}