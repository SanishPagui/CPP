#include<iostream>
#include<limits>
using namespace std;
class Int{
    int z;
    public:
        Int(){
            z=0;
        }
        Int(int a){
            z=a;
        }
        operator int(){
            return z;
        }
        Int operator +(Int &a){
            if((a.z>0 && z>numeric_limits<int>::max()-a.z) || (a.z<0 && z<numeric_limits<int>::min()-a.z)){
                cout<<"Addition overflow:The value is out of range"<<endl;
                exit(1);
            }
            Int t33;
            t33.z=z+a.z;
            return t33;
        }
        Int operator *(Int &a){
            if((a.z>0 && z>numeric_limits<int>::max()/a.z) || (a.z<0 && z<numeric_limits<int>::min()/a.z)){
                cout<<"Multiplication overflow:The value is out of range"<<endl;
                exit(1);
            }
            Int t33;
            t33.z=z*a.z;
            return t33;
        }
        Int operator -(Int &a){
            if((a.z>0 && z>numeric_limits<int>::max()/a.z) || (a.z<0 && z<numeric_limits<int>::min()/a.z)){
                cout<<"Subtraction overflow:The value is out of range"<<endl;
                exit(1);
            }
            Int t33;
            t33.z=z-a.z;
            return t33;
        }
        Int operator /(Int &a){
            if(a.z==0){
                cout<<"Division by zero is undefined"<<endl;
                exit(1);
            }
            Int t33;
            t33.z=z/a.z;
            return t33;
        }
        void display(){
            cout<<z<<endl;
        }
};
int main(){
    int a,b;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    Int i1(a),i2(b),i3;
    int x,y;
    x=i1;
    y=i2;
    i3=i1+i2;
    cout<<a<<" + "<<b<<" = ";
    i3.display();
    i3=i1-i2;
    cout<<a<<" - "<<b<<" = ";
    i3.display();
    i3=i1*i2;
    cout<<a<<" * "<<b<<" = ";
    i3.display();
    i3=i1/i2;
    cout<<a<<" / "<<b<<" = ";
    i3.display();
}