#include<stdio.h>
int s[100], top = -1;
void push(int x) { if(top < 99) s[++top] = x; }
void pop() { if(top >= 0) printf("Popped: %d\n", s[top--]); }
void show() { for(int i = top; i >= 0; i--) printf("%d ", s[i]); printf("\n"); }
int fact(int n) { return n <= 1 ? 1 : n * fact(n-1); }
int main() {
    push(10); push(20); push(30);
    show(); pop(); show();
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial: %d\n", fact(n));
    return 0;
}