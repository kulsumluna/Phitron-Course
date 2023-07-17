#include <stdio.h>
#include <math.h>
#include <limits.h>
int
main ()
{
float n, k;
scanf ("%f %f", &n, &k);
int row = ceil (n / k);
int x = n;
long long int a[x];// array akare input niyeci
for (int i = 0; i < n; i++)
{
scanf ("%lld", &a[i]);
}
// finding minimum
int l = 0, y = row;
long long int a2[y];
for (int i = 0; i < row; i++)
{
long long int min = INT_MAX;
for (int j = 0; j < k; j++)
{
if (l<n && min > a[l]) // akhane array index out of bound e jaowar somvabona thake
{
min = a[l];
}
l++;
}
a2[i] = min;

}
// print the min
for (int i = 0; i < y; i++)
{
printf ("%lld ", a2[i]);
}
return 0;
}