#include<stdio.h>

void main()
{
 int i=0, N ,fact=1;
printf("Ievadi skaitli lai aprekinatu faktorialu\n");
scanf("%d",&N);

if (N>12)
printf("Sadam skaitlim nevar aprekinat faktorialu\n");

else
 for(i=1;i<=N;i++)
{
  fact=fact * i;

printf("Skaitla %d faktorials ir: %d\n",i,fact);
}
}
