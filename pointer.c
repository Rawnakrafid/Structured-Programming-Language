#include<stdio.h>


void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a = 500, b = 6;

    swap(&a, &b);
    printf("a=%d, b=%d", a, b);

    /***
    int a = 5000;

    printf("%d => %p\n", a, &a);
    int *p;/// int* p;
    p = &a;
    *p = 10000;

    printf("Size of pointer: %d\n", sizeof(p));
    printf("Value of p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value of the Address stored by p: %d\n", *p);
    printf("Value of a: %d\n", a);

    */

    return 0;
}
