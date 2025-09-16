#include<stdio.h>
#include<stdlib.h>
struct Node { int data; struct Node* next; };
void display(struct Node* h) {
    while(h) { printf("%d -> ", h->data); h = h->next; }
    printf("NULL\n");
}
int main() {
    struct Node *h = NULL, *t, *n;
    int num, d;
    printf("Enter nodes: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
        n = malloc(sizeof(struct Node));
        printf("Data: ");
        scanf("%d", &n->data);
        n->next = NULL;
        if(!h) h = t = n;
        else { t->next = n; t = n; }
    }
    display(h);
    return 0;
}

/*
Enter nodes: 3
Data: 10
Data: 20
Data: 30
10 -> 20 -> 30 -> NULL
*/