#include<bits/stdc++.h>

using namespace std;
 class person
 {
    public:
    string name;
    int age;
    int m1;
    int m2;
    person(string name,int age,int m1,int m2)
    {
         this->name=name;
       this->age= age;
       this->m1= m1;
       this->m2= m2;
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