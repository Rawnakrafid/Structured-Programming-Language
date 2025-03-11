#include<stdio.h>
int main(void)
{
    double income;

    printf("Enter your annual income: ");
    scanf("%lf", &income);
    if (income < 0)
     printf("Error! Negative income cannot be calculated");

    else if (income <= 350000) 
    printf("Your income tax is %lf", income*0);

    else if (income <= 450000) 
    printf("Your income tax is %lf", ((income-350000) * 0.05));

    else if  (income <= 750000)
     printf("Your income tax is %lf", (100000*0.05) + ((income-450000) * 0.1));

    else if  (income <= 1150000) 
    printf("Your income tax is %lf", (100000*0.05) + (300000*0.1) + ((income-750000) * 0.15));

    else if (income <= 1650000) 
    printf("Your income tax is %lf", (100000*0.05) + (300000*0.1) + ((400000) * 0.15) + ((income-1150000)*0.2));


    else 
    printf("Your income tax is %lf", (100000*0.05) + (300000*0.1) + ((400000) * 0.15) + ((500000)*0.2) + ((income-1650000)*0.25));
    

return 0;




}