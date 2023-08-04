//https://docs.google.com/document/d/1EsIyHH5ja2I95iEwr96xSz-C-NLUurpvy6qV_iRb5Gs/edit?usp=sharing
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            cout<<i;
            break;
        }
    }
    if(flag==0) cout<<"Not Found";
    
    return 0;
}