#include <stdio.h>
void A(){
    printf("Hello\n");
}
void B(void (*ptr)()){
    ptr();
}
int main(){
    void (*p)() = A;
    B(p);
    B(A);
    return 0;
} 