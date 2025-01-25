// BUBBLE SORT IN INCREASING ORDER

#include <stdio.h>
int main(){
    int n, swap;
    printf("Sorting in increasing order\n\n");
    printf("Enter the size of the array [max 10] : ");
    scanf("%d", &n);
    int A[n];
    for(int i = 0; i<n; i++){
        printf("Enter %d element : ", i);
        scanf("%d", &A[i]);
    }
    printf("Before Sorting : \n");
    for(int i = 0; i<n; i++){
        printf("%d\t", A[i]);
    }
    for(int i = 0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(A[j]>A[j+1]){
                swap=A[j+1];
                A[j+1]=A[j];
                A[j]=swap;
            }
        }
    }
    printf("\nAfter Sorting : \n");
    for(int i = 0; i<n; i++){
        printf("%d\t", A[i]);
    }

    return 0;
}

// this is written to check branch 1