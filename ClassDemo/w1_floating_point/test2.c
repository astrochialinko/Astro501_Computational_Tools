#include <stdio.h>

int main(void)
{
    float x;

    for(x=0.0;x<=1.0;x+=0.125)
        printf("x=%10.8f f(x)=%10.8f\n",x,x*x);
    return 0;
}
