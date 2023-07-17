#include<bits/stdc++.h>

using namespace std;
int main()
{ 
    int n;
    cin>>n;
    int count[26]={0};
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        count[a-'a']++; // count jehedu int tai char a theke a biyog kore 0 kore feleci
        }
        for(char i='a';i<='z';i++)
        {
            if(count[i -'a']>0) //jodi count 0 er besi hoi thle loop ee jabe
            {
                for(int j=0;j<count[i-'a'];j++) //kotober ace totber print krbo i ke
                {
                cout<<i;
                }
            }
        }
    
    return 0;
}