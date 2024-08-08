// Write a C++ program using class string to create two strings and perform the following
// operations on the strings
// i. To add two string type objects (s1 = s2 + s3) where s1,s2,s3 are objects
// ii. To compare two string lengths to print which string is smaller & print accordingly.
#include<iostream>
#include<string>
using namespace std;
class String{
    string str;
    int len;
    public:
        String(){
            str="";
        }
        friend istream &operator>>(istream &in,String &s){
            cout<<"Enter a string: ";
            in>>s.str;
            s.len=s.str.length();
            return in;
        }
        friend ostream &operator<<(ostream &out,String &s){
            out<<"The strings is: ";
            out<<s.str;
            out<<"\nThe length of the string is: ";
            out<<s.len<<endl;
            return out;
        }
        String operator+(String &s){
            String temp;
            temp.str=str+" "+s.str;
            cout<<"The combined string is: "<<temp.str;
            return temp;
        }
        friend void compare(String &s2,String &s3){
            if(s2.len>s3.len)
                cout<<"\nLength of the string "<<s2.str<<" > "<<"Length of the string "<<s3.str;
            else
                cout<<"\nLength of the string "<<s3.str<<" > "<<"Length of the string "<<s2.str;
        }
};
int main(){
    String s1,s2,s3;
    cin>>s2;
    cin>>s3;
    cout<<s2;
    cout<<s3;
    s1=s2+s3;
    compare(s2,s3);
}