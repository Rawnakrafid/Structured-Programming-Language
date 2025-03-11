#include <stdio.h>
int main(void)
{
    unsigned int k, candidate, store_max, store_min, q, d;
    int n, m, i, difference, count_k, count_c, min, max;
    int e = 0;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        count_k = 0;
        scanf("%u", &k);
        scanf("%d", &m);
        max = 0;
        min = 33;
        unsigned int p = k;

       for (int y = 1; y <= 31; y++)
            {
                d = d * 2;
            }
        for (int j = 32; j > 0; j--) //count no. of 1 in query num
        {
            if (k >= d)
            {
                k = k - d;
                count_k++;
            }
            d = d / 2;
        }

        for (int x = 0; x < m; x++)
        {
            q = 0;

            scanf("%u", &candidate);
            while (e < i)       //print case no.
            {
                printf("Case %d\n", i);
                e++;
                store_max = candidate;
                store_min = candidate;
            }

            count_c = 0;
            difference = 0;
            d = 1;
            q = candidate;

            for (int z = 1; z <= 31; z++)
            {
                d = d * 2;
            }
            for (int a = 32; a > 0; a--) //print binary of candidate no. in 32 bit, and store no. of 1s
            {
                if (candidate >= d)
                {
                    printf("1");
                    candidate = candidate - d;
                    count_c++;
                }
                else
                {
                    printf("0");
                }
                d = d / 2;
            }

            difference = count_k - count_c;

            if (difference < 0)
            {
                difference = -(difference);
            }
            if (difference == max)
            {
                store_max = (store_max < q) ? q : store_max;
            }

            if (difference > max)
            {
                max = difference;
                store_max = q;
            }
            if (difference == min)
            {
                store_min = (store_min < q) ? store_min : q;
            }

            if (difference < min)
            {
                min = difference;
                store_min = q;
            }

            printf("\n");
        }

        d = 1;      //print query no. binary in 32 bit 
        for (int b = 1; b <= 31; b++)
        {
            d = d * 2;
        }

        for (int j = 32; j > 0; j--)
        {
            if (p >= d)
            {
                printf("1");
                p = p - d;
            }
            else 
            {
                printf("0");
            }
            d = d / 2;
        }

        printf("\n");

        printf("Number with Minimum Difference: %u\n", store_min);
        printf("Number with Maximum Difference: %u\n", store_max);
    }
    return 0;
}