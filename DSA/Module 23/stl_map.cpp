#include<bits/stdc++.h>

using namespace std;
int main()
{
    map<string,int> m;
    // m.insert({"Sakib",10});
    // m.insert({"Rakib",20});
    // m.insert({"Luna",40});
    // m.insert({"Nakib",30});
    m["Sakib"]=100;  //O(logN)
    m["Rakib"]=200;
    m["Nakib"]=50;
    m["Takib"]=600;
    // cout<<m["Nakib"]<<endl;  // dekhar shortcut way  // jodi na thake thle 0 dibe
    for(auto it=m.begin();it !=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;  //O(logN)
    }
    // if(m.count("akib"))
    // {
    //     cout<<"Ace"<<endl;
    // }
    // else
    // {
    //     cout<<"Nei"<<endl;
    // }
    return 0;
}