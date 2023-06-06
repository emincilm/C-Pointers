#include <stdio.h>
#include <math.h>
/* int compare(int a, int b){

    if(a>b) return -1;
    else return 1;
} */
int abs_compare(int a, int b){

    if(abs(a)> abs(b)) return -1;
    else return 1;
}
void BubbleSort(int *A, int n,int (*abs_compare)(int,int)){
    int i,j,temp;
    for ( i = 0; i < n; i++){
       for ( j = 0; j < n-1; j++){
            if (abs_compare(A[j],A[j+1]) > 0){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                
            }
        }
    }
    
}
int main(){
    int s=6;
    int i, A[] = {3,2,1,5,6,4};
    BubbleSort(A,s,abs_compare);
    for ( i = 0; i < s; i++)
    {
        printf("%d ",A[i]);
    }
    
    return 0;
}