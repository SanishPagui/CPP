#include<iostream>
#include<string>
using namespace std;
class Student{
    int rno;
    string name;
    public:
    Student(string n,int rnum){
        rno=rnum;
        name=n;
    }
    ~Student(){
        cout<<"\nDestructor is called for "<<name<<endl;
    }
    void display(){
        cout<<"\nName: "<<name<<endl;
        cout<<"Roll No.: "<<rno<<endl;
    }
};
int main(){
    Student s1("Sanish Pagui",54);
    s1.display();
    Student s2("No one",1);
    s2.display();
}