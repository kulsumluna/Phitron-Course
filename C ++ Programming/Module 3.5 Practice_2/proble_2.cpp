#include<bits/stdc++.h>
using namespace std;
class Crickter{
    public:
    int jursey_no;
    char country[100];

};
int main()
{
    Crickter*dhoni=new Crickter(); // dynamic object create dhoni
    dhoni->jursey_no=10; //jursey no bosiye diyeci
    char country[100]="Europe"; // country bole diyeci
    strcpy(dhoni->country,country); // dhoni er country name ee country copy koreci 
    // cout<<dhoni->country;
    Crickter*kohil=new Crickter(); // kohil er dynamic object create koreci
    kohil->jursey_no=dhoni->jursey_no; // jursey no copy koreci
    
    strcpy(kohil->country,dhoni->country); // kohil er country te country name copy koreci
    // delete data dhoni
    delete dhoni;
    // then print koreci kohil er data
    cout<<kohil->jursey_no<<endl;
    cout<<kohil->country<<endl;

    
    return 0;
}