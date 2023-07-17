#include<bits/stdc++.h>

using namespace std;
namespace luna{
    int age=19;
    void luna1()
    {
        cout<<"Luna namespaces"<<endl;

    }
}
namespace sanjin{
    int age2=20;
    void sanjin1()
    {
        cout<<"Sanjin naemspaces"<<endl;
        
    }
}
using namespace luna;
using namespace sanjin;
int main()
{
    cout<<age<<endl<<age2<<endl;
   luna1();
   sanjin1(); // Avabeo kora jabe onnovabeo jabe


    
    return 0;
}