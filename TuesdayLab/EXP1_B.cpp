#include<iostream>
using namespace std;

class Student{
    string name;
    int rno;
    float percent;
    int marks[4];

    public:
    void Percentage(){
        percent=((marks[0]+marks[1]+marks[2]+marks[3])/4.0);
    }

    void Details(){
        cin.ignore();
        cout<<"Name: ";
        getline(cin, name);
        cout<<"Roll No.: ";
        cin>>rno;
        cout<<"Enter the marks:"<<endl;
        for(int i=0;i<4;i++){
            cout<<"Subject "<<i+1<<": ";
            cin>>marks[i];
        }
        Percentage();
    }

    void Display(){
        cout <<"Name: "<<name<<endl;
        cout <<"Roll No.: "<<rno<<endl;
        cout <<"Percentage: " <<percent<<"%"<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    Student *s=new Student[n];
    cout<<"\nEnter the details"<<endl;;
    for(int i=0;i<n;i++){
        cout<<"\nDetails of student "<<i+1<<":"<< endl;
        s[i].Details();
    }
    for(int i=0;i<n;i++){
        cout <<"\nDetails of student "<<i+1<<":"<<endl;
        s[i].Display();
    }
    return 0;
}

