#include<stdio.h>
int main()
{
 
 double x=56.987;
 double * ptr=&x;
 double *ptr2=ptr;
 *ptr2=900.65;

 printf("%0.2lf\n",x);
 printf("%0.2lf\n",*ptr);
 printf("%d",sizeof(ptr));
 

    return 0;
}