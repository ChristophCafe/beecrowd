#include <stdio.h>
 
int main() {
 
     int n2=2, n5=5, n10=10, n20=20, n50=50, n100=100, m1, m2, m3, m4, m5, m6;
     double x;
        scanf("%lf", &x);
        printf("NOTAS:\n");
        n100 = x / n100;
        x = x - (n100 * 100);
        printf("%d nota(s) de R$ 100.00\n",n100);
        n50 = x/n50;
        x = x - (n50 * 50);
        printf("%d nota(s) de R$ 50.00\n", n50);
        n20 =x/n20;
        x = x - (n20 * 20);
        printf("%d nota(s) de R$ 20.00\n",n20);
        n10 =x/n10;
        x= x - (n10 * 10);
        printf("%d nota(s) de R$ 10.00\n",n10 );
        n5 =x/n5;
        x = x - (n5 * 5);
        printf("%d nota(s) de R$ 5.00\n", n5);
        n2 =x/n2;
        x = x - (n2 * 2);
        printf("%d nota(s) de R$ 2.00\n",n2);

        printf("MOEDAS:\n");
        m1 = x/1;
        x = x - m1;
        printf("%d moeda(s) de R$ 1.00\n",m1);
        m2 = x/0.5;
        x = x - m2*0.5;
        printf("%d moeda(s) de R$ 0.50\n",m2);
        m3 = x/0.25;
        x = x - m3*0.25 ;
        printf("%d moeda(s) de R$ 0.25\n",m3);
        m4 = x/0.1;
        x = x - m4*0.1;
        printf("%d moeda(s) de R$ 0.10\n",m4);
        m5 = x/0.05;
        x = x - m5*0.05;
        printf("%d moeda(s) de R$ 0.05\n",m5);
        m6 = x/0.01;
        x = x - m6*0.01;
        printf("%d moeda(s) de R$ 0.01\n",m6);
 
    return 0;
}