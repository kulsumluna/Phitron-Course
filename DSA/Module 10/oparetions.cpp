#include<bits/stdc++.h>

using namespace std;
int main()
{
    list<int> mylist= {10,40,10,34,10,67,30,10};
    // mylist.remove(10);
    mylist.sort();  // accending
    // mylist.sort(greater<int>());  //decending order
    mylist.unique();
    // mylist.reverse();
    for(int v: mylist)
    {
        cout<<v<<endl;
    }
    return 0;
}