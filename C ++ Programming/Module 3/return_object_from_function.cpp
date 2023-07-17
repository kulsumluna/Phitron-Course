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
        Student fun()
        {    
            char nm[100]="Karim Uliullah";
            Student karim(556456,'D',12,nm);
            return karim;
        }

int main()
{
//     Student rahim(5564,'A',12,"Rahman Rahim");
   Student karim= fun();
      
    cout<<karim.Name<<endl;
    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    
    return 0;
}