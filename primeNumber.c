#include <stdio.h>

int n, i, div = 0;

int main ()
{
    printf("Type a number:\n");
    scanf("%d", &n);
   
   for (i = 2; i < n; i++)
    {
       if (n % i == 0)
       {
           div++;
       }
    }
     if (div > 0)
       {
           printf("Not prime\n", n);
       }
       else
       {
           printf("Is prime\n", n);
       }
       return 0;
}