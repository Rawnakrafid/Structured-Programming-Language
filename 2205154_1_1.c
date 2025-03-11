#include<stdio.h>
int main(void)
{
    float a,b;
    char ch;

    printf("Enter first number: \n");
    scanf("%f", &a);

    printf("Which operation do you want to do?");
    scanf(" %c", &ch); 

    printf("Enter second number: \n");
    scanf("%f", &b);




    switch(ch) {
        case '+': printf("\nThe sum is %f.", a+b);
        break;

        case '-': printf("\nThe difference is %f\n", a-b);
        break;

        case '*': printf("\nThe product is %f\n", a*b);
        break;

        case '/': 
         {  if (b!=0) printf("\nThe quotient is %f\n", a/b);
            else printf("\nError! Cannot divide by 0.\n");
            break;}

        default: printf("\nError! Wrong sign.");

    }
    return 0;
}