#include<stdio.h>

int* takeArray(int size) {
    int i;
    int *a = malloc(size * sizeof(int));
    for(i=0;i<size;i++)
        scanf("%d", a+i);
    return a;
}

void printArray(int *a, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d\t", *(a+i));
    }
}

int main(){
    int *a = takeArray(5);
    printArray(a, 5);
    free(a);
}
