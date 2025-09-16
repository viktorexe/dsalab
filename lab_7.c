#include<stdio.h>
int q[100], f = -1, r = -1;
void enq(int x) {
    if(r < 99) {
        if(f == -1) f = 0;
        q[++r] = x;
    }
}
void deq() {
    if(f != -1 && f <= r) printf("Dequeued: %d\n", q[f++]);
}
void show() {
    for(int i = f; i <= r; i++) printf("%d ", q[i]);
    printf("\n");
}
int main() {
    enq(10); enq(20); enq(30);
    show(); deq(); show();
    enq(40); show();
    return 0;
}

/*
10 20 30
Dequeued: 10
20 30
20 30 40
*/