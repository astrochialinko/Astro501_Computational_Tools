#include <stdio.h>
#define NTERM 1000        // number of terms
#define VALUE 0.1       // value of each term

int main(void)
{
    int index;
    float sum=0.0,error;

                            // for all terms
    for (index=1;index<=NTERM;index++)
        sum+=VALUE;         // add each value to the sum

    sum/=NTERM;             // devide by total number of terms
    error=(sum-VALUE)/VALUE;// calculate relative error

    printf("Sum=%g Relative error=%g\n",sum,error);

    return 0;
}
