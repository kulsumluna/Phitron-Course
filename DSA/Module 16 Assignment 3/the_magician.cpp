#include<bits/stdc++.h>
using namespace std;

int main(){
    // create the stack 
    stack <char> st;
    // take test case
     int t; cin >> t;

     while (t--)
     {
        int n; cin >> n;
        while (n--)
        {
            char c; cin >> c;
            if(!st.empty() &&st.top() == c){
                st.pop();
            }
           else if (!st.empty() && c == 'R' && st.top() == 'B' || !st.empty() && c == 'B' && st.top() == 'R')
            {
                st.pop();
                st.push('P');
            }
            else if (!st.empty() && c == 'R' && st.top() == 'G' || !st.empty() && c == 'G' && st.top() == 'R')
            {
                st.pop();
                st.push('Y');
            }
            else if (!st.empty() && c == 'B' && st.top() == 'G' || !st.empty() && c == 'G' && st.top() == 'B')
            {
                st.pop();
                st.push('C');
            }
            else{
                st.push(c);
            }
        }
        
        // create new stack to delete duplicate 
        stack<char> newst;;
        while (!st.empty())
        {
            if(!newst.empty() && st.top() == newst.top()){
                st.pop();
                newst.pop();
            }
            else{
                newst.push(st.top());
                st.pop();
            }
        }

        while (!newst.empty())
        {
            cout << newst.top();
            newst.pop();
        }
        cout << endl;
     }
     

    return 0;
}