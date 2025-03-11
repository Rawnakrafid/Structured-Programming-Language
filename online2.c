#include<stdio.h>
#include <string.h>

int main(void) {
  
    char c[1000];
    scanf("%[^\n]s", &c);
    int l= strlen(c);
    int idx=-1;
char a,b;
scanf("%c %c", &a,&b);

char store[1000];
strcpy(store, c);
int count;

    for (int i=0; i<l; i++) {
        idx=i;
        count=0;
        for (int j=0; j<l; j++ ) {
            if (c[i] == c[j]) {
            idx=j;
            count++;
            }
            
        }
     
        printf("'%c' : %d\n", c[i], count);
    }

for (int i=0; i<l; i++) {
   if (c[i] == b ) {
    c[i] = a;
   }
}
printf("%s", c);
}