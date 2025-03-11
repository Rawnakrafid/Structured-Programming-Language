#include <stdio.h>
int main(void)
{
    int nums1[1000], nums2[1000], c[2000];
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &nums2[j]);
    }
    for (int k = 0; k < m; k++)
    {
        c[k] = nums1[k];
    }
    for (int l = m; l < (m + n); l++)
    {
        c[l] = nums2[l - m];
    }
    int t, min, idx; // sorting the merged array using selection sort
    for (int p = 0; p < (m + n - 1); p++)
    {
        min = c[p];
        idx = p;
        for (int q = (p + 1); q < (m + n); q++)
        {
            if (c[q] < min)
            {
                idx = q;
                min = c[q];
            }
        }
        t = c[p];
        c[p] = min;
        c[idx] = t;
    }

    int mid;
    float median;
    mid = (m + n) / 2;
    if (((m + n) % 2) != 0)
    {
        median = c[mid]; // for odd number of elements
    }
    else
    {
        median = (c[mid] + c[mid - 1]) / 2.0; ////for even number of elements
    }
    printf("%g\n", median);
}