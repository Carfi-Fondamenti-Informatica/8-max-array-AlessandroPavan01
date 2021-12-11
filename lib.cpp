//
// Created by Alessandro on 11/12/2021.
//

#include "lib.h"
float numeroMax( const float numeri[], int dim){
    numeri[dim];
    float massimo = numeri[0];
    for (int i=0 ;  i < dim ; i++){
        if(massimo < numeri[i]){
            massimo = numeri[i];
        }
    }
    return massimo;
}
