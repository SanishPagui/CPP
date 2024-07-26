// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of Fibonacci numbers you want:";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int a=1,b=1,c=0;
//         for(int j=0;j<i+1;j++){
//             cout<<a<<"  ";
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of Fibonacci numbers you want:";
    cin>>n;
    int i=1;
    while(i<n){
        int a=1,b=1,c=0;
        int j=0;
        while(j<i+1){
            cout<<a<<"  ";
            c=a+b;
            a=b;
            b=c;
            j++;
        }
        i++;
        cout<<endl;
    }
}