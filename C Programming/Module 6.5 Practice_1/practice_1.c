#include<stdio.h>
int main()
{
 char a;
 scanf("%c",&a);
 if(a=='z' || a=='Z')
 {
    if(a=='z')
    {
        printf("a");
    }
    else
    {
      printf("A");  
    }
 }
  else if(a>='a' && a<='z')
 {
    // choto hater
    int ans=a+1;
    printf("%c",ans);
 }
 else {
    int ans=a+1;
    printf("%c",ans);
 }
    
    return 0;
}