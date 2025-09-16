#include<stdio.h>
#include<stdlib.h>
struct Node { int data; struct Node *l, *r; };
struct Node* insert(struct Node* r, int x) {
    if(!r) { r = malloc(sizeof(struct Node)); r->data = x; r->l = r->r = NULL; }
    else if(x < r->data) r->l = insert(r->l, x);
    else r->r = insert(r->r, x);
    return r;
}
void inorder(struct Node* r) { if(r) { inorder(r->l); printf("%d ", r->data); inorder(r->r); } }
struct Node* search(struct Node* r, int x) {
    if(!r || r->data == x) return r;
    return x < r->data ? search(r->l, x) : search(r->r, x);
}
int main() {
    struct Node* root = NULL;
    int a[] = {50, 30, 70, 20, 40};
    for(int i = 0; i < 5; i++) root = insert(root, a[i]);
    printf("Inorder: "); inorder(root); printf("\n");
    printf("Search 30: %s\n", search(root, 30) ? "Found" : "Not Found");
    return 0;
}

/*
Inorder: 20 30 40 50 70
Search 30: Found
*/