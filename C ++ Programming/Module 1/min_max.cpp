#include<iostream>
#include<algorithm>
using namespace std;
// int mini(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }
// int maxi(int a,int b)
// {
//     if(a>b) return a;
//     else return b;
// }

int main()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);
    cout<<mn<<" "<<mx<<endl;

    return 0;
}