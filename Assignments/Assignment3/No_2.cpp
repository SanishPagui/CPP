#include<iostream>
#include<cstring>
using namespace std;
class String{
    char str[21];
public:
    String(){
        str[0]=' '; 
    }
    String(char* input){
        strncpy(str,input,20);
        str[20]=' ';
    }
    String(String& other){
        strncpy(str,other.str,20);
        str[20]=' ';
    }
    String& operator=(String& o1){
        if (this!=&o1){
            strncpy(str,o1.str,20);
            str[20]=' ';
        }
        return *this;
    }
    friend String operator+(String& s1,String& s2){
        String temp;
        strncpy(temp.str,s1.str,20);
        temp.str[20]=' ';
        strncat(temp.str,s2.str,20-strlen(temp.str));
        temp.str[20]=' ';
        return temp;
    }
    void display() const{
        cout<<str<<endl;
    }
};
int main(){
    String str1("Hello");
    String str2("World");
    cout<<"String 1: ";
    str1.display();
    cout<<"String 2: ";
    str2.display();
    String str3=str1 + str2;
    cout<<"Concatenated String: ";
    str3.display();
    String str4;
    str4=str1;
    cout<<"str4=str1: ";
    str4.display();
    return 0;
}
