#include<stdio.h>
#include<stdlib.h>
struct Node { int data; struct Node *l, *r; };
struct Node* new(int x) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = x; n->l = n->r = NULL; return n;
}
void inorder(struct Node* r) { if(r) { inorder(r->l); printf("%d ", r->data); inorder(r->r); } }
void preorder(struct Node* r) { if(r) { printf("%d ", r->data); preorder(r->l); preorder(r->r); } }
void postorder(struct Node* r) { if(r) { postorder(r->l); postorder(r->r); printf("%d ", r->data); } }
int main() {
    struct Node* root = new(1);
    root->l = new(2); root->r = new(3);
    root->l->l = new(4); root->l->r = new(5);
    printf("Inorder: "); inorder(root); printf("\n");
    printf("Preorder: "); preorder(root); printf("\n");
    printf("Postorder: "); postorder(root); printf("\n");
    return 0;
}

/*
Inorder: 4 2 5 1 3
Preorder: 1 2 4 5 3
Postorder: 4 5 2 3 1
*/