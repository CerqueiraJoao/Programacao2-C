#include<stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name [50];
    int number;
    struct date dob;
};

int main() {
    int i, j, n;
    struct student a[50];
    {
        printf("How many data you want to input?");
        scanf("%d", &n);
        for (i = 0; i < n; i++) {
            printf("Enter your name ");
            scanf("%s", &a[i].name);
            printf("Enter your number");
            scanf("%d", &a[i].number);
            printf("Enter your Date of Birth (dd/mm/yy)");
            scanf("%d%d%d", &a[i].dob.day, &a[i].dob.month, &a[i].dob.year);
        }
        printf("\n");

        for (j = 0; j < n; j++) {
            printf("Name : %s \n", a[j].name);
            printf("Number : %d \n", a[j].number);
            printf("Date of Birth(dd/mm/yy) : %d/%d/%d\n", a[j].dob.day, a[j].dob.month, a[j].dob.year);
            printf("\n");

        }
    }
    return 0;
}