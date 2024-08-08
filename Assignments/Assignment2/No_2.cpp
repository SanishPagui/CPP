#include<iostream>
#include<iomanip>
using namespace std;
class Cricketers{
    string name;
    int runs;
    int innings;
    int not_out;
    float avg;
    public:
    Cricketers(string nam,int r,int i,int no){
        name=nam;
        runs=r;
        innings=i;
        not_out=no;
    }
    void calculateAvg(){
        avg=(float)runs/(float)(innings-not_out);
    }
    void display(){
        cout<<setw(20)<<left<<name;
        cout<<setw(20)<<left<<runs;
        cout<<setw(20)<<left<<innings;
        cout<<setw(20)<<left<<not_out;
        cout<<setw(20)<<left<<avg<<endl;
    }
};
void header(){
    cout<<setw(20)<<left<<"Player's name";
    cout<<setw(20)<<left<<"Runs";
    cout<<setw(20)<<left<<"Innings";
    cout<<setw(20)<<left<<"Times not out";
    cout<<setw(20)<<left<<"Average"<<endl;
}
int main(){
    Cricketers c1("Sachin",8430,230,18);
    Cricketers c2("Saurav",4200,130,9);
    Cricketers c3("Rahul",3350,105,11);
    c1.calculateAvg();
    c2.calculateAvg();
    c3.calculateAvg();
    header();
    c1.display();
    c2.display();
    c3.display();
}