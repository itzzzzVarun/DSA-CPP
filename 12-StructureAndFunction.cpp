#include<stdio.h>

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

int initialization (struct Rectangle *p, int L, int B) {
    p->length = L;
    p->breadth = B;
}

int area(struct Rectangle r) {
    return r.length*r.breadth;
}

int changeLength(struct Rectangle *p, int newL) {
    p->length = newL;
    return p->length;
}

int main() {
    struct Rectangle r;
    initialization(&r, 10, 4);
    printf("Area is: %d \n", area(r));
    printf("New lenght is: %d \n", changeLength(&r, 20));
    return 0;
}

