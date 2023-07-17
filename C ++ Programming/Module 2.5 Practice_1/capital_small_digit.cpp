#include<bits/stdc++.h>

using namespace std;
int main()
{
    char n;
    cin>>n;
    if(n>='0' && n<= '9')
    {
        cout<<"IS DIGIT"<<endl;
    }
     else
    {
        cout<<"ALPHA"<<endl;

         if(n>='a' && n<='z')
        {
            cout<<"IS SMALL"<<endl;
        }
        else
        {
            cout<<"IS CAPITAL"<<endl;
        }
    }
    return 0;
}