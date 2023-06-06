#include <stdio.h> 

int main(){
    int A[] = {2,4,5,8,1};
    printf("%d\n",A);
    printf("%d\n",&A[0]);
    printf("%d\n",A[0]);
    printf("%d",*A);


    //using for loops

    for (int i = 0; i < 5; i++)
    {
        printf("Adress =%d\n",A+i);
        printf("Adress =%d\n",&A[i]);
        printf("Value  =%d\n",A[i]);
        printf("Value  =%d\n",*(A+i));
    }
    
    return 0;
}