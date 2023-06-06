#include <stdio.h>

int main(){
        int a = 1025;
        int *p;
        p = &a;
        // 1025 = 00000000_00000000_00000100_00000001
        printf("Size of integer is %d\n ", sizeof(int));
        printf("Adress = %d, value = %d\n",p,*p);
        printf("Adress = %d, value = %d\n",p+1,*(p+1));
        char *p0;
        p0 = (char*)p;      //typecasting
        printf("Size of char is %d\n ", sizeof(char));
        printf("Adress = %d, value = %d\n",p0,*p0);
        printf("Adress = %d, value = %d\n",p0+1,*(p0+1));
        void *p1;
        p1 = p;
        printf("Size of void is %d\n ", sizeof(void));
        printf("Adress = %d\n",p1);
        //printf("Adress = %d, value = %d\n",p1+1,*(p1+1));
    return 0;
}