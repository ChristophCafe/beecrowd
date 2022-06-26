#include <stdio.h>
#include <math.h>

int main() {
 
int a, b, c, ma;
    /* Recebendo os valor*/
    scanf("%d%d%d", &a, &b, &c);
    /* Chamando a função para obter o maior valor*/
    ma = (a + b + abs(a - b)) / 2;

    ma = (ma + c + abs(ma - c)) / 2;
;
    /*Imprimindo o maior valor*/

    printf("%d eh o maior\n", ma);
    
    return 0;
}