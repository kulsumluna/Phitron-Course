#include<bits/stdc++.h>
using namespace std;
class Student{  // class create koreci
        public:   // access speacifier
        char Name[100]; //ki kijinis lagbe amr
        int roll;
        int cls;
        char section;
};
int main()
{
    Student rahim;
    rahim.roll=556450;
    rahim.cls=12;
    rahim.section ='D';
    char nm[100]="Rahman Rahim";
    strcpy(rahim.Name,nm);


    Student kul;
    kul.roll=556440;
    kul.cls=12;
    kul.section='D';
    char nm2[100]="Kulsum Islam Luna";
    strcpy(kul.Name,nm2);

    cout<<kul.section;

    
    return 0;
}