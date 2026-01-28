#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    char name[20];
    struct Node *next;
};

struct Node* createNode(int id, char name[]) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d %s\n", temp->id, temp->name);
        temp = temp->next;
    }
}

void insertAfter(struct Node* head, int id, int newId, char newName[]) {
    struct Node* temp = head;
    while(temp != NULL && temp->id != id)
        temp = temp->next;
    if(temp != NULL) {
        struct Node* newNode = createNode(newId, newName);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

struct Node* insertBefore(struct Node* head, int id, int newId, char newName[]) {
    struct Node* newNode = createNode(newId, newName);
    if(head == NULL) return newNode;
    if(head->id == id) {
        newNode->next = head;
        return newNode;
    }
    struct Node* temp = head;
    while(temp->next != NULL && temp->next->id != id)
        temp = temp->next;
    if(temp->next != NULL) {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

int main() {
    struct Node* head = NULL;
    struct Node* temp;

    head = createNode(1,"Alice");
    head->next = createNode(2,"Bob");
    head->next->next = createNode(3,"Charlie");
    head->next->next->next = createNode(4,"David");
    head->next->next->next->next = createNode(5,"Eve");

    int choice, id, newId;
    char name[20];
    while(1) {
        printf("\nMenu:\n1.Insert After\n2.Insert Before\n3.Display List\n4.Exit\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter existing id: ");
                scanf("%d", &id);
                printf("Enter new id and name: ");
                scanf("%d %s", &newId, name);
                insertAfter(head, id, newId, name);
                break;
            case 2:
                printf("Enter existing id: ");
                scanf("%d", &id);
                printf("Enter new id and name: ");
                scanf("%d %s", &newId, name);
                head = insertBefore(head, id, newId, name);
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
