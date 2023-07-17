#include<stdio.h>
#include<string.h>
int main()
{

    char a[11];
    scanf("%s",&a);
    char b[11];
    scanf("%s",&b);
     int lena=strlen(a);
     int lenb=strlen(b);
     printf("%d %d\n",lena,lenb);
      printf("%s%s\n",a,b);
      char temp=a[0];
      a[0]=b[0];
      b[0]=temp;
      printf("%s %s",a,b);

     return 0;
}