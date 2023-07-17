#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++){

    char a[101];
    scanf("%s",&a);
    int lenA=strlen(a); int ans;
    if(lenA<=10)
       {
        printf("%s\n",a);
       }
       if(lenA>10)
       {
        printf("%c%d%c\n",a[0],lenA-2,a[lenA-1]);
       }
    }
    return 0;
}