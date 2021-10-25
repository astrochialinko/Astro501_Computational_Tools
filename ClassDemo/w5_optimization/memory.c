#include<stdio.h>
#include<time.h>
#include<math.h>

#define MAX 32      // number of repetitions
#define ArraySize 256*1024   // size of Array

int main(void)
{
    clock_t ticks1, ticks2;
    double A[ArraySize];
    int times, i, Stride=1024;
    double dummy,time;
    ticks1=clock();

    for (times=0; times<MAX; times++)   // many times
    {
        for (i=0;i<ArraySize; i=i+Stride)
            dummy = A[i];               // touch an item in the array
    }

    ticks2=clock();

    time=(1.0*(ticks2-ticks1))/CLOCKS_PER_SEC/MAX;

    printf("total time: %e\n", time);
    printf("time per access: %e\n", time/(ArraySize/Stride));

    return 0;
}
