#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string Name;
    int marks;
    int roll;

    Student(string name, int roll, int marks){
        this->Name = name;
        this->marks = marks;
        this->roll = roll;
    }

};

class cmp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks == b.marks) return a.roll > b.roll;
        else return a.marks < b.marks;
    } 
};


int main(){
    
    priority_queue<Student,vector<Student>,cmp> pq;

  
    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        int roll,marks; cin >> roll >> marks;
        pq.push(Student(s, roll, marks));
    }
    
    int q; 
    cin >> q;
    while (q--)
    {
        int a;
        cin >>a; 

        if(a== 0){
            string s; cin >> s;
            int roll,marks; cin >> roll >> marks;
            pq.push(Student(s, roll, marks));
            cout << pq.top().Name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
        }

        else if (a == 1) //maximum marks jar se print hobe
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top().Name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
            }
        }
        else if (a == 2)// delete top student
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
                    cout << pq.top().Name <<" "<< pq.top().roll <<" "<<pq.top().marks << endl;
                }
            }
            
        }
    
    }
    
    

    return 0;
}