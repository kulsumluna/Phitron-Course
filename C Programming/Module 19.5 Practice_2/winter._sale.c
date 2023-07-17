#include <stdio.h>

int main() {
   float per;
   int a,b;
   scanf("%d %d",&a,&b);

   per = 100-a;
   float price=(100*b)/per;

   printf("%.2f", price);

   return 0;
}
