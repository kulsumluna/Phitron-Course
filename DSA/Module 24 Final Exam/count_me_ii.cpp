#include<bits/stdc++.h>
using namespace std;

int main(){
   
    int q; 
    cin >> q;

    while (q--)
    {
        map<int,int>mp;
        int n;
         cin >> n;
        while (n--)
        {
            int val; cin >> val;
            mp[val]++;
        }
        
       
        int largest;
        int countMax = 0;
           for(auto m=mp.begin();m!=mp.end();m++){
            if(m->second > countMax){
                countMax = m->second;
                largest = m->first;
            }
        }
       
        // for(auto && s : mp)
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second == countMax &&it->first > largest){
                largest = it->first;
            }
        }
    cout << largest <<" "<< countMax<< endl;
    }
    
     

    return 0;
}