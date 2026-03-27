#include <stdio.h>

int sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

double average(int arr[], int n){
    double avg = sum(arr, n)/n;
    return avg;
}

int max(int arr[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(int);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
