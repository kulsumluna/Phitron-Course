#include <stdio.h>
 
int main() {
    long long int eye, mouth, body;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    long long int  count = 0;
    
    if (eye >= 1 && mouth >= 1 && body >= 1) 
    {
        if (eye<=mouth && eye<=body)
        {
            mouth = mouth - eye;
            body = body - eye;
            count  = eye ;
            eye = eye-eye;
        }
 
        else if (mouth<=eye && mouth<=body)
        {
            eye = eye - mouth;
            body = body - mouth;
            count = mouth ;
            mouth = mouth-mouth;
        }
 
        else if (body<=eye && body<=mouth)
        {
            eye = eye - body;
            mouth = mouth - body;
            count = body ;
            body = body - body;
        }
        
    }
 
    
    if (eye>=2 && body>=1)
    {
        if (body >= eye/2)
        {
            count = count + (eye/2);
        }
        else if (body < (eye/2))
        {
            count = count + body;
        }
    }
    
    
    printf("%lld\n", count);
    return 0;
}