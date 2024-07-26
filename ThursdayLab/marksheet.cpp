#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int rno;
    int marks[6];
    string grade[6];
    int gp[6];
    float sgpa;
    string status;
};

void Grade(struct student s[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            switch(s[i].gp[j]){
                case 10:
                    s[i].grade[j]='O';
                    break;
                case 9:
                    s[i].grade[j]="A+";
                    cout<<"Hello";
                    break;
                case 8:
                    s[i].grade[j]='A';
                    break;
                case 7:
                    s[i].grade[j]="B+";
                    break;
                case 6:
                    s[i].grade[j]='B';
                    break;
                case 5:
                    s[i].grade[j]='C';
                    break;
                case 4:
                    s[i].grade[j]='P';
                    break;
                default:
                    s[i].grade[j]='F';
            }
        }
    }
}

void GradePoint(struct student s[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            if(s[i].marks[j]>84)
                s[i].gp[j]=10;
            else if(s[i].marks[j]>74)
                s[i].gp[j]=9;
            else if(s[i].marks[j]>64)
                s[i].gp[j]=8;
            else if(s[i].marks[j]>54)
                s[i].gp[j]=7;
            else if(s[i].marks[j]>49)
                s[i].gp[j]=6;
            else if(s[i].marks[j]>44)
                s[i].gp[j]=5;
            else if(s[i].marks[j]>39)
                s[i].gp[j]=4;
            else
                s[i].gp[j]=0;
        }
    }
}

void CalculateSgpa(struct student s[],int n){
    for(int i=0;i<n;i++){
        s[i].sgpa=0;
        for(int j=0;j<6;j++){
            if(s[i].gp[j]==0){
                s[i].sgpa=0;
                break;
            }
            s[i].sgpa+=(s[i].gp[j]*4)/24;
        }
    }
}

void DetermineStatus(struct student s[],int n){
    for(int i=0;i<n;i++){
        if(s[i].sgpa==0)
            s[i].status="Fail";
        else
            s[i].status="Pass";
    }
}
void Padding(string str,int width){
    int padding=(width-str.length())/2;
    for(int k=0;k<padding;k++)
            cout<<" ";

}
void RevPadding(string str,int width){
    int padding=(width-str.length())/2;
    int revpadding=padding+str.length();
    for(int k=revpadding;k<width;k++)
        cout<<" ";
}
void IntPadding(int n,int width){
    int length=0;
    if(n==0)
        length=1;
    while(n>0){
        n/=10;
        length++;
    }
    int padding=(width-length)/2;
    for(int k=0;k<padding;k++)
        cout<<" ";
}
void RevIntPadding(int n,int width){
    int length=0;
    if(n==0)
        length=1;
    while(n>0){
        n/=10;
        length++;
    }
    int padding=(width-length)/2;
    int revpadding=(width+length)/2;
    for(int k=revpadding;k<width;k++)
        cout<<" ";
}
void Display(struct student s[],int n){
    string subjects[6]={"Maths","Logic Design","Data Stuctures","Object Oriented Programming","Technical communication","Computer Organisation"};
    for(int i=0;i<n;i++){
        cout<<"\nName: "<<s[i].name<<endl;
        cout<<"Roll Number: "<<s[i].rno<<endl;
        Padding("Semester Result",90);
        cout<<"Semester Result"<<endl;
        Padding("Subjects",30);
        cout<<"Subjects";
        RevPadding("Subjects",30);
        Padding("Marks",20);
        cout<<"Marks";
        RevPadding("Marks",20);
        Padding("Garde",20);
        cout<<"Grade";
        RevPadding("Grade",20);
        Padding("Grade Point",20);
        cout<<"Grade Point"<<endl;
        for(int j=0;j<6;j++){
            Padding(subjects[j],30);
            cout<<subjects[j];
            RevPadding(subjects[j],30);
            IntPadding(s[i].marks[j],20);
            cout<<s[i].marks[j];
            RevIntPadding(s[i].marks[j],20);
            Padding(s[i].grade[j],20);
            cout<<s[i].grade[j];
            RevPadding(s[i].grade[j],20);
            IntPadding(s[i].gp[j],20);
            cout<<s[i].gp[j];
            RevIntPadding(s[i].gp[j],20);
            cout<<"\n"<<endl;
        }
        cout<<"SGPA:"<<s[i].sgpa<<endl;
        cout<<"Status:"<<s[i].status<<endl;
    }
}
int main(){
    int n,rollno=0;
    cout<<"Enter the number of students: ";
    cin>>n;
    struct student s[n];
    cout<<"Enter the details of the studentS\n"<<endl;
    for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Student "<<i+1<<endl;
        cout<<"Name:";
        getline(cin,s[i].name);
        s[i].rno=++rollno;
        cout<<"Enter the marks in Maths:";
        cin>>s[i].marks[0];
        if(s[i].marks[0]>100)
            s[i].marks[0]=100;
        cout<<"Enter the marks in Logic Design:";
        cin>>s[i].marks[1];
        if(s[i].marks[1]>100)
            s[i].marks[1]=100;
        cout<<"Enter the marks in Data Structures:";
        cin>>s[i].marks[2];
        if(s[i].marks[2]>100)
            s[i].marks[2]=100;
        cout<<"Enter the marks in Object Oriented Programming:";
        cin>>s[i].marks[3];
        if(s[i].marks[3]>100)
            s[i].marks[3]=100;
        cout<<"Enter the marks in Technical communication:";
        cin>>s[i].marks[4];
        if(s[i].marks[4]>100)
            s[i].marks[4]=100;
        cout<<"Enter the marks in Computer Organisation:";
        cin>>s[i].marks[5];
        if(s[i].marks[5]>100)
            s[i].marks[5]=100;
        cout<<"\n";
    }   
    GradePoint(s,n);
    Grade(s,n);
    CalculateSgpa(s,n);
    DetermineStatus(s,n);
    Display(s,n);
}