#include <stdio.h> 
void PrintHello(char *name){
    printf("Hello %s\n",name);
}
int add(int a, int b){
    return a+b;
}
int main (){
    /*int c;
    int (*p)(int,int);
    p = &add;
    c = (*p)(2,3);
    printf("C = %d\n",c);*/

    void (*ptr)(char*);
    ptr = PrintHello;
    ptr("Emin");
    return 0;
}
