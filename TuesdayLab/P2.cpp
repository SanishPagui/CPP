#include<iostream>
#include<math.h>
using namespace std;
class Polar{
    float r;
    float angle;
    public:
        Polar(float x,float y):r(x),angle(y){}
        Polar operator +(Polar &p11){
            Polar p(0,0);
            float x1=r*cos(angle);
            float y1=r*sin(angle);
            float x2=p11.r*cos(p11.angle);
            float y2=p11.r*sin(p11.angle);
            p.r=sqrt(x1*x2 + y1*y2);
            p.angle=angle*tan((y1+y2)/(x1+x2));
            return p;
        }
        void display(){
            cout<<"Radius: "<<r<<endl<<"Angle: "<<angle;
        }
};
int main(){
    Polar p1(20.3,90),p2(21.63,45),p3(0,0);
    p3=p1+p2;
    p3.display();
}