#include <stdio.h>

// function to find sum
int sumArr(int arr[], int n) { //array and size of arr n=4
    int sum = 0;// sum=50 70

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i]; //sum = sum + 10  sum = 10 + 40 sum = 50 + 20 
    }

    return sum;
}

int main() {
    int arr[3] = {10, 40, 20}; // arr 

    int res = sumArr(arr, 3); //send array and length of arr

    printf("Sum = %d", res);

    return 0;
}