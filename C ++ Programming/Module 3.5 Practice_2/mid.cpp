#include<bits/stdc++.h>
using namespace std;
class Myclass   //The class
{
public:         //access specifier
int num;
string name;
};
int main(){
Myclass my_object;      // create an object Myclass
my_object.num=30;
my_object.name="Kulsum Islam luna";
cout<<my_object.name<<endl;
cout<<my_object.num<<endl;
return 0;
}
