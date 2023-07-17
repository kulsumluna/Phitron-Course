#include<bits/stdc++.h>

using namespace std;
class CusSort{
public:
char c;
int cnt;
};
bool cmp(CusSort a, CusSort b)
{
    if(a.cnt>b.cnt) return true;
    else return false;
}
int main()
{
int n;
cin>>n;
  CusSort frq[26];
  for(int i=0;i<26;i++)
  {
    frq[i].c=(i+'a');
    frq[i].cnt=0;
  }
//   for(int i=0;i<26;i++)
//   {
//     cout<<frq[i].c<<" "<<frq[i].cnt<<endl; // proti char asce kina check korci
//   }
  
    for(int i=0;i<n;i++){

   char c;
   cin>>c;
  frq[c-'a'].cnt++;
  }
  // sorting function
  sort(frq,frq+26,cmp);
  for( int i=0;i<26;i++)
  {
    if(frq[i].cnt>0)
    {
  for(int j=0;j<frq[i].cnt;j++)
  
  {
    cout<<frq[i].c;
  }

    }
  }


    
    return 0;
}