#include<bits/stdc++.h>
using namespace std;
class Person{
public:
char name[100];
float height;
int age;
Person(char* x,float y,int z) // constructor method
{
strcpy(name,x);
height=y;
age=z;
}
};
int main()
{ 
    char nm_1[100]="Kulsum Islam Luna";
Person*luna=new Person(nm_1,5.2,20); // dynamic object
cout<<luna->name<<endl;
cout<<luna->height<<endl;
cout<<luna->age<<endl;
return 0;
}
