#include <iostream>
#include <cmath>
using namespace std;
class Rectangle;
class Polar {
    double r;
    double angle;
    public:
        Polar(double r=0,double a=0):r(r),angle(a) {}
        void display(){
            cout<<"Polar Coordinates\n"<<"Radius: "<<r<<endl<<"Angle: "<<angle<<"" << endl;
        }
        Polar(Rectangle &rect);
        double getRadius(){ 
            return r; 
        }
        double getAngle(){ 
            return angle; 
        }
};
class Rectangle {
    double x;
    double y;
    public:
        Rectangle(double x1=0,double y1=0):x(x1),y(y1){}
        void display(){
            cout<<"Rectangular Coordinates:\n"<<"x: "<<x<<endl<<"y: "<<y<< endl;
        }
        Rectangle(Polar &polar) {
            x=polar.getRadius() * cos(polar.getAngle());
            y=polar.getRadius() * sin(polar.getAngle());
        }
        double getX(){ 
            return x; 
        }
        double getY(){ 
            return y; 
        }
};
Polar::Polar(Rectangle &rect) {
    r=sqrt(rect.getX() * rect.getX() + rect.getY() * rect.getY());
    angle=atan2(rect.getY(), rect.getX());
}
int main(){
    Rectangle rect(3, 4);
    rect.display();
    Polar polar=rect;
    polar.display();
    cout<<"\n";
    Polar polar2(5, atan2(4, 3));
    polar2.display();
    Rectangle rect2=polar2;
    rect2.display();
}
