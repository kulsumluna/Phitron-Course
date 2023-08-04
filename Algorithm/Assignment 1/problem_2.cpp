//https://docs.google.com/document/d/1EsIyHH5ja2I95iEwr96xSz-C-NLUurpvy6qV_iRb5Gs/edit?usp=sharing
#include<bits/stdc++.h>

using namespace std;
void search(int arr[],int x,int n)
{
    int left = 0;
        int flag=0;
        int right = n - 1; 
        while (left <= right) { 
            int mid = left + (right - left) / 2; 
            if (arr[mid] == x) { 
                flag=1;
                cout<<mid;
               break;
                
               
                
            } else if (arr[mid] < x) { 
                left = mid + 1; // 
            } 
            else if(arr[mid] > x) {
                right = mid - 1;
            }
           
            
        }
        if(flag==0) cout<<"Not Found";
        
       
       
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    search(arr,x,n);
    
    
    
    return 0;
}