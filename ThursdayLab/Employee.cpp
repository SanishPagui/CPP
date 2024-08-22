#include<iostream>
#include <random>
#include<string.h>
using namespace std;
void Padding(string str,int width){
    int padding=(width-str.length())/2;
    for(int k=0;k<padding;k++)
            cout<<" ";
}
void RevPadding(string str,int width){
    int padding=(width-str.length())/2;
    int revpadding=padding+str.length();
    for(int k=revpadding;k<width;k++)
        cout<<" ";
}
void IntPadding(int n,int width){
    int length=0;
    if(n==0)
        length=1;
    while(n>0){
        n/=10;
        length++;
    }
    int padding=(width-length)/2;
    for(int k=0;k<padding;k++)
        cout<<" ";
}
void RevIntPadding(int n,int width){
    int length=0;
    if(n==0)
        length=1;
    while(n>0){
        n/=10;
        length++;
    }
    int padding=(width-length)/2;
    int revpadding=(width+length)/2;
    for(int k=revpadding;k<width;k++)
        cout<<" ";
}
class Employee{
    string name;
    float current_salary,updated_salary;
    string current_status;
    int emp_id;
    public:
    int n;
    void display(){
        IntPadding(emp_id,10);
        cout<<emp_id;
        RevIntPadding(emp_id,10);
        Padding(name,15);
        cout<<name;
        RevPadding(name,15);
        IntPadding(current_salary,20);
        cout<<current_salary;
        RevIntPadding(current_salary,20);
        IntPadding(abs(updated_salary),20);
        cout<<abs(updated_salary);
        RevIntPadding(abs(updated_salary),20);
        Padding(current_status,15);
        cout<<current_status;
        RevPadding(current_status,15);
        cout<<"\n";
    }
    void status(){
        if(updated_salary>current_salary && updated_salary<=50000)
            current_status="Unchanged";
        else if(updated_salary>current_salary && updated_salary>=50000)
            current_status="Promotion";
        else
            current_status="Demotion";
    }
    void salary(){  
        int flag=0,choice;
        cout<<"\nThe current salary of "<<name<<" is "<<current_salary<<endl;
        do{
            cout<<"Do you want to\n1.Increament\n2.Decreament\nEnter your choice: ";
            cin>>choice;
        }while(choice!=1 && choice!=2);
        switch(choice){
            case 1:
                cout<<"Enter the amount to increament "<<name<<"'s"<<" salary: ";
                cin>>updated_salary;
                updated_salary+=current_salary;
                break;
            case 2:
                cout<<"Enter the amount to decrement "<<name<<"'s"<<" salary: ";
                do{
                    flag=0;
                    cin>>updated_salary;
                    if(updated_salary>current_salary){
                        cout<<"His salary cannot go in negative,please enter again: ";
                        flag=1;
                    }
                    else
                        updated_salary-=current_salary;
                }while(flag);
            break;
        }
        status();
    }
    void input(int n){
        emp_id=rand()%1001+1000;
        cout<<"Enter your details:"<<endl;
        cout<<"Employee "<<n+1<<endl;
        cin.ignore();
        cout<<"Name: ";
        getline(cin,name);
        cout<<"Salary: ";
        cin>>current_salary;
    }
};
void header(){
    cout<<"\n";
        Padding("Id",10);
        cout<<"Id";
        RevPadding("Id",10);
        Padding("Name",15);
        cout<<"Name";
        RevPadding("Name",15);
        Padding("Current Salary",20);
        cout<<"Current Salary";
        RevPadding("Current Salary",20);
        Padding("Updated Salary",20);
        cout<<"Updated Salary";
        RevPadding("Updated Salary",20);
        Padding("Staus",15);
        cout<<"Status";
        RevPadding("Staus",15);
        cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of employee: ";
    cin>>n;
    Employee *e=new Employee[n];
    for(int i=0;i<n;i++)
        e[i].input(i);
    for(int i=0;i<n;i++)
        e[i].salary();
    header();               
    for(int i=0;i<n;i++)
        e[i].display();   
    delete[] e;
}