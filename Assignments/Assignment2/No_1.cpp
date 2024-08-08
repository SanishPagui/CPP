#include<iostream>
using namespace std;
int main(){
    int n,vote,count=0,spoilt_ballot=0;
    cout<<"Enter the number of people voted: ";
    cin>>n;
    cout<<endl; 
    for(int i=0;i<n;i++){
        cout<<"Voter "<<i+1<<",Enter the candidate number between (1-5):";
        cin>>vote;
        if(vote<=0 || vote>5)
            spoilt_ballot++;
        else
            count++;
    }
    cout<<"\nThe total number of valid ballots is: "<<count<<endl;
    cout<<"The total number of spoilt ballets is "<<spoilt_ballot;
}