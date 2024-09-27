#include<iostream>
using namespace std;
class Student{
    protected:
        string name;
        int rno;
    public:
        Student():name(""),rno(0){}
        virtual void getData(){
            cout<<"Name: ";
            cin.ignore();
            getline(cin,name);
            cout<<"Roll No.: ";
            cin>>rno;
        }
        virtual void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll No.: "<<rno<<endl;
        }
};
class Sports: virtual public Student{
    protected:
        int sptmks;
    public:
        Sports():sptmks(0){}
        void getData(){
            cout<<"Sports marks: ";
            cin>>sptmks;
        }
        void display(){
            cout<<"Sports Marks: "<<sptmks<<endl;
        }
};
class Exam: virtual public Student{
    protected:
        int marks[6];
    public:
        Exam(){
            for(int i=0;i<6;i++)
                marks[i]=0;
        }
        void getData(){
            Student::getData();
            for(int i=0;i<6;i++){
                cout<<"Marks in subject "<<i+1<<": ";
                cin>>marks[i];
            }
        }
        void display(){
            Student::display();
        }
        int getTotalMarks(){
            int total=0;
            for(int i=0;i<6;i++){
                total+=marks[i];
            }
            return total;
        }
};
class Result: public Exam, public Sports{
    int total;
    public:
        Result():total(0){}
        void getData(){
            Exam::getData();
            Sports::getData();
        }
        void calculateTotal(){
            total=getTotalMarks()+sptmks;
        }
        void display(){
            Exam::display();
            Sports::display();
            cout<<"Total Marks (including sports): "<<total<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Result *students=new Result[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the details of student "<<i+1<<endl;
        students[i].getData();
        students[i].calculateTotal();
    }
    for(int i=0;i<n;i++){
        cout<<"Details of student "<<i+1<<":"<<endl;
        students[i].display();
    }
    delete[] students;
}
