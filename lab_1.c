#include<stdio.h>
int main() {
    int arr[100], n, pos, val, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Array: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nInsert pos val: ");
    scanf("%d %d", &pos, &val);
    for(i = n; i >= pos; i--) arr[i] = arr[i-1];
    arr[pos-1] = val; n++;
    printf("After insert: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nDelete pos: ");
    scanf("%d", &pos);
    for(i = pos-1; i < n-1; i++) arr[i] = arr[i+1];
    n--;
    printf("After delete: ");
    for(i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}