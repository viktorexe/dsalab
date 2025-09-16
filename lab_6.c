// Lab 6: Stack and Recursion - Stack using Array and Factorial using Recursion
#include<stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if(top >= MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
        printf("Pushed: %d\n", value);
    }
}

void pop() {
    if(top < 0) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped: %d\n", stack[top--]);
    }
}

void display() {
    if(top < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for(int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // Stack operations
    push(5);
    push(15);
    push(25);
    display();
    pop();
    display();
    
    // Recursion example
    int num;
    printf("Enter number for factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d\n", num, factorial(num));
    
    return 0;
}

/*
Sample Output:
Pushed: 5
Pushed: 15
Pushed: 25
Stack elements: 25 15 5
Popped: 25
Stack elements: 15 5
Enter number for factorial: 5
Factorial of 5 is: 120
*/