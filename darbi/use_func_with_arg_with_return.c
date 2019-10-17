#include<stdio.h>
int  user_function_3(int i_uf){
i_uf++;
printf("Cien.Dauni, tu esi lox reiz %d\n", i_uf);
return i_uf;
}

void main()
{
int i_main=0, N=5;

i_main = user_function_3(i_main);
 
while(i_main<N)

i_main = user_function_3(i_main);

}
