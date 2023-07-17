#include<stdio.h>
int main()
{

    int a;
    scanf("%d",&a);
    
   for(int i=1;i<=a;i++)
   {
     int n;
     scanf("%d",&n);
     int b[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&b[i]);
     }
     int c;
     scanf("%d",&c);
      for(int j=0;j<n;j++)
     {
        if(b[j]==c){
            printf("Case %d: %d\n",i,j+1);
        }
        else
        {
           
            printf(" Case %d: Not Found\n",i);
        }

     }

     

   }
    return 0;
}