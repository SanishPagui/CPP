#include <iostream>
using namespace std;
class Student{
protected:
    int rollNumber;
public:
    void setRollNumber(int roll){
        rollNumber=roll;
    }
    void displayRollNumber(){
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};
class Test:public Student{
protected:
    float subject1Marks;
    float subject2Marks;
public:
    void setMarks(float marks1, float marks2){
        subject1Marks=marks1;
        subject2Marks=marks2;
    }
    void displayMarks(){
        cout<<"Marks in Subject 1: "<<subject1Marks<<endl;
        cout<<"Marks in Subject 2: "<<subject2Marks<<endl;
    }
};
class Result:public Test{
public:
    void displayTotalMarks(){
        float total=subject1Marks + subject2Marks;
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main(){
    Result student1;
    student1.setRollNumber(101);
    student1.setMarks(85.5, 92.0);
    student1.displayRollNumber();
    student1.displayMarks();
    student1.displayTotalMarks();
}
