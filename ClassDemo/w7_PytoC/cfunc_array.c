// function that sums an array of size NSIZE
double arraySum(double *array, int NSIZE)
{
    double result=0.0;
    int index;

    for (index=0; index<NSIZE;index++)
    {
        result+=array[index];
    }
    return result;
}
