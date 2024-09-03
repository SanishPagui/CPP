#include<iostream>
using namespace std;
class Float{
    float x;
    public:
        Float(int y):x(y){}
        void operator +(Float &f22){
            cout<<"10.5 + 28.10 ="<<this->x+f22.x<<endl;
        }
        void operator -(Float &f22){
            cout<<"10.5 - 28.10 ="<<this->x-f22.x<<endl;
        }
        void operator *(Float &f22){
            cout<<"10.5 * 28.10 ="<<this->x*f22.x<<endl;
        }
        void operator /(Float &f22){
            cout<<"10.5 / 28.10 ="<<this->x/f22.x<<endl;
        }
};
int main(){
    Float f1(10.5),f2(28.10);
    f1+f2;
    f1-f2;
    f1*f2;
    f1/f2;
}