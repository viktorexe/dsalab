// Lab 5: Linked List Operations - Insertion and Traversal
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    
    if(*head == NULL) {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;
    
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }
    
    printf("Linked List: ");
    displayList(head);
    
    return 0;
}

/*
Sample Output:
Enter number of nodes: 4
Enter data for node 1: 15
Enter data for node 2: 25
Enter data for node 3: 35
Enter data for node 4: 45
Linked List: 15 -> 25 -> 35 -> 45 -> NULL
*/