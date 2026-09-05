#include <stdio.h>

int main(){
    //FATOR 1 IRÁ DE 1 A 5
    //FATOR 2 IRÁ DE 1 A 10

    printf("\n\033[1;32m === TABUADA DE 1 ATÉ 5 ===\n\n");
   
    int fator1, fator2;

    for (fator1 = 1; fator1 <= 5; fator1++){
        for (fator2 = 1; fator2 <= 10; fator2++){
            printf(" %2d x %2d = %02d\n", fator1, fator2, fator1 * fator2);
        }
        printf("\n");
    }

    printf("\n\033[m");
    return 0;
}
