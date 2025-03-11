#include <stdio.h>


typedef struct {
    double r, i;
} Complex ;

void print(Complex *c){
    printf("%.2lf + %.2lfi\n", c->r, c->i);
}

/**
void add(Complex *c1, Complex *c2, Complex *result){

    result->r = c1->r+c2->r;
    result->i = c1->i+c2->i;
}
*/

Complex * add(Complex *c1, Complex *c2){
    Complex *result = (Complex *) malloc(sizeof(Complex));
    result->r = c1->r+c2->r;
    result->i = c1->i+c2->i;
    return result;
}

int main() {
    Complex c1 = {1, 5};
    Complex c2 = {5, 2};
    Complex *c3=add(&c1, &c2);
    print(c3);
    free(c3);
    //print(&c2);

    return 0;

}
