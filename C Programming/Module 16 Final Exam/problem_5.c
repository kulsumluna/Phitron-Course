#include<stdio.h> 
#include<string.h>
int is_palindrome(char a[])
{
int is_palindrome=1;
int lenA=strlen(a);
int j=lenA;
for(int i=0;i<j;i++)
{
    j--;
    if(a[i]!=a[j])
    {
        is_palindrome=0;
        break;
    }
}
return is_palindrome;
}
int main()
{
char a[11];
scanf("%s",&a);
int s=is_palindrome(a);
if(s==1)
{
    printf("Palindrome\n");
}
 else if(s==0)
{
    printf("Not Palindrome\n");
}
    
    return 0;
}