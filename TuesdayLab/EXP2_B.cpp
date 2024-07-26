#include<iostream>
using namespace std;

class Cuboid{
    double l,b,h;

    public:
    void input(){
        cout<<"Enter the dimensions of the cuboid"<<endl;
        cout<<"Length:";
        cin>>l;
        cout<<"Breadth:";
        cin>>b;
        cout<<"Height:";
        cin>>h;
    }

    inline double volume(){
        return l*b*h;
    }

    friend double surfaceArea(Cuboid c){
        return 2*(c.l*c.b+c.b*c.h+c.h*c.l);
    }
};


int main(){
    Cuboid c1;
    c1.input();
    cout<<"The volume of the cuboid: "<<c1.volume()<<endl;
    cout<<"The surface area of the cubiod:"<<surfaceArea(c1)<<endl;
}