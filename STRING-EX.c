#include<stdio.h>

int main(){
    ///char arr[10] = {'M', 'r', '.', ' ', 'A'};
    ///char arr[10] = "Mr. A";
    /**
    arr[0] = 'M';
    arr[1] = 'r';
    arr[2] = '.';
    arr[3] = ' ';
    arr[4] = 'A';
    arr[5] = '\0'; /// or 0
    */

    /**
    int i;
    for(i=0;i<10;i++){
        printf("%c => %d, address: %p == %p\n", arr[i], arr[i], &arr[i], arr+i);
    }

    printf("Arr value: %p, address of arr %p", arr, &arr);
    */


    /**
    char arr[10];
    ///scanf("%[abc]", &arr);
    gets(arr);
    ///printf("##%s###\n", arr);
    puts(arr);
    */

    char name[100] = "Mr. A";
    int roll = 15;
    char str[1000]="1 2 3";
    char str1[100] = "Hello", str2[50] = "World";


    ///sprintf(str, "Name: %s, Roll: %d", name, roll);
    ///sprintf(str1, "%s%s", str1, str2);
    ///int a, b, c;

    ///sscanf(str, "%d %d %d", &a, &b, &c);

    ///printf("%d\n", a);
    ///printf("%d\n", b);
    ///printf("%d\n", c);

    ///printf("####%s####", str1);

    scanf("%[^\n]", &str1);
    fflush(stdin);
    scanf("%[^\n]", &str2);

    printf("####%s####\n####%s#####\n", str1, str2);


    return 0;

}
