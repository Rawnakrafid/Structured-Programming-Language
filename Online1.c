#include <stdio.h>
int main(void)
{
    int N;
    int k;
    int first, second, third;
    scanf("%d", &N);

    if (N >= 0 && N <= 38)
    {

        if (N == 1)
            printf("0");
        if (N == 2)
            printf("0 1");
        if (N == 3)
            printf("0 1 1");
    
        first = 0;
        second = 1;
        third = 1;
        
        if (N > 3)
        {
            printf("0 1 1 ");
            for (int i = 2; i < (N - 1); i++)
            {
                k = first + second + third;

                printf("%d ", k);
                first = second;
                second = third;
                third = k;
            }
        }
    }
}
