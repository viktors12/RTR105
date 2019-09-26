#include<stdio.h>
#include<limits.h>
int main ()
{
long long int a = 50000; // 50 ,000
int b = 1000000; // 1 ,000 ,000
long long int c = a * b; // kaads ir gaidams rez

printf("int datu tipa izmers ir: %d baiti \n", sizeof (int) );
printf(" Apreekjinam a un b reizinaajumu :\n" );
printf("a = %d, b = %d \n", a, b);
printf("c = a * b = %d * %d \n" ,a ,b ,c);//rezultaats uz ekraana
}

