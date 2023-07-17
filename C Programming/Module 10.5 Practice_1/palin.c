#include<stdio.h>
#include<string.h>
int main()
{
 char a[10001];
 int yes=1;
    scanf("%s",&a);
   int lenA=strlen(a);
   int j=lenA;
   for(int i=0;i<j;i++){

    j--;
    if(a[i]!=a[j])
    {
        yes=0;
        break;
    }
   }
   if(yes==1)
   {
    printf("YES\n");
   }
   else if(yes==0)
   {
    printf("NO");
   }
   
   
  return 0;
}