#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int age;
    public:
        friend istream &operator>>(istream &in,Student &s){
            cout<<"Enter your name: ";
            in>>s.name;
            cout<<"Enter your age: ";
            in>>s.age;
            return in;
        }
        friend ostream &operator<<(ostream &out,Student &s){
            out<<"Name: "<<s.name;
            out<<"\nAge: "<<s.age;
            return out;
        }
};

int main(){
    Student s;
    cin>>s;
    cout<<s;
}