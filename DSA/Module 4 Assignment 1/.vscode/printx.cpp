#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int n_x=n/2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(n_x==i)
                {
                    cout<<"X";
                    continue;
                }
                else
                {
                    cout<<"\\";
                    continue;
                }
            }
            if(i+j==n-1)
            {
                cout<<"/";
                continue;
            }
        }
    }
    cout<<endl;
    return 0;
}