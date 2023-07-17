#include<bits/stdc++.h> 
using namespace std;
int main()
{ 
int *a =new int[10];  // dynamic memory allocation in array syntax
for(int i=0;i<10;i++)
{
cin>>a[i];
}
for(int i=0;i<10;i++)
{
cout<<a[i]<<" ";
}
cout<<endl;
delete[] a; // deleting a array
for(int i=0;i<10;i++)
{
cout<<a[i]<<" ";
}

return 0;
}
