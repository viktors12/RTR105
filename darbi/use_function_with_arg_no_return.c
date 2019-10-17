#include<stdio.h>
void user_function_3(int i_uf){
printf("tev izdevas!!!!!!!!!!!!!!!!!!!tu laimeji %d eiro\n", i_uf);
}

void main()
{
int i_main=0, N=2; 
while(i_main<10)
{
i_main++;
 user_function_3(i_main);
user_function_4(i_main,(float)i_main/N);
user_function_4(i_main,1.*i_main/N);

}
}

void user_function_4(int i_uf, double d_uf) //Sie i_uf un d_uf ir saistit tikai ar 4 funkciju
{
printf("skaitam: %d, reizi, tatad %.2f dala!\n",i_uf, d_uf);
}
