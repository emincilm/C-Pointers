#include <stdio.h>
void increment(int *x){
    *x = (*x) + 1;
}
int main(){
    int a;
    a = 10;
    increment(&a);
    printf("a= %d", a);
    return 0;  
}

// pointer tanımlamazsak artmıyor 