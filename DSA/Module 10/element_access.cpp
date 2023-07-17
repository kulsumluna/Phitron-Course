#include<bits/stdc++.h>

using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50,60};
    // cout<<mylist.front();   // haed ber krte chaile
    // cout<<mylist.back(); // tail ber krte chaile
    cout<<*next(mylist.begin(),3);  // majher kono jinis acces krte chaile
    return 0;
}