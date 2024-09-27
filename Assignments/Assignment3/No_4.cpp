#include<iostream>
#include<string>
using namespace std;

class Account {
protected:
    string customerName;
    int accountNumber;
    string accountType;
    double balance;
public:
    void initialize(string name,int accNo,string type,double bal) {
        customerName=name;
        accountNumber=accNo;
        accountType=type;
        balance=bal;
    }

    void deposit(double amount) {
        balance+=amount;
        cout<<"Amount Deposited: "<<amount<<endl;
    }

    void displayBalance() {
        cout<<"Current Balance: "<<balance<<endl;
    }

    virtual void computeInterest() {}

    virtual void withdraw(double amount) {
        if(amount<=balance) {
            balance-=amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        } else {
            cout<<"Insufficient balance!"<<endl;
        }
    }
};

class SavingsAccount : public Account {
public:
    void computeInterest() override {
        double interest=balance*0.04;
        balance+=interest;
        cout<<"Interest of "<<interest<<" deposited."<<endl;
    }
};

class CurrentAccount : public Account {
    const double minBalance=500;
    const double penalty=50;

public:
    void checkMinBalance() {
        if(balance<minBalance) {
            balance-=penalty;
            cout<<"Penalty of "<<penalty<<" imposed due to insufficient balance."<<endl;
        }
    }
    void withdraw(double amount) override {
        if(balance-amount>=minBalance) {
            balance-=amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        } else {
            cout<<"Cannot withdraw. Balance would fall below minimum limit!"<<endl;
        }
    }
};

int main() {
    SavingsAccount savAcc;
    CurrentAccount curAcc;
    savAcc.initialize("John Doe",12345,"Savings",1000);
    savAcc.deposit(500);
    savAcc.computeInterest();
    savAcc.displayBalance();
    savAcc.withdraw(300);
    savAcc.displayBalance();
    curAcc.initialize("Jane Doe",67890,"Current",800);
    curAcc.deposit(200);
    curAcc.checkMinBalance();
    curAcc.displayBalance();
    curAcc.withdraw(100);
    curAcc.checkMinBalance();
    curAcc.displayBalance();
}
