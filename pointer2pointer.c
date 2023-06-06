#include <stdio.h>

int main(){
    int x = 5;
    int* p =  &x;
    *p = 6;
    int** q = &p;
    int*** r =  &q;
    printf("Adress of *p %d\n",*p);
    printf("Adress of *q %d\n",*q);
    printf("Adress of *(*q) %d\n",*(*q));
    printf("Adress of *(*r) %d\n",*(*r));
    printf("Adress of *(*(*r)) %d\n",*(*(*r)));
    ***r = 10;
    printf("Value of X = %d\n",x);
    **q = *p + 2;
    printf("Value of X = %d\n",x);
    return 0;
}