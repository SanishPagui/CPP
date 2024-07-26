#include<iostream>
#include<iomanip>
using namespace std;
float UnitCharges(int units){
    float price;
    if (units <= 100)
        price = units * 0.6;
    else if (units <= 200)
        price = (units - 100) * 0.8 + 60;
    else
        price = 60 + 80 + (units - 200) * 0.9;
    if (price < 50)
        return 50.0;
    else if (price > 300)
        price += price * 0.15;
    return price;
}
int main(){
    int n,i;
    cout<<"Enter the number of users:";
    cin>>n;
    string name[n];
    int units[n];
    float charges[n];
    cout<<"\nEnter the details"<<endl;
    cin.ignore();
    for(i=0;i<n;i++){
        cout<<"\nName: ";
        getline(cin,name[i]);
        cout<<"Units consumed: ";
        cin>>units[i];
        cin.ignore();
    }
    cout<<"\n"<<setw(20)<<left<<"Names"<<setw(20)<<left<<"Charges"<<endl;
    for(i=0;i<n;i++){
        charges[i]=UnitCharges(units[i]);
        cout<<setw(20)<<left<<name[i]<<setw(20)<<left<<charges[i]<<endl;
    }
}