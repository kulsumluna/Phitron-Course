#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    int t; 
    cin >> t;
     while (t--)
    {
        
    set<int> st;
       
    priority_queue<int> pq;

        
        int n;
         cin >>n;
        while (n--)
        {
            int val; cin >> val;
            st.insert(val);  // set ee input nile duplicate remove hoi
        }
        
        for(auto i : st){  // prority queue te push krle seta ascending order hoyei jai
            pq.push(i);
        }
        
        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        
        cout << endl;
        

     }
     

    return 0;
}