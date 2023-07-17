#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    int test; // test case niyeci
    cin>>test;
    for(int i=0;i<test;i++)
    {
     int n;
    cin >> n;
    cin.ignore(); // int er por string nile ignore nite hobei
    string s;
    cin>>s;
 
    int count[26] = {0}; // protita letter er count=0 kore rekheci
    int sum=0;
   
    for(int i = 0; i < n; i++)
    { 
       if (count[s[i] - 'A'] == 0) // jodi letter prothom ber ashe thle 0 dhorbo
        {
           sum=sum+2;  // 1st time asle 2 jog krbo
           count[s[i]-'A']=1;
        }  
     else if (count[s[i] - 'A'] == 1) // jodi letter ti second time ashe thle 1 dhorbo
        {
            sum=sum+1;  // 2nd time asle 1 jog krbo
            count[s[i]-'A']=1;
        }
        
    }
    cout<<sum<<endl;
    return 0;
    
} }