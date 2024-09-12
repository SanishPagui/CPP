#include<iostream>
#include<string>
using namespace std;
class Employee{
protected:
    string name;
    int number;
public:
    Employee():name(""),number(0){}
    Employee(string name,int number):name(name),number(number){}
    string getName(){
        return name;
    }
    virtual void getData(){
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter number: ";
        cin>>number;
    }
};
class Manager:public Employee{
    string title;
    int club_dues;
public:
    Manager():title(""),club_dues(0){}
    Manager(string name,int number,string title,int club_dues):Employee(name,number),title(title),club_dues(club_dues){}
    void getData(){
        Employee::getData();
        cout<<"Enter title: ";
        cin.ignore();
        getline(cin,title);
        cout<<"Enter club dues: ";
        cin>>club_dues;
    }

    int getClubDues(){
        return club_dues;
    }
};
class Scientist:public Employee{
    int publications;
public:
    Scientist():publications(0){}
    Scientist(string name,int number,int publications):Employee(name,number),publications(publications){}
    void getData(){
        Employee::getData();
        cout<<"Enter number of publications: ";
        cin>>publications;
    }
    int getPublications(){
        return publications;
    }
};
class Labourer:public Employee{

};
int main(){
    int nm,ns;
    cout<<"Enter number of managers: ";
    cin>>nm;
    Manager *m=new Manager[nm];
    for(int i=0;i<nm;i++){
        cout<<"\nEnter details for manager "<<i+1<<":\n";
        m[i].getData();
    }
    cout<<"\nEnter number of scientists: ";
    cin>>ns;
    Scientist *s=new Scientist[ns];
    for(int i=0;i<ns;i++){
        cout<<"\nEnter details for scientist "<<i+1<<":\n";
        s[i].getData();
    }
    Manager* minDue=&m[0];
    for(int i=1;i<nm;i++){
        if(m[i].getClubDues()<minDue->getClubDues()){
            minDue=&m[i];
        }
    }
    Scientist* maxPub=&s[0];
    for(int i=1;i<ns;i++){
        if(s[i].getPublications()>maxPub->getPublications()){
            maxPub=&s[i];
        }
    }
    cout<<"\nManager with the lowest club dues: "<<minDue->getName()<<endl;
    cout<<"Scientist with the highest publications: "<<maxPub->getName()<<endl;
}
