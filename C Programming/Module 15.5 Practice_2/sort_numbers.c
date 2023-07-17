 #include <stdio.h>
    int main()
    {
 
        int i, j, a, number[3];
        
        for (i = 0; i < 3; ++i)
            scanf("%d", &number[i]);
            int e= number[0];
        int f= number[1];
        int g= number[2];

           for (i = 0; i < 3; ++i) 
        {
         for (j = i + 1; j < 3; ++j)
            {
if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        
        for (i = 0; i < 3; ++i){
            printf("%d\n", number[i]);}
            printf("\n");
             
            printf("%d\n%d\n%d",e,f,g);
           
 
    }