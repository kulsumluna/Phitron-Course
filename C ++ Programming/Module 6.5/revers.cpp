#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;  
    ss>>word; // prothome akber print kore nibo thle samne othoba seshe space thkabe na
    reverse(word.begin(),word.end()); // reverse kore print krbo
    
    cout<<word;

    while(ss>>word)
    {
        reverse(word.begin(),word.end());
        cout<<" "<<word;
    }
    return 0;
}