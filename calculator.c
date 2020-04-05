#include <stdio.h>
#include <math.h>

int main ()
{
    float n1, n2;
    char op;

    printf("Type M=MULT, D=DIV, A=ADD, S=SUB, P=POW and R=SQRT:\n");
    scanf("%c", &op);
    scanf("%f", &n1);
    scanf("%f", &n2);
    
    switch (op)
    {
        case 'M' :
            printf("%f", n1*n2);
        break;

        case 'D':
            printf("%f", n1/n2);
        break;

        case 'A':
            printf("%f", n1+n2);
        break;

        case 'S':
            printf("%f", n1-n2);
        break;

        case 'P':
            printf("%f", pow(n1, n2));
        break;

        case 'R':
            printf("%f && %f", sqrt(n1), sqrt(n2));
        break;
          
    }
    return 0;
}