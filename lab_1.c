// Lab 1: 1-D Array Operations - Insertion, Deletion, Traversal
#include<stdio.h>

int main() {
    int arr[100], size, pos, value, i;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    printf("Enter array elements: ");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display original array
    printf("Original array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Insertion
    printf("\nEnter position and value to insert: ");
    scanf("%d %d", &pos, &value);
    
    for(i = size; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = value;
    size++;
    
    printf("After insertion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Deletion
    printf("\nEnter position to delete: ");
    scanf("%d", &pos);
    
    for(i = pos-1; i < size-1; i++) {
        arr[i] = arr[i+1];
    }
    size--;
    
    printf("After deletion: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

/*
Sample Output:
Enter array size: 5
Enter array elements: 10 20 30 40 50
Original array: 10 20 30 40 50
Enter position and value to insert: 3 25
After insertion: 10 20 25 30 40 50
Enter position to delete: 2
After deletion: 10 25 30 40 50
*/