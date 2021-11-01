#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "array.h"

double* pow_array(double* array, int array_size, double exponent){

    double* power_array = (double*) calloc(array_size, sizeof(double));

    for (int i=0; i<array_size; i++){
        power_array[i] = pow( array[i], exponent );
    }

    for (int i=0; i<array_size; i++){
        printf("%lf ", power_array[i]);
    }
    
    return power_array;
}


