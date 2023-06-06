#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter size of Array = \n");
    scanf("%d",n);
    int *A =  (int*)malloc(n*sizeof(int)); // dynamically allocated array
    for (int i = 0; i < n; i++)
    {
        A[i] = i+1;
    }
    //free(A);
    //A[2] = 6;
    int *B = (int*)realloc(A, 2*n*sizeof(int));
    printf("Prev block address = %d , New address = %d\n", A, B);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",B[i]);
    }
    
    return 0;
} 