#include<stdio.h>
#include<math.h>

//teilora rinda sin(x^2)

int main(){

        long double val, x, y ,x_sq, s, a;
        int k;


         printf("\n\n");
         printf("\n\t\t  500\n");
         printf("\t\t______\n");
         printf("\t\t\\            2*( 2*k+1 )\n");
         printf("\t\t \\          x^\n");
         printf("\ty(x)=\t  |    -----------------   = sinh(x^2)\n");
         printf("\t\t /                2*k+1\n");
         printf("\t\t/      (2*k+1)!*2^\n");
         printf("\t\t------\n");
         printf("\t\t  k=0\n");
 



        printf("ievadi skaitli x\n");
        scanf("%Lf",&x);
        //val = M_PI/180;
        x_sq = pow(x , 2);
        y = sin(x_sq);
        printf("\ny=sin(%.3Lf) = %Lf\n",x_sq, y);

        for(k=0; k<=500; k++){
                if(k == 0){
                        a=x_sq;
                        s=a;
                }
                else{
                        a = a * (-1)*pow(x_sq, 2)/((2*k)*(2*k+1));
                        s +=  a;
                }

                //printf("a%d = %Lf\t",k ,a);
                //printf("s%d = %Lf\n",k ,s);
                if(k==499)
                        printf( "k= %d , summara vertiba ir %.4Lf\n",k,s);
                if(k == 500)
                        printf( "k= %d , summara vertiba ir %.4Lf\n",k,s);
        }
        printf("\n\n sin(%.3Lf^2) pec funkcijas metodes ir %.3f\n",x ,sin(pow(x,2)));
        printf("\nsin(%.3Lf^2) pec teilora metodes  ir %.3Lf\n\n\n",x , s);


         printf("\n\n\t\t            2\n");
         printf("\t\t          x^\n");
         printf("\t\tR = -----------------\n");
         printf("\t\t     (2*k)*(2*k+1)*k\n");
         printf("\n\n");


}


