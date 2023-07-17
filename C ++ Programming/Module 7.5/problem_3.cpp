#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    string b;
    cin>>b;
    int count=0;
    while(ss>>word)
    {
        if(word==b)
        {
       count++;
        }
            
        
    }
    cout<<count;
    return 0;
}