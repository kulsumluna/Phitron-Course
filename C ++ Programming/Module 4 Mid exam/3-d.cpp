#include<bits/stdc++.h>
using namespace std;
class Person{
public:
char name[100];
float height;
int age;
Person(char* x,float y,int z) // constructor method
{
strcpy(name, x);;
height=y;
age=z;
}
};
int main()
{ 
    char nm_1[100]="Kulsum Islam Luna";
    char nm_2[100]="Sanjin Nahar";
Person*luna=new Person(nm_1,5.2,18); // dynamic object
Person*sanjin=new Person(nm_2,5.3,20); // dynamic object
if(luna->age>sanjin->age)
{
    cout<<"Name: "<<luna->name;

}
else
{
   cout<<"Name: "<<sanjin->name; 
}
return 0;
}
