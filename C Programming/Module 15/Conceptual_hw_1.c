#include<stdio.h>
void even_number(void)
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
    }
}
int main()
{
even_number();

    
    return 0;
}