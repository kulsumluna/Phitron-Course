#include<bits/stdc++.h>

using namespace std;
 class person
 {
    public:
    string name;
    int age;

    person(string name,int age)
    {
         this->name=name;
       this->age= age;
       
    }

 };
int main()
{
    person* rahim=new person("Rahim Ullah",54);
    person* karim=new person("Kariim Ullah",50);
    // rahim=karim;  // ata krbo na amra
    // rahim->name=karim->name; // ata kora jabe but krbo na
    // rahim->age=karim->age;
    *rahim=*karim;  // aita sbsmy krbo
    delete karim;
    cout<<rahim->name<<endl<<rahim->age;
   
    
    return 0;
}