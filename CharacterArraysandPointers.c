#include <stdio.h>
#include <string.h>

int main(){
    char C[20];
    C[0] = 'H';
    C[1] = 'A';
    C[2] = 'S';
    C[3] = 'A';
    C[4] = 'N';
    C[5] = '\0';
    int len = strlen(C);
    printf("%s\n",C);
    printf("Lenght = %d\n ",len);
    printf("Size in Bytes = %d\n",sizeof(C));
    char X[] =  "EMIN";
    int len1 = strlen(X);
    printf("%s\n",X);
    printf("Lenght = %d\n ",len1);
    printf("Size in Bytes = %d\n",sizeof(X));
    return 0;
}