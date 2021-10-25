#include <stdio.h>

void func(double a)
{
    a=2.0;
    return;
}

int main(void)
{
    double a = 1.0;
    func(a);
    printf("%f\n",a);
    return 0;
}
