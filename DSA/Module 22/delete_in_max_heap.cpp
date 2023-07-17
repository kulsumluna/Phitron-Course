#include<bits/stdc++.h>

using namespace std;
void insert(vector<int> &v,int x)
{
    v.push_back(x);
    int cur_index=v.size()-1;
      while(cur_index !=0)
   {
     int parent_index= (cur_index-1)/2;
     if(v[cur_index]>v[parent_index])
    {
        swap(v[cur_index],v[parent_index]);
        cur_index=parent_index;
    }
    else break;
   }
}
void delete_heap(vector<int> &v)
{
    v[0]=v[v.size()-1];
    v.pop_back();
    int cur_index=0;
    while(true)
    {
        int left=cur_index*2 +1;
        int right=cur_index*2 +2;
        int last_index= v.size()-1;
        if(left<= last_index && right<=last_index)
        {
           //duitai ace 
           if(v[left]>=v[right] && v[left]>v[cur_index])
           {
            swap(v[left],v[cur_index]);
            cur_index=left;
           }
           else if(v[right]>=v[left] && v[right]>v[cur_index])
           {
            swap(v[right],v[cur_index]);
            cur_index=right;
           }
           else
           {
            break;
           }
        }
        else if(left<=last_index)
        {
            //left ace
            if(v[left]>v[cur_index])
            {
                swap(v[left],v[cur_index]);
                cur_index=left;
            }
            else
            {
                break;
            }
        }
        else if(right<=last_index)
        {
            //right ace
             if(v[right]>v[cur_index])
            {
                swap(v[right],v[cur_index]);
                cur_index=right;
            }
            else
            {
                break;
            }
        }
   else
   {
    break;
   }
    }
}
void print_heap(vector<int> v)
{
      for(int val:v) cout<<val<<" ";
      cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert(v,x);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;  // complexity O(logN) ekta delete krte abong sob krte O(NlogN)
}