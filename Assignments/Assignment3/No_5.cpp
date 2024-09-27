#include<iostream>
#include<string>
using namespace std;
class Worker{
protected:
    int workerID;
    string name;
    string address;
    int departmentID;
    int supervisorID;
public:
    void inputWorkerDetails(int wID,string n,string addr,int depID,int supID) {
        workerID=wID;
        name=n;
        address=addr;
        departmentID=depID;
        supervisorID=supID;
    }
    virtual void printDetails() {
        cout<<"Worker ID: "<<workerID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Supervisor ID: "<<supervisorID<<endl;
    }
};
class Supervisor : public Worker {
public:
    void inputSupervisorDetails(int wID,string n,string addr,int depID) {
        workerID=wID;
        name=n;
        address=addr;
        departmentID=depID;
        supervisorID=wID;
    }
    void printDetails(){
        cout<<"Supervisor Name: "<<name<<endl;
        cout<<"Department ID: "<<departmentID<<endl;
    }
};
int main() {
    Worker worker;
    Supervisor supervisor;
    worker.inputWorkerDetails(101,"John Doe","123 Main St",201,301);
    supervisor.inputSupervisorDetails(301,"Jane Smith","456 Oak St",201);
    cout<<"Worker Details:"<<endl;
    worker.printDetails();
    cout<<endl<<"Supervisor Details:"<<endl;
    supervisor.printDetails();
}
