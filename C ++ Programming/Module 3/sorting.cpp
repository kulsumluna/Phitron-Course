#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int * a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // sorting ascending
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // sort decending
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}