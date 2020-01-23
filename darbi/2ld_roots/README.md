#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void exit(int status);

void test();
void  dialog();


double a, b, c, funkc_a, funkc_b;

int main() {

        double delta_x = 0.0001, a1 ,b1,x;
        int k;

        dialog();

        a1=a;b1=b;
        test();
        for (k=1;(b-a) > delta_x;k++) {
                x = ((b-a)/2)+a;
                if(funkc_b > 0){
                        if((sin(pow(x,2))-c) > 0)
                                        b = x;
                                else
                                        a = x;
                }
                else {
                        if((sin(pow(x,2))-c) > 0)
                                a = x;
                        else
                                b = x;
                }
        }
        printf("sin(x^2) = %.2lf; intervaalaa no [%.2lf; %.2lf]",c ,a1 ,b1);
        printf(" saknes peec  DIHOTOMIJAS METODES metodes ir %.2lf\n",x);
        printf("Saknes tika atrastas ar %d.iteraacijas reizi",k);

        return(0);
}


void dialog(){

        char yn;
        funkc_a = funkc_b = 1;

        while(funkc_a * funkc_b > 0){


                printf("Augsti godaajamais, cienijamais Lietotaaj.\nJums buus jaajievada intervaals [a;b] kuraa juus veeleesities atrast \nfunkcijas sin(x^2)=y saknes\n");
                printf("\nLuudzu ievadiet c  veertiibu:\n");
                scanf("%lf", &c);

                printf("\nLuudzu ievadiet saakuma intervaalu vertiibu a:\n");
                scanf("%lf", &a);
                printf("\nLuudzu ievadiet beiga intervaalu vertiibu b:\n");
                scanf("%lf",&b);

                funkc_a = sin(pow(a, 2))-c; funkc_b = sin(pow(b,2))-c;

                while(b<=a){
                        printf("\n!!!!!!!!!!!!!!! B VEERTIIBAI IR JAAAABUUUUT LIELAAAKAI PAR A !!!!!!!!!!!!!!!!!!\nLuudzu atkartoti ievadiet b veertiibu:\n");
                        scanf("%lf", &b);
                }

                if(funkc_a * funkc_b > 0){
                        printf("Intervaalaa [%.3lf ; %.3lf] sin(x^2) funkcijai\n saknju nav(vai tajaa ir paaru saknju skaits)\n",a ,b);
                        printf("\nVai veelaties pameginaat citu intervaalu?\n\ny/n\n");
                        scanf(" %c", &yn);
                        if(yn != 'y')
                                exit(0);
                }
        }
}

void test(){


        printf("\n\n\t\t\t\ta = %.2f ; b = %.2f\n",a ,b);
        printf("\t\t\t\tfunkc_a = %.2f ; funkc_b = %.2f\n",funkc_a ,funkc_b);

}

