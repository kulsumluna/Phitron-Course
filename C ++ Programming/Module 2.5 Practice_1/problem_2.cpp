#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++) 
    {
        cin>>a[i]; // a array input niyeci
    }
    int m;
    cin>>m;
    int *b=new int[m];
    for(int i=0;i<m;i++)
    {
        b[i]=a[i]; // a array er element copy koreci b te
    }
    for(int i=n;i<m;i++)
    {
        cin>>b[i]; // b array input niyeci
    }
    delete []a;  // a array delete kore diyeci
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" "; //finally b array print koreci
    }
    
    return 0;
}