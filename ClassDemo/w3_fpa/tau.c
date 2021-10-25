#include <stdio.h>
#include <math.h>

// catastrophic cancellation
int main(void) {

    double tau;

    for (tau=0;tau<=60;tau+=5)
    {
        double result=exp(tau)-(exp(tau)-1.0);
        printf("%g %g\n",tau, result);

    }

    return 0;
}

// gcc -o tau tau.c
// gcc -o tau tau.c -lm
