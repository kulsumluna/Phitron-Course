#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *a=new int[n]; // dynamic memory allocation
    for(int i=0;i<n;i++)
  {
    cin>>a[i];
  } 
  // ascending sorting
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            swap(a[i],a[j]);
        }
    }
  }
  
    for(int i=0;i<n;i++) // print sorting array
  {
    cout<<a[i]<<" ";
  }
    return 0;
}