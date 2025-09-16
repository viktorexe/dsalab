// Lab 9: Binary Search Tree (BST) - Insertion and Traversal
#include<stdio.h>
#include<stdlib.h>

struct BSTNode {
    int data;
    struct BSTNode* left;
    struct BSTNode* right;
};

struct BSTNode* createNode(int data) {
    struct BSTNode* newNode = (struct BSTNode*)malloc(sizeof(struct BSTNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct BSTNode* insertNode(struct BSTNode* root, int data) {
    if(root == NULL) {
        return createNode(data);
    }
    
    if(data < root->data) {
        root->left = insertNode(root->left, data);
    } else if(data > root->data) {
        root->right = insertNode(root->right, data);
    }
    
    return root;
}

void inorderBST(struct BSTNode* root) {
    if(root != NULL) {
        inorderBST(root->left);
        printf("%d ", root->data);
        inorderBST(root->right);
    }
}

struct BSTNode* searchBST(struct BSTNode* root, int key) {
    if(root == NULL || root->data == key) {
        return root;
    }
    
    if(key < root->data) {
        return searchBST(root->left, key);
    }
    
    return searchBST(root->right, key);
}

int main() {
    struct BSTNode* root = NULL;
    int values[] = {50, 30, 70, 20, 40, 60, 80};
    int n = sizeof(values) / sizeof(values[0]);
    
    // Insert values into BST
    for(int i = 0; i < n; i++) {
        root = insertNode(root, values[i]);
        printf("Inserted: %d\n", values[i]);
    }
    
    printf("BST Inorder Traversal: ");
    inorderBST(root);
    printf("\n");
    
    // Search for a value
    int searchKey = 40;
    struct BSTNode* result = searchBST(root, searchKey);
    if(result != NULL) {
        printf("Element %d found in BST\n", searchKey);
    } else {
        printf("Element %d not found in BST\n", searchKey);
    }
    
    return 0;
}

/*
Sample Output:
Inserted: 50
Inserted: 30
Inserted: 70
Inserted: 20
Inserted: 40
Inserted: 60
Inserted: 80
BST Inorder Traversal: 20 30 40 50 60 70 80
Element 40 found in BST
*/