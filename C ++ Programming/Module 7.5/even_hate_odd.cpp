#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else if(even==odd)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int half=n/2;
            int count=abs(odd-half);
            cout<<count<<endl;
        }

    }
    return 0;
}