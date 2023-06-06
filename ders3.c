#include <stdio.h>
#include <stdlib.h>

int  calcMin(int values[], int n);

int main()
{
    int xvalues[10] = {35,67,27,54,76,44,59,32,43,25};
    int yvalues[5]  = {28,71,67,83,62};
    int zvalues[13] = {87,21,74,36,27,64,87,63,27,86,48,32,76};
    printf("The minimum of x,y,z values is (%d %d %d) \r\n ",calcMin(xvalues,100),calcMin(yvalues,5),calcMin(zvalues,13));
    return 0;
}

int calcMin(int values[], int n)
{
    int i, minvalue = values[0];
    for ( i = 0; i < n; i++)
    {
        if(values[i]<minvalue)
            minvalue = values[i];
    }
    return minvalue;
}
