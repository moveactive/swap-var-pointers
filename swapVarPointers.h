#include <stdio.h>
//
// Created by Dell on 09-Jan-18.
//

#ifndef POINTERS_SWAPVARPOINTERS_H
#define POINTERS_SWAPVARPOINTERS_H

#endif //POINTERS_SWAPVARPOINTERS_H

void swap_varPointers(int *pVar1, int *pVar2){

    int swap;
    swap = *pVar1;
    *pVar1 = *pVar2;
    *pVar2 = swap;

}