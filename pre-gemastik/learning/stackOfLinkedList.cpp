#include <bits/stdc++.h>

struct Stack {
    int data;
    struct Stack *next;
};

struct Stack *createStack() {
    return NULL;
}

void push(struct Stack **top, int data) {
    struct Stack *temp = (struct Stack*) malloc(sizeof(struct Stack));
    if(!temp) printf("Memory full");
    else {
        temp->data = data;
        temp->next = *top;
        *top = temp;
    }
}

int isEmptyStack(struct Stack *top) {
    return (top == NULL);
}

int pop(struct Stack **top) {
    if(isEmptyStack(*top)) return INT_MIN;
    struct Stack *temp = *top;
    int dataStack = temp->data;

    *top = (*top)->next;
    free(temp);
    return dataStack;
}

int top(struct Stack *top) {
    if(isEmptyStack(top)) return INT_MIN;
    return top->next->data;
}

void deleteStack(struct Stack **top) {
    struct Stack *temp = *top;
    while((*top)->next) {
        temp = (*top)->next;
        (*top)->next = temp->next;
        free(temp);
    }
    free(*top);
}

int main() {
    return 0;
}