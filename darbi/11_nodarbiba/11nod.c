#include<stdio.h>


int main() {
int a;
int b;
int c;

printf("Lietotaj, ievadi 1.ciparu\n");
scanf("%d", &a);
printf("Lietotaj, ievadi 2.ciparu\n");
scanf("%d", &b);
printf("Lietotaj, ievadi 3.ciparu\n");
scanf("%d", &c);

        if(a > b > c)
        printf(" Ievadiitie skaitli augosa secibaa--%d--%d--%d\n",a, b, c);

        else if(c > b > a)
        printf(" Ievadiitie skaitli augosa secibaa--%d--%d--%d\n",c, b, a);

        else if(a> c > b)
        printf(" Ievadiitie skaitli augosa secibaa--%d--%d--%d\n",a, c, b);

        else if(c> a > b)
        printf(" Ievadiitie skaitli augosa secibaa--%d--%d--%d\n",c, a, b);

        else if(b> c > a)
        printf(" Ievadiitie skaitli augosa secibaa--%d--%d--%d\n",b, c, a);

        else if(b> a > c)
        printf("Ievadiitie skaitli augosa secibaa--%d--%d--%d\n",b, a, c);
}


