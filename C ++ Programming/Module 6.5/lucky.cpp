#include<bits/stdc++.h>

using namespace std;
int main()
{   int n;
cin>>n;
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    int c1=0;
    int c2=0;
    for(int i=0;i<3;i++)
    {
        c1=c1+(s[i]-48);
        }

     for(int i=3;i<=5;i++)
    {
        c2=c2+(s[i]-48);
        
    }
    if(c1==c2)
    {
    cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}

    return 0;
}