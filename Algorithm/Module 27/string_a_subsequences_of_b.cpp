#include<bits/stdc++.h>

using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    //normal rules
    int x=0;
    bool flag=false;
    for(char c:b)
    {
        if(c== a[x])
        {
            x++;
        }
        if(x== a.size())
        {
         flag=true;
         break;
        }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}