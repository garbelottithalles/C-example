#include <stdio.h>

int main (void)
{
    int n1, n2;

    do
    {
        printf("\n");
        printf("Type  number:\n");
        scanf("%d", &n1);

        printf("Type another number:\n");
        scanf("%d", &n2);

        if (n1 == n2)
        {
            printf("Are same\n");
        }
        if (n1 > n2)
        {
            printf("First number is bigger\n");
        }
        if(n2 > n1)
        {
            printf("Second number is bigger\n");
        }

    } while (n1 != 0 || n2 != 0);
    
    printf("end\n");
}