#include<stdio.h>
void bubble(int a[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(a[j] > a[j+1]) {
                int t = a[j]; a[j] = a[j+1]; a[j+1] = t;
            }
}
int main() {
    int a[100], n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Original: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    bubble(a, n);
    printf("\nSorted: ");
    for(int i = 0; i < n; i++) printf("%d ", a[i]);
    return 0;
}