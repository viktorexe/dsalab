#include<stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10], r, col, i, j;
    printf("Enter rows cols: ");
    scanf("%d %d", &r, &col);
    printf("Enter matrix 1:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &a[i][j]);
    printf("Enter matrix 2:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < col; j++)
            scanf("%d", &b[i][j]);
    printf("Sum:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Enter rows cols: 2 2
Enter matrix 1:
1 2
3 4
Enter matrix 2:
5 6
7 8
Sum:
6 8
10 12
*/