#include<bits/stdc++.h>

using namespace std;
int main()
{
    // list<int> myList= {10,20,30};
    // list<int> newList;
    // // newList=myList;
    // newList.assign(myList.begin(),myList.end());
    // for(int val: newList)
    // {
    //     cout<<val<<endl;
    // }
    list<int> myList= {10,20,20,40,50,20,70,80};
    list<int> newlist={100,200,300,400};
    // myList.push_back(100);// tail ee insert hobe
    // myList.push_front(100);   // head ee insert hobe
    // myList.pop_back();  //tail delete hobe
    // myList.pop_front();  // head delete kora
    // myList.insert(next(myList.begin(),2),{100,200,300});// multiple value assign krte chaile // O(N)
    // myList.erase(next(myList.begin(),2)); //O(n) // delete korar jnno
    // myList.insert(next(myList.begin(),2),newlist.begin(),newlist.end());  // onno akta linked list add krte chaile
    // myList.erase(next(myList.begin(),2),next(myList.begin(),5)); // delete korar jnno
//    replace(myList.begin(),myList.end(),20,100); // kono man er jnno onno replace krte chaile
//     for(int val: myList)
//     {
//         cout<<val<<endl;
//     }

// check korar jnno
auto it= find(myList.begin(),myList.end(),60);
if(it == myList.end())
{
    cout<<"Not found"<<endl;
}
else
{
    cout<<"Found"<<endl;
}
    return 0;
}