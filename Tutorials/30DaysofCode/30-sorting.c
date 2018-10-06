#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int n,total=0; 
    scanf("%d", &n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
    	scanf("%d",&a[a_i]);
    }
    // Write Your Code Here
    for (int i = 0; i < n; i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    
    for (int j = 0; j < n - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            numberOfSwaps++;
        }
    }
        
    total += numberOfSwaps;
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        break;
    }
}
    
    printf("Array is sorted in %d swaps.
",total);
    printf("First Element: %d
Last Element: %d",a[0],a[n-1]);
    return 0;
}
