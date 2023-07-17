#include<bits/stdc++.h>
using namespace std;
class Student{  // class create koreci
        public:   // access speacifier
        char Name[100]; //ki kijinis lagbe amr
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char *n){  //contructor method
             roll=r;
             cls=c;
             section=s;
             strcpy(Name,n);

        }
};
int main()
{
    Student rahim(5564,'A',12,"Rahman Rahim");
   Student karim(556456,'D',12,"krim Rahim");

    cout<<karim.Name<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    
    return 0;
}