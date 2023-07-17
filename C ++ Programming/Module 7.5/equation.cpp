#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int sum=0;
    
  
    for(int i=2;i<=b;i=i+2)
    {
        sum=sum+pow(a*(1.0),i*(1.0));     
    }
    cout<<sum;
    return 0;
}