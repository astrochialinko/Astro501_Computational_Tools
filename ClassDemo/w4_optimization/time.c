#include<stdio.h>
#include<math.h>
#include<time.h>

#define Nrep 10000000           // Number of repetitions

int main(void)
{
    double x=1.3,a;             // to be used for FPA operations

    double time, Mflops;       // for counting time

    int index;
    clock_t ticks1, ticks2;

    ticks1=clock();                     // get beginning time
    for (index=1;index<=Nrep;index+=1)  // repeat many times
    {
        // a =x+x; 
        // a=index/x;                         // this FPA operation
        // a=index/x/x;
        // a=index/(x*x);
        // a=sin(x)*sin(x)+2.*cos(x)*cos(x);
        // a=pow(sin(x),2.0)+2.0*pow(cos(x),2.0);
        // a=1.+cos(x)*cos(x);
        // a=log(x);
        // a=pow(x,5.);
        a=x*x*x*x*x;

    }
    ticks2=clock();                     // get ending time

    // calculate time it took per operation
    time=(1.0*(ticks2-ticks1))/CLOCKS_PER_SEC/Nrep;
    // convert it io MFLOPS
    Mflops=1.e-6/time;
    
    printf("it took %e seconds\n", time);
    printf("this corresponds to %f MFLOPS\n",Mflops);

    return 0;
}
