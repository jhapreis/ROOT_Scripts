#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "array.h"

int main(){

    double x[5] = {1, 2, 3, 4, 5};

    double* y = pow_array(x, 5, 2);

    printf("\n");
    for (int i=0; i<5; i++){
        printf("%lf ", y[i]);
    }
    printf("\n");

    free(y);
    
    return 0;

}

