#include <stdio.h>
#include <math.h>

float n1, n2;
char op;

char operation() {
    printf("Type M=MULT, D=DIV, A=ADD, S=SUB, P=POW and R=SQRT:\n");
    scanf("%c", &op);
}
float scan() {
    scanf("%f", &n1);
    scanf("%f", &n2);
}
float root() {
    scanf("%f", &n1);
    printf("%f", sqrt(n1));
}

int main () {
    operation();
    switch (op)
    {
        case 'M' :
            scan();
            printf("%f", n1*n2);
        break;

        case 'D':
            scan();
            printf("%f", n1/n2);
        break;

        case 'A':
            scan();
            printf("%f", n1+n2);
        break;

        case 'S':
            scan();
            printf("%f", n1-n2);
        break;

        case 'P':
            scan();
            printf("%f", pow(n1, n2));
        break;

        case 'R':
           root();
        break;
    }
}