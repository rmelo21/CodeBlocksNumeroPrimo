
#include<stdio.h>

int main () {

    int primos[4];
    int i;
    int resto = 0;

    for(i=0; i<4; i++) {

    printf("\nDigite numero: ");
    scanf("%d%*c", &primos[i]);
    }

         for(i=0; i<=4; i++) {

        if ((primos[i] % resto) == 0 )
            resto++;

        if(resto == 2) {
        printf("\nNumero primo: %d", primos[i]);
        }

      }


    getchar();
    return 0;


}
