#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class Deque{
    string *str;
    int front,rear;
    int n;
    int countfront=0,countrear=0;
    public:
        int temp=0;
        Deque(){
            cout<<"Enter the size of the string array: ";
            cin>>n;
            front=0;
            rear=0;
            str=new string[n];
        }
        void pushFront(int p){
            if(countrear>countfront){
                cout<<"The Deque is full\n";
                return;
            }
            if(countfront+countrear==n){
                cout<<"The Deque is full\n";
                return;
            }
            cout<<"Enter the string: ";
            cin>>str[front++];
            countfront++;
            temp=front;
        }
        void pushBehind(int p){
            if((countrear>p && countfront+countrear==n)){
                cout<<"The Deque is full\n";
                return;
            }
            if(countfront+countrear==n){
                cout<<"The Deque is full\n";
                return;
            }
            if(rear==0)
                rear=front;
            cout<<"Enter the string: ";
            cin>>str[rear++];
            countrear++;
        }
        void forEach(){
            if(front==0 && rear==0){
                cout<<"Deque Empty\n";
                return;
            }
            cout<<"\nThe deque is:\n";
            for(int i=0;i<(countfront+countrear);i++){
                cout<<setw(10)<<left<<str[i]<<"\t";
            }
            cout<<"\nThe front elements you have added are:\n";
            for(int i=0;i<front;i++){
                cout<<setw(10)<<left<<str[i]<<"\t";
            }
            cout<<"\nThe rear elements you have added are:\n";
            for(int i=front;i<rear;i++){
                cout<<setw(10)<<left<<str[i]<<"\t";
            }
        }
        void firstThat(){
            string match;
            int flag=0,i;
            cout<<"Enter the string you want to search for: ";
            cin>>match;
            for(i=0;i<(countfront+countrear);i++){
                if(str[i].compare(match)==0){
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout<<"String found at location "<<i+1;
            else
                cout<<"String not found";
        }
        void getLeft(){
            if(front==0){
                cout<<"Deque Empty\n";
                return;
            }
            printf("\nThe deleted strings from front are: \n");
            while((--front)>=0){
                cout<<setw(10)<<left<<str[front]<<"\t";
                countfront--;
            }
            front=countfront=0;
        }
        void getRight(){
            if(rear==temp){
                cout<<"Deque Empty\n";
                return;
            }
            printf("\nThe deleted strings from rear are: \n");
            while(rear>temp){
                cout<<setw(10)<<left<<str[--rear]<<"\t";
                countrear--;
            }
            rear=countrear=0;
        }
};
int main(){
    Deque d;
    int choice,n;
    string str;
    do{
        cout<<"\n\n1.Push\n2.To Pop from left side\n3.To Pop from right side\n4.Display\n5.Search\n6.Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the number of elements you want to push from front: ";
                cin>>n;
                for(int i=0;i<n;i++){
                    d.pushFront(n);
                }
                cout<<"Enter the number of elements you want to push from rear: ";
                cin>>n;
                for(int i=0;i<n;i++){
                    d.pushBehind(n);
                }
                break;
            case 2:
                d.getLeft();
                break;
            case 3:
                d.getRight();
                break;
            case 4:
                d.forEach();
                break;
            case 5:
                d.firstThat();
                break;
            case 6:
                exit(1);
        }
    }while(1);
}
