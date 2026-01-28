#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    char name[20];
    struct Node *prev;
    struct Node *next;
};


struct Node* createNode(int id, char name[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}


void displayList(struct Node* head) {
    struct Node* temp = head;
    if(temp == NULL) {
        printf("List is empty\n");
        return;
    }
    while(temp != NULL) {
        printf("%d %s\n", temp->id, temp->name);
        temp = temp->next;
    }
}


struct Node* insertEnd(struct Node* head, int id, char name[]) {
    struct Node* newNode = createNode(id, name);
    if(head == NULL) return newNode;
    struct Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}


struct Node* deleteNode(struct Node* head, int id) {
    struct Node* temp = head;
    while(temp != NULL && temp->id != id)
        temp = temp->next;
    if(temp == NULL) return head; 
    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next; 
    if(temp->next != NULL)
        temp->next->prev = temp->prev;
    free(temp);
    return head;
}

int main() {
    struct Node* head = NULL;

    
    head = insertEnd(head, 1, "Alice");
    head = insertEnd(head, 2, "Bob");
    head = insertEnd(head, 3, "Charlie");
    head = insertEnd(head, 4, "David");
    head = insertEnd(head, 5, "Eve");

    int choice, id;
    char name[20];

    while(1) {
        printf("\nMenu:\n1.Insert Entry\n2.Delete Entry\n3.Display List\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter id and name: ");
                scanf("%d %s", &id, name);
                head = insertEnd(head, id, name);
                break;
            case 2:
                printf("Enter id to delete: ");
                scanf("%d", &id);
                head = deleteNode(head, id);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}
