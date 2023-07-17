#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v={10,30,50,70,80};
    v.erase(v.begin()+2);
    // v.erase(v.begin()+1,v.end()-1); // multiple element delete krte chaile
    for(int c:v)
    {
        cout<<c<<" ";
    }

    return 0;
}