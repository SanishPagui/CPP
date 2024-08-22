#include <iostream>
#include <cstring>
using namespace std;
class String{
    char *str;
public:
    String(){
        str=NULL;
    }
    String(const char *s){
        str=new char[strlen(s)+1];
        strcpy(str,s);
    }
    String(const String &obj){
        str=new char[strlen(obj.str)+1];
        strcpy(str,obj.str);
    }
    ~String(){
        delete[] str;
    }
    friend istream &operator>>(istream &is,String &obj){
        char temp[1000];
        is>>temp;
        obj.str=new char[strlen(temp)+1];
        strcpy(obj.str,temp);
        return is;
    }
    friend ostream &operator<<(ostream &os,const String &obj){
        os<<obj.str;
        return os;
    }
    String operator+(const String &a)const{
        String temp;
        temp.str=new char[strlen(str)+strlen(a.str)+1];
        strcpy(temp.str,str);
        strcat(temp.str,a.str);
        return temp;
    }
    int length()const{
        return strlen(str);
    }
};
int main(){
    String a,b,c;
    cout<<"Enter string 1: ";
    cin>>a;
    cout<<"Enter string 2: ";
    cin>>b;
    c=a+b;
    cout<<"\nConcatenation: "<<c<<endl;
    if(a.length()==b.length())
        cout<<"Both strings are equal in length."<<endl;
    else if(a.length()<b.length())
        cout<<"String 1 is shorter than String 2."<<endl;
    else
        cout<<"String 2 is shorter than String 1."<<endl;
}
