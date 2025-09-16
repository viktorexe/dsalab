// Lab 2: 2-D Array Operations - Matrix Addition
#include<stdio.h>

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows, cols, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Matrix addition
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("Resultant matrix after addition:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

/*
Sample Output:
Enter number of rows and columns: 2 3
Enter elements of first matrix:
1 2 3
4 5 6
Enter elements of second matrix:
7 8 9
10 11 12
Resultant matrix after addition:
8 10 12
14 16 18
*/