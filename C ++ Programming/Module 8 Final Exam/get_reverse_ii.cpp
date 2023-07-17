#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
        // cin.ignore();
    }

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(a[i].id, a[j].id);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }

    return 0;
}