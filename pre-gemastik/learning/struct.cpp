#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void addAtEnding(int data) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void addAtBeginning(int data) {
    struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node *temp = head;
    newNode->data = data;
    newNode->next = NULL;
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNode(int position) {
    int k=1;
    struct Node *p, *q;
    
    if(head==NULL) {
        printf("List empty");
        return;
    }
    p = head;

    if(position==1) {
        head = head->next;
        free(p);
        return;
    } else {
        while((p!=NULL)&&(k<position)) {
            k++;
            q = p;
            p=p->next;            
        }
        if(p==NULL) {
            printf("Potition does't exist");
        } else {
            q->next = p->next;
            free(p);
        }
    }
}

void deleteLinkedList() {
    struct Node *aux, *it;
    it = head;

    while (it)
    {
        aux = it->next;
        free(it);
        it = aux;
    }
    head = NULL;
}

int listLength() {
    struct Node *current = head;
    int count=0;
    while(current) {
        count++;
        current = current->next;
    }
    return count;
}

void traverNode() {
    struct Node *temp = head;
    while(temp) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    addAtEnding(1);
    addAtEnding(2);
    addAtEnding(3);
    traverNode();
    addAtBeginning(4);
    addAtBeginning(5);
    traverNode();
    printf("%d ", listLength());
    // addAtBeginning(2);
    // addAtBeginning(3);

    return 0;
}