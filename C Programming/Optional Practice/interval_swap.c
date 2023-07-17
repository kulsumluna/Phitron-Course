#include<stdio.h>
#include<math.h>
int main()
{

    int a,b;
    scanf("%d %d",&a,&b);
   
    if(a==0 || b==0) // jodi kono aktar man 0 hoi thle somvob na
    {
        printf("NO");
        
    }
      else if(abs(a-b)<=1) //jodi 2ti songkhar man er biyogfol1 er soman othoba choto hoi thle somvob 
    {
        printf("YES");
    }
     else{
        printf("NO");
    }
    return 0;
}