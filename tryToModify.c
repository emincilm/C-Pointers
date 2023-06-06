#include <stdio.h>
#include <stdlib.h>

void tryToModify ( int x, char text[])
{
    x++;
    text[0]--;
    text[1]++;
    text[2] =  text[2]+2;
    text[3] =  text[3]-2;
}

int main()
{
    int v = 5;
    char name[5] =  "Good";
    printf("V = %d, name =  %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    tryToModify(v,name);
    printf("V  = %d, name = %s\r\n",v,name);
    return 0;
}