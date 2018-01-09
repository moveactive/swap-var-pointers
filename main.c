#include <stdio.h>
#include "boyan_andreev.h"
#include "swapVarPointers.h"
int main(int *pVar1, int *pVar2) {
    int var1;
    int var2;

    printf("***** Swap Variables! *****\n");
    printf("Input first variable!\n");
    printf("variable = ");
    scanf("%d", &var1);


    printf("Input second variable!\n");
    printf("variable = ");
    scanf("%d", &var2);

    swap_varPointers(&pVar1, &pVar2);

    printf("variable one = %d\n", var1);
    printf("variable two = %d\n", var2);

    printf("\n");

    boyanddreev();
    return 0;
}