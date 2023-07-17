#include<bits/stdc++.h>

using namespace std;
class Student
{  
    public:
  string Name;
  int roll;
  int marks;
};
int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
{  
    getline(cin,a[i].Name);
    // cin>>a[i].Name;
    cin>>a[i].roll>>a[i].marks;
    cin.ignore(); //marks newor por amra enter click kori enter jeno input na nei tai ignore korci
}
     for(int i=0;i<3;i++)
{
    cout<<a[i].Name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
}
    
    return 0;
}