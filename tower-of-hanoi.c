#include<stdio.h>

void towerOfHanoi(int n, int s, int h, int d)
{
    if (n == 1)
    {
        printf("%d => %d\n", s, d);
    }
    else
    {
        towerOfHanoi(n-1, s, d, h);
        towerOfHanoi(1, s, h, d);
        towerOfHanoi(n-1, h, s, d);
    }
}

int main()
{
    towerOfHanoi(2, 1, 2, 3);

}
