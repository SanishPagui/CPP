#include<iostream>
#include<string>
using namespace std;
struct employee{
    string name;
    int id;
    string address;
};

int main(){
    int i,choice,empId,count,n;
    string wish,empaddress;
    cout<<"Enter the number of employees:";
    cin>>n;
    cin.ignore();
    struct employee e[n];
    cout<<"\nEnter the details"<<endl;
    for(i=0;i<n;i++){
        cout<<"\nName: ";
        getline(cin,e[i].name);
        cout<<"Id: ";
        cin>>e[i].id;
        cout<<"Address: ";
        cin>>e[i].address;
        cin.ignore();
    }
    do{
        cout<<"\n1.To search Employee based on Id\n2.To search Employee based on Address\n3.Exit"<<endl;
        cout<<"Enter your Choice:";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"\nEnter the Employee you want to search for by using his/her Id"<<endl;
                cin>>empId;
                count=0;
                for(i=0;i<n;i++){
                    if(e[i].id==empId){
                        cout<<"Employee's name is: "<<e[i].name<<endl;
                        count++;
                    }
                }
                if(count==0)
                    cout<<"Employee not found"<<endl;
                break;
            case 2:
                count=0;
                cout<<"\nEnter the Employee/Employees you want to search for by using their address"<<endl;
                cin>>empaddress;
                for(i=0;i<n;i++){
                    if(empaddress.compare(e[i].address)==0){
                        if(count==0)
                            cout<<"\nThe Employee/Employees from "<<empaddress<<endl;
                        cout<<e[i].name<<endl;
                        count++;
                    }
                }
                if(count==0)
                    cout<<"\nNo one from "<<empaddress<<endl;
                break;
            default:
                exit(3);
        }
        cout<<"\nDo you want to continue?(y/n)";
        cin>>wish;
    }while("y"==wish);
}


