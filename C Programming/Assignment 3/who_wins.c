#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
     int tiger=0; // sbgulo test case er jnno aktai final reult pabo tai loop er bairee niyeci
    int pathan=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
       
        if(a>b)
        {
          tiger++;  
        }
       
         else if(b>a)
        {
            pathan++;
        } 
          else if(a==b) // jodi a and b er man samne hoi thle continue koro
          {
            continue;
          }}
        
       if(tiger>pathan)
       {
        printf("Tiger\n");
       }
        
       else if(pathan>tiger)
        {
            printf("Pathan\n");
        }
        else if(tiger==pathan)
        {
            printf("Draw\n");
        }
       return 0;
}