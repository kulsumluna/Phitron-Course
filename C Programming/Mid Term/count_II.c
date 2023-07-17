#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",&a);
    int size=strlen(a);
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]=='a' || a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' )
        {
    count++;
        }
    }
    printf("%d",count);

    
    return 0;
}