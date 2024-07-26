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
    void display(){
        cout<<"\nName: "<<name<<endl;
        cout<<"Roll No.: "<<rno<<endl;
    }
};

int main(){
    Student s1("Sanish Pagui",54);
    Student s2("No one",1);
    s1.display();
    s2.display();
}