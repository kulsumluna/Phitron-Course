#include<stdio.h>
#include<string.h>
int main()
{
 char a[10001];
    scanf("%s",&a);
   int is_palindrome=1;
    int lenA=strlen(a);
   int i= 0,j=lenA-1;
    while(i<j)
{ 
    char temp=a[i];
       a[i]=a[j];
         a[j]=temp;
      i++;
      j--;
      if(a[i]!=a[j])
      {
       is_palindrome=0;
        break;
      }}
if(is_palindrome==0)
{
    printf("NO\n");
    }
   else if(is_palindrome==1)
{
    printf("YES\n");
}
  return 0;
}