#include <stdio.h>

int main(){
    char p1[20], p2[20], p3[20];
    scanf("%s%s%s", p1, p2, p3);

    //Comparando apenas o primeiro caractere diferente das palavras
    if(p1[0] == 'v'){
        if(p2[0] == 'a'){
            if(p3[0] == 'c'){
                printf("aguia\n");
            }
            if(p3[0] == 'o'){
                printf("pomba\n");
            }
        }
        if(p2[0] == 'm'){
            if(p3[0] == 'o'){
                printf("homem\n");
            }
            if(p3[0] == 'h'){
                printf("vaca\n");
            }
        }
    }
        if(p1[0] == 'i'){
        if(p2[0] == 'i'){
            if(p3[2] == 'm'){
                printf("pulga\n");
            }
            if(p3[2] == 'r'){
                printf("lagarta\n");
            }
        }
        if(p2[0] == 'a'){
            if(p3[0] == 'h'){
                printf("sanguessuga\n");
            }
            if(p3[0] == 'o'){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}