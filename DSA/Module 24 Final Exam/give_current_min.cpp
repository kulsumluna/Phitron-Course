#include<bits/stdc++.h>
using namespace std;

int main(){

   
    priority_queue<int,vector<int>,greater<int>> pq;// decending koreci min er jnno 
  
    int t; cin >> t;
    while (t--)
    {
        int val ;
         cin >> val;
        pq.push(val);
    }


    
    int q; 
    cin >> q;

    while (q--)
    {
       
        int n;
         cin >> n;

        if(n == 0){ // insert korar jnno
            int x; cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (n == 1) // delete er jnno
        {
             if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (n == 2)
        {
             if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else{
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else{
                    cout << pq.top() << endl;
                }
            }
            
        }
        
    }
    


    return 0;
}