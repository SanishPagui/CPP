#include<iostream>
using namespace std;
class Op{
    int num;
    public: 
        Op(){
            num=0;
        }
        Op(int y){
            num=y;
        }
        friend Op operator+(int a,Op &p){
            return Op(a+p.num);
        }
        Op operator*(Op &p){
            return Op(num*p.num);
        }
        Op operator-(int z){
            return Op(num-z);
        }
        void display(){
            cout<<num;
        }
};
int main(){
    Op x,y(20);
    x=5+y;
    cout<<"x=5+y:";
    x.display();
    x=x*y;
    cout<<"\nx=x*y: ";
    x.display();
    x=y-5;
    cout<<"\nx=x-y: ";
    x.display();

}