#include<bits/stdc++.h>

using namespace std;
int main()
{
    
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        stack<char> s1;
    stack<char> s2;
        for( char c:s)
        {
            if(c=='B')
            {
                s1.push(c);
            }
            if(c=='A')
            {
                s2.push(c);
            
            }
        }
        if(s1.size()==s2.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}