#include<bits/stdc++.h>

using namespace std;
int lower(vector<int>&v,int x)
{
    int left=0,right=v.size()-1,result;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]>=x)
              {
             result=mid;
             right=mid-1;
            }
            else
            {
                left=mid+1;
            }
    }
    return result;
}
int upper(vector<int>&v,int x)
{

    int left=0,right=v.size()-1,result;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]>x)
              {
             result=mid;
             right=mid-1;
            }
            else
            {
                left=mid+1;
            }
    }
    return result-1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    while(n--)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cin>>x;
    int low=lower(v,x);
    int up=upper(v,x);
    if(v[low]==v[up]&& low!=up)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}