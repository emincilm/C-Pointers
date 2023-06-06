#include <stdio.h>
#include <stdlib.h>

int add( int* a, int* b){       // Called funciton
    // a and b  pointer to integers local to add
    printf( "Address of a in add = %d\n",&a);
    printf("Value in a of add( address of a of main) = %d\n",a);
    printf("Value of adress stored in a of add = %d\n",*a);
    int c =  (*a) + (*b);
    return c;
}
int main(){ // calling function
    int a = 2, b = 4;
    printf("Address of a in main = %d\n", &a);
    // call by reference
    int c = add(&a,&b);     // a and b are integers local to main
    printf("Sum  = %d\n", c);

    return 0;
}