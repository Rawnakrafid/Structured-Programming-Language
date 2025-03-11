#include<stdio.h>
#include<stdlib.h>

int main() {
    int r,c;
scanf("%d %d", &r,&c);

  int i,j;
int **arr = (int **)malloc(r*sizeof(int *));

for(i=0; i<r; i++) {
    *(arr+i) = (int *)malloc(c*sizeof(int));
}

for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
        scanf("%d", (*(arr+i)+j));
    }
}


int check;
scanf("%d", &check);
int sum;
int marker=0;

for(i=0; i<r; i++) {
    sum=0;
    for(j=0; j<c; j++) {
       sum = sum + *(*(arr+i)+j);
    }
    if(sum<=check) {
        marker++;
    }
   

int **new_arr = (int **)malloc((marker)*sizeof(int *));
for(i=0; i<marker; i++) {
    *(arr+i) = (int *)malloc(c*sizeof(int));
}
int current_row=0;
for(i=0; i<r; i++) {
    sum=0;
    for(j=0; j<c; j++) {
       sum = sum + *(*(arr+i)+j);
    }
    if(sum<=check) {
        for(int k=0; k<c; k++) {
            *(*(new_arr+current_row) +k) = *(*(arr+i)+k);
        }
        current_row++;
       
    }
}

for(i=0; i<marker; i++) {
    for(j=0; j<c; j++) {
        printf("%d ", *(*(new_arr+i)+j));
    }
    printf("\n");
}

for(i=0; i<r; i++) {
   free(*(arr+i));
}
free(arr);

for(i=0; i<marker; i++) {
    free(*(new_arr));
}
free(new_arr);

}

}













