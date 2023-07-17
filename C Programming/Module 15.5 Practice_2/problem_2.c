#include<stdio.h>
void len(char a[])
{
    int count=0;
    for(int i=0;a[i]!='\0';i++)
    {
       count++; 
    }
    printf("%d",count);
}
int main()
{

    char a[100];
    scanf("%s",&a);
    len(a);
    return 0;
}