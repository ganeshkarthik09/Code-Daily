#include <stdio.h>

#define max 100

struct stack {
    int f;
    int r;
    int arr[max];
};

void initialize(struct stack* s) {
    s->f = -1;
    s->r = -1;
    
}

int main() {
    struct stack s;
    
}
