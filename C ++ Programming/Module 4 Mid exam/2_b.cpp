#include<bits/stdc++.h>
using namespace std;
class Car{
public:
string Brand;
string Model;
int Year;
Car(string x,string y,int z) // constructor method
{
Brand=x;
Model=y;
Year=z;
}
};
int main()
{
Car car_1("BMW","Y5",2003);
Car car_2("BCM","X5",2006);
cout<<car_1.Brand<<" "<<car_1.Model<<" "<<car_1.Year<<endl;
cout<<car_2.Brand<<" "<<car_2.Model<<" "<<car_2.Year<<endl;
return 0;
}
