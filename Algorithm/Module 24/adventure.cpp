#include<bits/stdc++.h>
using namespace std;
int dp[10005][1005];
int knapsack(int n,int s,int v[],int w[])
{
    //base case
    if(n==0||s==0) 
    return 0;

    if(dp[n][s] != -1) 

{
    return dp[n][s];
}
    if(v[n-1]<=s)
    {
      int option1= knapsack(n-1,s-v[n-1],v,w) + w[n-1];
    int option2= knapsack(n-1,s,v,w);
    return dp[n][s]= max(option1,option2);
    }
    else
    {
        return dp[n][s] = knapsack(n-1,s,v,w);
    }
  
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int s;
     cin>>s;
    int v[n],w[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
   // initially sobgulo -1 hobe
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=s;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(n,s,w,v)<<endl;   
    }
   return 0;
} 