#include <stdio.h>

int main()
{
    struct list
    {
        char name[20], subject[30];
        float n1, n2;
    };
    struct list studant;
    
    printf("\n---------- Studant Register -----------\n\n\n");

    printf("Name:");
    scanf("%20s", studant.name);

    printf("Subject:");
    scanf("%30s", studant.subject);

    printf("N1:");
    scanf("%f", &studant.n1);

    printf("N2:");
    scanf("%f", &studant.n2);

    printf("\n\n -------- READING STRUCT DATA --------\n\n");

    printf("Name: %s\n", studant.name);
    printf("Subject: %s\n", studant.subject);
    printf("N1: %.2f\n", studant.n1);
    printf("N2: %.2f\n", studant.n2);
    printf("Avarage: %.2f", (studant.n1 + studant.n2)/2);

    return 0;
}
