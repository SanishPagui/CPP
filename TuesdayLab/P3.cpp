#include<iostream>
using namespace std;
class Mat{
    int *m;
    int **n;
    int row;
    int col;
public:
    Mat(int r,int c){
        row=r;
        col=c;
        m=new int;
        n=new int*[row];
        for(int i=0;i<row;i++){
            n[i]=new int[col];
            for(int j=0;j<col;j++){
                n[i][j]=0;
            }
        }
    }
    void insert(){
        for(int i=0 ;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<"Enter element at ["<<i<<"]["<<j<<"]: ";
                cin>>n[i][j];
            }
        }
    }
    Mat operator +(Mat m){
        if(m.col!=col || m.row!=row){
            cout<<"Addition not possible";
            exit(1);
        }
        Mat temp(row,col);
        for(int i=0 ;i<row;i++){
            for(int j=0;j<col;j++){
                temp.n[i][j]=n[i][j] + m.n[i][j];
            }
        }
        return temp;
    }
    Mat operator -(Mat m){
        if(m.col!=col || m.row!=row){
            cout<<"Subtraction not possible";
            exit(1);
        }
        Mat temp(row,col);
        for(int i=0 ;i<row;i++){
            for(int j=0;j<col;j++){
                temp.n[i][j]=n[i][j] - m.n[i][j];
            }
        }
        return temp;
    }
    Mat operator *(Mat x){
        if(col!=x.row){
            cout<<"Multiplication not possible";
            exit(1);
        }
        Mat temp(row,x.col);
        for(int i=0;i<row;i++){
            for(int j=0;j<x.col;j++){
                for(int k=0;k<col;k++){
                    temp.n[i][j] += n[i][k] * x.n[k][j];
                }
            }
        }
        return temp;
    }
    Mat &operator *(int x){
        for(int i=0 ;i<row;i++){
            for(int j=0;j<col;j++){
                n[i][j]=n[i][j] * x;
            }
        }
        return *this;
    }
    void display(){
        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    
};
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the number of row of Matrix 1: ";
    cin>>r1;
    cout<<"Enter the number of columns of Matrix 1: ";
    cin>>c1;
    cout<<"Enter the number of row of Matrix 2: ";
    cin>>r2;
    cout<<"Enter the number of columns of Matrix 2: ";
    cin>>c2;
    Mat m1(r1,c1),m2(r2,c2),m3(r1,c2);
    cout<<"Enter the elements of Matrix 1: "<<endl;
    m1.insert();
    cout<<"Enter the elements of Matrix 2: "<<endl;
    m2.insert();
    cout<<"Matrix 1:"<<endl;
    m1.display();
    cout<<"Matrix 2:"<<endl;
    m2.display();
    m3=m1 + m2;
    cout<<"Addition: "<<endl;
    m3.display();
    m3=m1 - m2;
    cout<<"Subtraction: "<<endl;
    m3.display();
    m3=m1 * m2;
    cout<<"Multiplication: "<<endl;
    m3.display();
    cout<<"Multiplication with Scalar: "<<endl;
    m3=m1 * 2;
    m3.display();
}
