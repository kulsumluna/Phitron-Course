#include<bits/stdc++.h>

using namespace std;
 class person
 {
    public:
    string name;
    int age;
    int m1;
    int m2;
    person(string nm,int ag,int m3,int m4)
    {
        name=nm;
        age=ag;
        m1=m3;
        m2=m4;
    }
    void fun()
    {
        cout<<"Details rahim"<<endl;
       cout<<"Name is : "<< name<<endl<<"Age is : "<< age<<endl;
    }
    int marks()
    {
         int total=m1+m2;
         return total;

    }

 };
int main()
{
    person rahim("Rahim Ullah",54,100,40);
    rahim.fun();
    cout<<rahim.marks();

    
    return 0;
}