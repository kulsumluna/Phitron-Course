#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int q; 
    cin >> q;
    cin.ignore();
    while (q--)
    {
        map<string,int>mp;
        map<string,int>mp2;
        string sentence; getline(cin, sentence);

        
        stringstream ss(sentence);
        string words;
        while (ss >> words)
        {
            mp[words]++;
        }
        int countMax = 0;
        for(auto && s : mp){
            if(s.second > countMax){
                countMax = s.second;
            }
        }
        string lex;
        stringstream ss2(sentence);
        while (ss2 >> words)
        {
            mp2[words]++;
            if(mp2[words] == countMax){
                lex = words;
                break;
            }
        }
        
    cout << lex <<" "<< countMax<< endl;
    }
    
     

    return 0;
}