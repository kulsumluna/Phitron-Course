#include<bits/stdc++.h>

using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(int r,char s,int c,int m,char* n)
    {
        roll=r;
        section=s;
        cls=c;
        math_marks=m;
        strcpy(name,n);
        }

};
int main()
{    
    char nm1[100]={"Luna Islam"};
    Student luna(556450,'A',12,97,nm1);
    char nm2[100]={"Sanjin Nahar"};
    Student sanjin(548970,'A',12,90,nm2);
    char nm3[100]={"Maryaam Nuha"};
    Student nuha(556458,'A',12,87,nm3);
    
    int mx_1=max(sanjin.math_marks,luna.math_marks);
    int mx_2=max(mx_1,nuha.math_marks);
    if(mx_2==(luna.math_marks))
    {
        cout<<mx_2<<endl<<luna.name;
    }
    else if(mx_2==sanjin.math_marks)
   {
    cout<<mx_2<<endl<<sanjin.name;
     }
     else
     {
        cout<<mx_2<<endl<<nuha.name;
     }

    return 0;
}