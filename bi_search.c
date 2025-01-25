#include<stdio.h>

int sort(int arr[], int n);
int biSearch(int arr[], int find, int n);

int main(){
    int A[] = {42, 1, 54, 13, 66, 32, 56};
    int n;
    // before sorting
    for(int i = 0; i<7; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");

    int sorted = sort(A, 7);    // sorted
    printf("\n");
    printf("Enter number you want to search : ");
    scanf("%d", &n);

    int found = biSearch(A, n, 7);
    return 0;
}

int sort(int arr[], int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=n-1; j++){
            if(arr[j]<arr[j+1]){
                int swap = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = swap;
            }
        }
    }
    // after sorting
    for(int i = 0; i<7; i++){
        printf("%d\t", arr[i]);
    }
}

int biSearch(int arr[], int find, int n){
    if(find == arr[n/2]){
        printf("Element found in index %d", n/2);
    }
}