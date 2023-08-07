#include <bits/stdc++.h>
#include <stdlib.h>

#define MAXSIZE 10

struct arrayStack {
    int capacity;
    int top;
    int *arr;
};

struct arrayStack *createStack() {
    struct arrayStack *s = (struct arrayStack*)malloc(sizeof(struct arrayStack));
    if(!s) return NULL;

    s->capacity = MAXSIZE;
    s->top = -1;
    s->arr = (int *) malloc(s->capacity* sizeof(int));
    if(!(s->arr)) return NULL;

    return s;
}

int isEmptyStack(struct arrayStack *s) {
    return (s->top == -1);
}

int isFullStack(struct arrayStack *s) {
    return (s->top == s->capacity-1);
}

void push(struct arrayStack *s, int data) {
    if(isFullStack(s)) printf("Stack overflow\n");
    else s->arr[++s->top] = data;
}

int top(struct arrayStack *s) {
    return s->arr[s->top];
}

int pop(struct arrayStack *s) {
    if(isEmptyStack(s)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return s->arr[s->top--];
}

void deleteStack(struct arrayStack *s) {
    if(s) {
        if(s->arr) {
            free(s->arr);
        }
        free(s);
    }
}

int main() {
    struct arrayStack *s = createStack();
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printf("%d\n", pop(s));
    printf("%d\n", top(s));
    deleteStack(s);

    return 0;
}