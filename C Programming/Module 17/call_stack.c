#include<stdio.h>
void world()
{
    printf("world start\n");
    printf("world end\n");
}
void hello()
{
    printf("hello Start\n");
    world();
    printf("hello end\n");
}
int main()
{
    printf("main er start\n");
    hello();
    printf("main er end\n");
    
    
    return 0;
}