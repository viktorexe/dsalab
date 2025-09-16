// Lab 3: Searching in 1-D Array - Linear and Binary Search
#include<stdio.h>

int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == target) {
            return mid;
        }
        if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, target, result;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &target);
    
    // Linear Search
    result = linearSearch(arr, n, target);
    if(result != -1) {
        printf("Linear Search: Element found at position %d\n", result + 1);
    } else {
        printf("Linear Search: Element not found\n");
    }
    
    // Binary Search
    result = binarySearch(arr, n, target);
    if(result != -1) {
        printf("Binary Search: Element found at position %d\n", result + 1);
    } else {
        printf("Binary Search: Element not found\n");
    }
    
    return 0;
}

/*
Sample Output:
Enter number of elements: 6
Enter sorted array elements: 10 20 30 40 50 60
Enter element to search: 30
Linear Search: Element found at position 3
Binary Search: Element found at position 3
*/