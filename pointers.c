#include <stdio.h>

int main(){
    /*
    int a;
    int *p;
    a = 10;
    p = &a;     // adress of a
    printf("%d\n",p);
    printf("%d\n",*p);     // *p value at adress pointed by p
    printf("%d",&a);         // address of the a that saved 
    printf("\n%d",a);         // value of a 
    *p = 15;                   // change value of a using by adressing pointer
    printf("\n%d",a);           // new value of a 
    printf("\n%d",&a);         // address of the a that saved 
    int b = 20;
    *p = b;
    printf("\n%d\n",p);
    printf("%d\n",*p);     // *p value at adress pointed by p

    */
     int a = 19;
     int* p = &a;
    // Pointer arithmetic
    printf("Adress of p is %d\n",p);
    printf("Value at adress p is %d\n",*p);
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Adress p+1 is %d\n",p+1);
    printf("Value of the adress p+1 is %d\n",*(p+1));
    return 0;
}