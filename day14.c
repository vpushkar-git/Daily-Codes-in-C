//Day 14
//Given two array arr1 and arr2 your task is to find out the smallest difference between  two array elements.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[] = {1, 5, 10, 20};
    int arr2[] = {2, 15, 25, 30};

    int n = 4, m = 4;
    int min = abs(arr1[0] - arr2[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int diff = abs(arr1[i] - arr2[j]);

            if (diff < min)
                min = diff;
        }
    }

    printf("Smallest difference = %d", min);

    return 0;
}