#include<stdio.h>
int linear(int a[], int n, int x) {
    for(int i = 0; i < n; i++)
        if(a[i] == x) return i;
    return -1;
}
int binary(int a[], int n, int x) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) return m;
        if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}
int main() {
    int a[100], n, x, pos;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Search: ");
    scanf("%d", &x);
    pos = linear(a, n, x);
    printf("Linear: %s\n", pos != -1 ? "Found" : "Not Found");
    pos = binary(a, n, x);
    printf("Binary: %s\n", pos != -1 ? "Found" : "Not Found");
    return 0;
}