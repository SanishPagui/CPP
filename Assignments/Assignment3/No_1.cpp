#include<iostream>
#include<cmath>
using namespace std;
class Rectangle;
class Polar {
    float r,a;
public:
    Polar(float radius=0, float angle=0):r(radius),a(angle) {}
    float getRadius(){
        return r;
    }
    float getAngle(){
        return a;
    }
    Polar(Rectangle& rect);
    void display(){        
        cout<<"Polar Coordinates:\nr="<<r<<", a="<<a<<"rads"<<endl;
    }
};
class Rectangle {
    float x, y;
public:
    Rectangle(float x1=0, float y1=0):x(x1),y(y1) {}
    float getX(){
        return x; 
    }
    float getY(){
        return y; 
    }
    Rectangle(Polar& polar) {
        x=polar.getRadius()*cos(polar.getAngle());
        y=polar.getRadius()*sin(polar.getAngle());
    }

    void display(){        
        cout << "Rectangle Coordinates:\nx="<<x<<", y="<<y<< endl;
    }
};
Polar::Polar(Rectangle& rect) {
    r=sqrt(rect.getX()*rect.getX()+rect.getY()*rect.getY());
    a=atan2(rect.getY(),rect.getX());
}
int main() {
    Polar p(5,0.927295);
    Rectangle rect=p;
    rect.display();
    Rectangle r(3, 4);
    Polar polar=r;
    polar.display();
}