#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int stack[MAX];
int top = -1;

void push(int x) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
}


void pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped element: %d\n", stack[top--]);
}


void display() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for(int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main() {
    int choice, x;
    while(1) {
        printf("\nMenu:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &x);
                push(x);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}
