#include<stdio.h>
int sum(char s[],int i)
{   
    if(s[i]=='\0') //base case
  return 0;
    int ans=sum(s,i+1);
    if(s[i]>='A' && s[i]<='Z')// choto  hater kore niyeci
    {
        s[i]=s[i]+32;
}
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
{
 return ans+1; // jodi s[0] vowel hoi thle 1 jog krte hobe
}
else{
    return ans;
}
}
int main()
{

    char s[210];
    fgets(s,210,stdin);
     int cnt= sum(s,0);
     printf("%d",cnt);
    return 0;
}