#include<stdio.h>


user_function_1(){
printf("apsveicu par neko\n");
user_function_1();
}
void main () {
user_function_1();
user_function_2();
}

user_function_2()
{
user_function_1();
}
